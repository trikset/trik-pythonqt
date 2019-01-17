#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_core0.h"

static void* polymorphichandler_QEvent(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::ApplicationStateChange) {
        *class_name = "QApplicationStateChangeEvent";
        return (QApplicationStateChangeEvent*)object;
    }
    if (object->type() == QEvent::ChildAdded || object->type() == QEvent::ChildPolished || object->type() == QEvent::ChildRemoved) {
        *class_name = "QChildEvent";
        return (QChildEvent*)object;
    }
    if (object->type() == QEvent::DeferredDelete) {
        *class_name = "QDeferredDeleteEvent";
        return (QDeferredDeleteEvent*)object;
    }
    if (object->type() == QEvent::DynamicPropertyChange) {
        *class_name = "QDynamicPropertyChangeEvent";
        return (QDynamicPropertyChangeEvent*)object;
    }
    if (object->type() == QEvent::None) {
        *class_name = "QEvent";
        return (QEvent*)object;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        return (QTimerEvent*)object;
    }
    return NULL;
}


void PythonQt_init_QtCore(PyObject* module) {
PythonQt::priv()->registerCPPClass("QApplicationStateChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QApplicationStateChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QBasicMutex", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicMutex>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBasicMutex>, module, 0);
PythonQt::priv()->registerCPPClass("QBasicTimer", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QBasicTimer>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QChildEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QChildEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QChildEvent>, module, 0);
PythonQt::priv()->registerClass(&QCoreApplication::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QCoreApplication>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDataStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDataStream>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDeferredDeleteEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDeferredDeleteEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDir>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QDynamicPropertyChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDynamicPropertyChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QEvent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEvent>, module, 0);
PythonQt::priv()->registerClass(&QEventLoop::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventLoop>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventLoop>, module, 0);
PythonQt::priv()->registerClass(&QFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFile>, module, 0);
PythonQt::priv()->registerClass(&QFileDevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDevice>, module, 0);
PythonQt::priv()->registerCPPClass("QFileInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileInfo>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QIODevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIODevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIODevice>, module, 0);
PythonQt::priv()->registerCPPClass("QMarginsF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMarginsF>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMessageLogContext", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageLogContext>, module, 0);
PythonQt::priv()->registerCPPClass("QMessageLogger", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogger>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QMetaType", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaType>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QMutex", "QBasicMutex", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMutex>, NULL, module, 0);
PythonQt::priv()->registerClass(&QObject::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QObject>, module, 0);
PythonQt::priv()->registerCPPClass("QReadWriteLock", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QReadWriteLock>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSignalBlocker", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalBlocker>, NULL, module, 0);
PythonQt::priv()->registerClass(&QSocketNotifier::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSocketNotifier>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSocketNotifier>, module, 0);
PythonQt::priv()->registerCPPClass("QStringMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStringMatcher>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSysInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSysInfo>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSysInfo>, module, 0);
PythonQt::priv()->registerCPPClass("QTimerEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimerEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimerEvent>, module, 0);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);

PythonQtRegisterListTemplateConverterForKnownClass(QList, QFileInfo);
}
