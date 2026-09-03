#pragma once
#ifndef MIQT_LIBMIQT_LIBMIQT_H
#define MIQT_LIBMIQT_LIBMIQT_H

#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string {
    size_t len;
    char* data;
};

struct miqt_array {
    size_t len;
    void* data;
};

struct miqt_map {
    size_t len;
    void* keys;
    void* values;
};

typedef const char const_char;

#ifdef __cplusplus
}

// Owns a runtime/cgo.Handle that was transferred from Go to C++.
//
// The generated bindings use this type for signal functors and virtual method
// overrides. It is deliberately move-only: copying a raw cgo.Handle would make
// it possible to release the same handle more than once. A move clears the
// source, so Qt and STL ownership transfers remain safe.
template<void (*Release)(intptr_t)>
class miqt_callback_handle final {
public:
    miqt_callback_handle() noexcept : handle_(0) {}
    explicit miqt_callback_handle(intptr_t handle) noexcept : handle_(handle) {}

    miqt_callback_handle(const miqt_callback_handle&) = delete;
    miqt_callback_handle& operator=(const miqt_callback_handle&) = delete;

    miqt_callback_handle(miqt_callback_handle&& other) noexcept : handle_(other.handle_) {
        other.handle_ = 0;
    }

    miqt_callback_handle& operator=(miqt_callback_handle&& other) noexcept {
        if (this != &other) {
            reset();
            handle_ = other.handle_;
            other.handle_ = 0;
        }
        return *this;
    }

    ~miqt_callback_handle() {
        reset();
    }

    explicit operator bool() const noexcept {
        return handle_ != 0;
    }

    intptr_t value() const noexcept {
        return handle_;
    }

    void reset(intptr_t handle = 0) noexcept {
        const intptr_t old_handle = handle_;
        handle_ = handle;
        if (old_handle != 0) {
            Release(old_handle);
        }
    }

private:
    intptr_t handle_;
};
#endif

#endif
