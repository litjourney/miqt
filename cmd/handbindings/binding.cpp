#include "binding.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <memory>

#include "../../libmiqt/libmiqt.h"

extern "C" {
    extern void miqt_exec_callback(intptr_t cb, int argc, void* argv);
    extern void miqt_handbindings_release_handle(intptr_t cb);
}

PQApplication QApplication_new(int* argc, char** argv) {
    // QApplication takes these parameters byref, not by value
    return new QApplication(*argc, argv);
}

PQWidget QWidget_new() {
    return new QWidget();
}

void QWidget_show(PQWidget self) {
    static_cast<QWidget*>(self)->show();    
}

PQPushButton QPushButton_new(const char* label, PQWidget parent) {
    return new QPushButton(label, static_cast<QWidget*>(parent));
}

void QPushButton_show(PQPushButton self) {
    static_cast<QPushButton*>(self)->show();
}

void QPushButton_connect_pressed(PQPushButton self, intptr_t cb) {
    auto handle = std::make_shared<miqt_callback_handle<miqt_handbindings_release_handle>>(cb);
    QPushButton::connect(static_cast<QPushButton*>(self), &QPushButton::pressed, [handle]() {
        miqt_exec_callback(handle->value(), 0, nullptr);
    });
}

int QApplication_exec(PQApplication self) {
    return static_cast<QApplication*>(self)->exec();
}
