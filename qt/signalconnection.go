package qt

// SignalConnection is a handle to a Qt signal-slot connection returned by an
// OnSignal method. Dropping this Go value only frees the connection token; it
// does not disconnect the signal.
type SignalConnection = QMetaObject__Connection

// Disconnect prevents future signal emissions from invoking the callback.
// A callback that Qt has already queued may still run before its cgo.Handle is
// released.
func (this *QMetaObject__Connection) Disconnect() bool {
	if this == nil || this.h == nil {
		return false
	}

	return QObject_DisconnectWithQMetaObjectConnection(this)
}
