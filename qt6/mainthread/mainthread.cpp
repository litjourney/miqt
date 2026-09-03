#include <QMetaObject>
#include <QCoreApplication>
#include <QThread>
#include <memory>

#include "mainthread.h"
#include "../../libmiqt/libmiqt.h"

extern "C" {
    void mainthread_exec_handle(intptr_t);
    void mainthread_release_handle(intptr_t);
}

void mainthread_exec(intptr_t cb) {
    auto handle = std::make_shared<miqt_callback_handle<mainthread_release_handle>>(cb);
    QMetaObject::invokeMethod(qApp, [handle]{
        mainthread_exec_handle(handle->value());
    }, Qt::QueuedConnection);
}

// Returns 1 if the calling thread is the Qt main thread, 0 otherwise.
// Useful to skip queueing when already on the main thread (would deadlock).
int mainthread_is_current(void) {
    QCoreApplication* app = QCoreApplication::instance();
    if (app == nullptr) {
        return 0;
    }
    return QThread::currentThread() == app->thread() ? 1 : 0;
}
