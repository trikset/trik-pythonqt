#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_core0.h"
#include "com_trolltech_qt_core1.h"
#include "com_trolltech_qt_core2.h"

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
    if (object->type() == QEvent::StateMachineSignal) {
        *class_name = "QStateMachine__SignalEvent";
        return (QStateMachine::SignalEvent*)object;
    }
    if (object->type() == QEvent::StateMachineWrapped) {
        *class_name = "QStateMachine__WrappedEvent";
        return (QStateMachine::WrappedEvent*)object;
    }
    if (object->type() == QEvent::Timer) {
        *class_name = "QTimerEvent";
        return (QTimerEvent*)object;
    }
    return NULL;
}


void PythonQt_init_QtCore(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAnimation>, module, 0);
PythonQt::priv()->registerClass(&QAbstractItemModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractItemModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractItemModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractListModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractListModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractListModel>, module, 0);
PythonQt::priv()->registerClass(&QAbstractState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractState>, module, 0);
PythonQt::priv()->registerClass(&QAbstractTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAbstractTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractTransition>, module, 0);
PythonQt::priv()->registerClass(&QAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAnimationGroup>, module, 0);
PythonQt::priv()->registerCPPClass("QApplicationStateChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QApplicationStateChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QBuffer::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBuffer>, module, 0);
PythonQt::priv()->registerCPPClass("QByteArrayMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QByteArrayMatcher>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QChildEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QChildEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QChildEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QCommandLineParser", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCommandLineParser>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCoreApplication::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QCoreApplication>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QCryptographicHash", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QCryptographicHash>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDataStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDataStream>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDeferredDeleteEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDeferredDeleteEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDirIterator", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDirIterator>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDynamicPropertyChangeEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QDynamicPropertyChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QEvent", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEvent>, module, 0);
PythonQt::priv()->registerClass(&QEventLoop::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventLoop>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventLoop>, module, 0);
PythonQt::priv()->registerClass(&QEventTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QEventTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEventTransition>, module, 0);
PythonQt::priv()->registerCPPClass("QFactoryInterface", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QFactoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFactoryInterface>, module, 0);
PythonQt::priv()->registerClass(&QFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFile>, module, 0);
PythonQt::priv()->registerClass(&QFileDevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFileDevice>, module, 0);
PythonQt::priv()->registerClass(&QFileSelector::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSelector>, NULL, module, 0);
PythonQt::priv()->registerClass(&QFileSystemWatcher::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFileSystemWatcher>, NULL, module, 0);
PythonQt::priv()->registerClass(&QFinalState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QFinalState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFinalState>, module, 0);
PythonQt::priv()->registerClass(&QHistoryState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QHistoryState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHistoryState>, module, 0);
PythonQt::priv()->registerClass(&QIODevice::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIODevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIODevice>, module, 0);
PythonQt::priv()->registerClass(&QIdentityProxyModel::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QIdentityProxyModel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIdentityProxyModel>, module, 0);
PythonQt::priv()->registerCPPClass("QJsonParseError", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QJsonParseError>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QJsonParseError>, module, 0);
PythonQt::priv()->registerClass(&QLibrary::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibrary>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QLibraryInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLibraryInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QLockFile", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLockFile>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QLoggingCategory", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QLoggingCategory>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QMarginsF", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMarginsF>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMarginsF>, module, PythonQt::Type_Divide|PythonQt::Type_InplaceDivide);
PythonQt::priv()->registerCPPClass("QMessageAuthenticationCode", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageAuthenticationCode>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QMessageLogContext", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogContext>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMessageLogContext>, module, 0);
PythonQt::priv()->registerCPPClass("QMessageLogger", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMessageLogger>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QMetaClassInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaClassInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QMetaEnum", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaEnum>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QMetaMethod", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaMethod>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMetaProperty", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaProperty>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QMetaType", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMetaType>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QMimeData::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMimeData>, module, 0);
PythonQt::priv()->registerCPPClass("QMimeDatabase", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QMimeDatabase>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QOperatingSystemVersion", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QOperatingSystemVersion>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QOperatingSystemVersion>, module, 0);
PythonQt::priv()->registerClass(&QParallelAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QParallelAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QParallelAnimationGroup>, module, 0);
PythonQt::priv()->registerClass(&QPauseAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPauseAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPauseAnimation>, module, 0);
PythonQt::priv()->registerClass(&QProcess::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QProcess>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QProcess>, module, 0);
PythonQt::priv()->registerClass(&QPropertyAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QPropertyAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPropertyAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QRandomGenerator64", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRandomGenerator64>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QReadWriteLock", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QReadWriteLock>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QResource", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QResource>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResource>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QRunnable", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QRunnable>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRunnable>, module, 0);
PythonQt::priv()->registerClass(&QSaveFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSaveFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSaveFile>, module, 0);
PythonQt::priv()->registerCPPClass("QSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSemaphore>, NULL, module, 0);
PythonQt::priv()->registerClass(&QSequentialAnimationGroup::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSequentialAnimationGroup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSequentialAnimationGroup>, module, 0);
PythonQt::priv()->registerClass(&QSettings::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSettings>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSettings>, module, 0);
PythonQt::priv()->registerClass(&QSharedMemory::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSharedMemory>, NULL, module, 0);
PythonQt::priv()->registerClass(&QSignalMapper::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalMapper>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalMapper>, module, 0);
PythonQt::priv()->registerClass(&QSignalTransition::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSignalTransition>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSignalTransition>, module, 0);
PythonQt::priv()->registerClass(&QSocketNotifier::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QSocketNotifier>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSocketNotifier>, module, 0);
PythonQt::priv()->registerCPPClass("QStandardPaths", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStandardPaths>, NULL, module, 0);
PythonQt::priv()->registerClass(&QState::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QState>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QState>, module, 0);
PythonQt::priv()->registerClass(&QStateMachine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QStateMachine>, module, 0);
PythonQt::priv()->registerCPPClass("QStateMachine::SignalEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine__SignalEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QStateMachine::WrappedEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStateMachine__WrappedEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QStringMatcher", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QStringMatcher>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSysInfo", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSysInfo>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSysInfo>, module, 0);
PythonQt::priv()->registerCPPClass("QSystemSemaphore", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QSystemSemaphore>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTemporaryDir", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryDir>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QTemporaryFile::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTemporaryFile>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTemporaryFile>, module, 0);
PythonQt::priv()->registerCPPClass("QTextBoundaryFinder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextBoundaryFinder>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QTextCodec", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextCodec>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextCodec>, module, 0);
PythonQt::priv()->registerCPPClass("QTextDecoder", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextDecoder>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTextStream", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTextStream>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTextStream>, module, 0);
PythonQt::priv()->registerClass(&QThread::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThread>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QThread>, module, 0);
PythonQt::priv()->registerClass(&QThreadPool::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QThreadPool>, NULL, module, 0);
PythonQt::priv()->registerClass(&QTimeLine::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimeLine>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimeLine>, module, 0);
PythonQt::priv()->registerCPPClass("QTimerEvent", "QEvent", "QtCore", PythonQtCreateObject<PythonQtWrapper_QTimerEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTimerEvent>, module, 0);
PythonQt::priv()->registerClass(&QTranslator::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QTranslator>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTranslator>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QUrlQuery", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QUrlQuery>, NULL, module, 0);
PythonQt::priv()->registerClass(&QVariantAnimation::staticMetaObject, "QtCore", PythonQtCreateObject<PythonQtWrapper_QVariantAnimation>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVariantAnimation>, module, 0);
PythonQt::priv()->registerCPPClass("QWaitCondition", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QWaitCondition>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QXmlStreamEntityResolver", "", "QtCore", PythonQtCreateObject<PythonQtWrapper_QXmlStreamEntityResolver>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QXmlStreamEntityResolver>, module, 0);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);

PythonQtRegisterListTemplateConverterForKnownClass(QList, QCommandLineOption);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMimeType);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QModelIndex);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPersistentModelIndex);
}
