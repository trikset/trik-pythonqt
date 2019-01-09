#include <PythonQt.h>
#include <PythonQtConversion.h>
#include <QDateTime>
#include <QDir>
#include <QObject>
#include <QStringList>
#include <QVarLengthArray>
#include <QVariant>
#include <qbasictimer.h>
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdir.h>
#include <qevent.h>
#include <qeventloop.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmargins.h>
#include <qmetatype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qreadwritelock.h>
#include <qrect.h>
#include <qsocketnotifier.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qsysinfo.h>



class PythonQtWrapper_QApplicationStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QApplicationStateChangeEvent* new_QApplicationStateChangeEvent(Qt::ApplicationState  state);
void delete_QApplicationStateChangeEvent(QApplicationStateChangeEvent* obj) { delete obj; } 
   Qt::ApplicationState  applicationState(QApplicationStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QBasicMutex : public QBasicMutex
{
public:
    PythonQtShell_QBasicMutex():QBasicMutex(),_wrapper(NULL) {};

   ~PythonQtShell_QBasicMutex();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBasicMutex : public QObject
{ Q_OBJECT
public:
public slots:
QBasicMutex* new_QBasicMutex();
void delete_QBasicMutex(QBasicMutex* obj) { delete obj; } 
   bool  isRecursive(QBasicMutex* theWrappedObject);
   bool  isRecursive(QBasicMutex* theWrappedObject) const;
   void lock(QBasicMutex* theWrappedObject);
   bool  tryLock(QBasicMutex* theWrappedObject);
   bool  try_lock(QBasicMutex* theWrappedObject);
   void unlock(QBasicMutex* theWrappedObject);
};





class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer& other) {
QBasicTimer* a = new QBasicTimer();
*((QBasicTimer*)a) = other;
return a; }
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; } 
   bool  isActive(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
   void start(QBasicTimer* theWrappedObject, int  msec, Qt::TimerType  timerType, QObject*  obj);
   void stop(QBasicTimer* theWrappedObject);
   int  timerId(QBasicTimer* theWrappedObject) const;
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};

   ~PythonQtShell_QChildEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; } 
   bool  added(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   bool  polished(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  py_q_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  ApplicationFlags = QCoreApplication::ApplicationFlags};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; } 
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_applicationDirPath();
   QString  static_QCoreApplication_applicationFilePath();
   QString  static_QCoreApplication_applicationName();
   qint64  static_QCoreApplication_applicationPid();
   QString  static_QCoreApplication_applicationVersion();
   QStringList  static_QCoreApplication_arguments();
   bool  static_QCoreApplication_closingDown();
   QAbstractEventDispatcher*  static_QCoreApplication_eventDispatcher();
   int  static_QCoreApplication_exec();
   void static_QCoreApplication_exit(int  retcode = 0);
   void static_QCoreApplication_flush();
   bool  static_QCoreApplication_hasPendingEvents();
   bool  static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   QCoreApplication*  static_QCoreApplication_instance();
   bool  static_QCoreApplication_isQuitLockEnabled();
   bool  static_QCoreApplication_isSetuidAllowed();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  py_q_notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->py_q_notify(arg__1, arg__2));}
   QString  static_QCoreApplication_organizationDomain();
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority = Qt::NormalEventPriority);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType = 0);
   bool  static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver = nullptr, int  event_type = 0);
   void static_QCoreApplication_setApplicationName(const QString&  application);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   void static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher);
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   void static_QCoreApplication_setQuitLockEnabled(bool  enabled);
   void static_QCoreApplication_setSetuidAllowed(bool  allow);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation = nullptr, int  n = -1);
};





class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ByteOrder FloatingPointPrecision Status Version )
enum ByteOrder{
  BigEndian = QDataStream::BigEndian,   LittleEndian = QDataStream::LittleEndian};
enum FloatingPointPrecision{
  SinglePrecision = QDataStream::SinglePrecision,   DoublePrecision = QDataStream::DoublePrecision};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData,   WriteFailed = QDataStream::WriteFailed};
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4,   Qt_4_5 = QDataStream::Qt_4_5,   Qt_4_6 = QDataStream::Qt_4_6,   Qt_4_7 = QDataStream::Qt_4_7,   Qt_4_8 = QDataStream::Qt_4_8,   Qt_4_9 = QDataStream::Qt_4_9,   Qt_5_0 = QDataStream::Qt_5_0,   Qt_5_1 = QDataStream::Qt_5_1,   Qt_5_2 = QDataStream::Qt_5_2,   Qt_5_3 = QDataStream::Qt_5_3,   Qt_5_4 = QDataStream::Qt_5_4,   Qt_5_5 = QDataStream::Qt_5_5,   Qt_5_6 = QDataStream::Qt_5_6,   Qt_5_7 = QDataStream::Qt_5_7,   Qt_5_8 = QDataStream::Qt_5_8,   Qt_5_9 = QDataStream::Qt_5_9,   Qt_5_10 = QDataStream::Qt_5_10,   Qt_5_11 = QDataStream::Qt_5_11,   Qt_5_12 = QDataStream::Qt_5_12,   Qt_DefaultCompiledVersion = QDataStream::Qt_DefaultCompiledVersion};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; } 
   void abortTransaction(QDataStream* theWrappedObject);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream::ByteOrder  byteOrder(QDataStream* theWrappedObject) const;
   bool  commitTransaction(QDataStream* theWrappedObject);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   QDataStream::FloatingPointPrecision  floatingPointPrecision(QDataStream* theWrappedObject) const;
   void resetStatus(QDataStream* theWrappedObject);
   void rollbackTransaction(QDataStream* theWrappedObject);
   void setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1);
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
   void setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   void startTransaction(QDataStream* theWrappedObject);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   void unsetDevice(QDataStream* theWrappedObject);
   int  version(QDataStream* theWrappedObject) const;

   QString readQString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QString readString(QDataStream* d) { QString r; (*d) >> r; return r; }
   QChar readQChar(QDataStream* d) { QChar r; (*d) >> r; return r; }
   QStringList readQStringList(QDataStream* d) { QStringList r; (*d) >> r; return r; }
   QVariant readQVariant(QDataStream* d) { QVariant r; (*d) >> r; return r; }
   bool readBool(QDataStream* d) { bool r; (*d) >> r; return r; }
   qint8 readInt8(QDataStream* d) { qint8 r; (*d) >> r; return r; }
   quint8 readUInt8(QDataStream* d) { quint8 r; (*d) >> r; return r; }
   qint16 readInt16(QDataStream* d) { qint16 r; (*d) >> r; return r; }
   quint16 readUInt16(QDataStream* d) { quint16 r; (*d) >> r; return r; }
   qint32 readInt32(QDataStream* d) { qint32 r; (*d) >> r; return r; }
   quint32 readUInt32(QDataStream* d) { quint32 r; (*d) >> r; return r; }
   qint64 readInt64(QDataStream* d) { qint64 r; (*d) >> r; return r; }
   quint64 readUInt64(QDataStream* d) { quint64 r; (*d) >> r; return r; }
   float readFloat(QDataStream* d) { float r; (*d) >> r; return r; }
   double readDouble(QDataStream* d) { double r; (*d) >> r; return r; }

   void writeQString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeString(QDataStream* d, const QString& v) { (*d) << v; }
   void writeQChar(QDataStream* d, const QChar& v) { (*d) << v; }
   void writeQStringList(QDataStream* d, const QStringList& v) { (*d) << v; }
   void writeQVariant(QDataStream* d, const QVariant& v) { (*d) << v; }
   void writeBool(QDataStream* d, bool v) { (*d) << v; }
   void writeInt8(QDataStream* d, qint8 v) { (*d) << v; }
   void writeUInt8(QDataStream* d, quint8 v) { (*d) << v; }
   void writeInt16(QDataStream* d, qint16 v) { (*d) << v; }
   void writeUInt16(QDataStream* d, quint16 v) { (*d) << v; }
   void writeInt32(QDataStream* d, qint32 v) { (*d) << v; }
   void writeUInt32(QDataStream* d, quint32 v) { (*d) << v; }
   void writeInt64(QDataStream* d, qint64 v) { (*d) << v; }
   void writeUInt64(QDataStream* d, quint64 v) { (*d) << v; }
   void writeFloat(QDataStream* d, float v) { (*d) << v; }
   void writeDouble(QDataStream* d, double v) { (*d) << v; }

   int writeRawData(QDataStream* d, PyObject* o) {
     bool ok;
     QByteArray r = PythonQtConv::PyObjGetBytes(o, false, ok);
     return (*d).writeRawData(r.constData(), r.size());
   }

   PyObject* readRawData(QDataStream* d, int len) {
     QByteArray r;
     r.resize(len);
     int result = d->readRawData(r.data(), r.size());
     if (result>=0) {
       return PyBytes_FromStringAndSize(r.data(), result);
     } else {
       Py_INCREF(Py_None);
       return Py_None;
     }
   }
    
};





class PythonQtWrapper_QDeferredDeleteEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDeferredDeleteEvent* new_QDeferredDeleteEvent();
void delete_QDeferredDeleteEvent(QDeferredDeleteEvent* obj) { delete obj; } 
   int  loopLevel(QDeferredDeleteEvent* theWrappedObject) const;
};





class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDot = QDir::NoDot,   NoDotDot = QDir::NoDotDot,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; } 
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QString  absolutePath(QDir* theWrappedObject) const;
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QString  canonicalPath(QDir* theWrappedObject) const;
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   bool  cdUp(QDir* theWrappedObject);
   QString  static_QDir_cleanPath(const QString&  path);
   uint  count(QDir* theWrappedObject) const;
   QDir  static_QDir_current();
   QString  static_QDir_currentPath();
   QString  dirName(QDir* theWrappedObject) const;
   QList<QFileInfo >  static_QDir_drives();
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   bool  exists(QDir* theWrappedObject) const;
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QDir  static_QDir_home();
   QString  static_QDir_homePath();
   bool  isAbsolute(QDir* theWrappedObject) const;
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  isEmpty(QDir* theWrappedObject, QDir::Filters  filters = QDir::Filters(AllEntries | NoDotAndDotDot)) const;
   bool  isReadable(QDir* theWrappedObject) const;
   bool  isRelative(QDir* theWrappedObject) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   bool  isRoot(QDir* theWrappedObject) const;
   QChar  static_QDir_listSeparator();
   bool  makeAbsolute(QDir* theWrappedObject);
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   bool  __ne__(QDir* theWrappedObject, const QDir&  dir) const;
   bool  __eq__(QDir* theWrappedObject, const QDir&  dir) const;
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
   QString  path(QDir* theWrappedObject) const;
   void refresh(QDir* theWrappedObject) const;
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   bool  removeRecursively(QDir* theWrappedObject);
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   QDir  static_QDir_root();
   QString  static_QDir_rootPath();
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   QChar  static_QDir_separator();
   bool  static_QDir_setCurrent(const QString&  path);
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   void setPath(QDir* theWrappedObject, const QString&  path);
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   void swap(QDir* theWrappedObject, QDir&  other);
   QDir  static_QDir_temp();
   QString  static_QDir_tempPath();
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
    QString py_toString(QDir*);
    bool __nonzero__(QDir* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; } 
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(NULL) {};
    PythonQtShell_QEvent(const QEvent&  other):QEvent(other),_wrapper(NULL) {};

   ~PythonQtShell_QEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   FocusAboutToChange = QEvent::FocusAboutToChange,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ReadOnlyChange = QEvent::ReadOnlyChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AcceptDropsChange = QEvent::AcceptDropsChange,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   MacGLClearDrawable = QEvent::MacGLClearDrawable,   StateMachineSignal = QEvent::StateMachineSignal,   StateMachineWrapped = QEvent::StateMachineWrapped,   TouchBegin = QEvent::TouchBegin,   TouchUpdate = QEvent::TouchUpdate,   TouchEnd = QEvent::TouchEnd,   NativeGesture = QEvent::NativeGesture,   RequestSoftwareInputPanel = QEvent::RequestSoftwareInputPanel,   CloseSoftwareInputPanel = QEvent::CloseSoftwareInputPanel,   WinIdChange = QEvent::WinIdChange,   Gesture = QEvent::Gesture,   GestureOverride = QEvent::GestureOverride,   ScrollPrepare = QEvent::ScrollPrepare,   Scroll = QEvent::Scroll,   Expose = QEvent::Expose,   InputMethodQuery = QEvent::InputMethodQuery,   OrientationChange = QEvent::OrientationChange,   TouchCancel = QEvent::TouchCancel,   ThemeChange = QEvent::ThemeChange,   SockClose = QEvent::SockClose,   PlatformPanel = QEvent::PlatformPanel,   StyleAnimationUpdate = QEvent::StyleAnimationUpdate,   ApplicationStateChange = QEvent::ApplicationStateChange,   WindowChangeInternal = QEvent::WindowChangeInternal,   ScreenChangeInternal = QEvent::ScreenChangeInternal,   PlatformSurface = QEvent::PlatformSurface,   Pointer = QEvent::Pointer,   TabletTrackingChange = QEvent::TabletTrackingChange,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
QEvent* new_QEvent(const QEvent&  other);
void delete_QEvent(QEvent* obj) { delete obj; } 
   void accept(QEvent* theWrappedObject);
   void ignore(QEvent* theWrappedObject);
   bool  isAccepted(QEvent* theWrappedObject) const;
   QEvent*  operator_assign(QEvent* theWrappedObject, const QEvent&  other);
   int  static_QEvent_registerEventType(int  hint = -1);
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   bool  spontaneous(QEvent* theWrappedObject) const;
   QEvent::Type  type(QEvent* theWrappedObject) const;
    QString py_toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = nullptr):QEventLoop(parent),_wrapper(NULL) {};

   ~PythonQtShell_QEventLoop();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   EventLoopExec = QEventLoop::EventLoopExec,   DialogExec = QEventLoop::DialogExec};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = nullptr);
void delete_QEventLoop(QEventLoop* obj) { delete obj; } 
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void exit(QEventLoop* theWrappedObject, int  returnCode = 0);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
   void wakeUp(QEventLoop* theWrappedObject);
};





class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(NULL) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFile();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   bool  exists(QFile* theWrappedObject) const;
   bool  static_QFile_exists(const QString&  fileName);
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  open(QFile* theWrappedObject, int  fd, QIODevice::OpenMode  ioFlags, QFileDevice::FileHandleFlags  handleFlags = QFileDevice::DontCloseHandle);
   QFileDevice::Permissions  static_QFile_permissions(const QString&  filename);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  static_QFile_setPermissions(const QString&  filename, QFileDevice::Permissions  permissionSpec);
   QString  symLinkTarget(QFile* theWrappedObject) const;
   QString  static_QFile_symLinkTarget(const QString&  fileName);
};





class PythonQtShell_QFileDevice : public QFileDevice
{
public:
    PythonQtShell_QFileDevice():QFileDevice(),_wrapper(NULL) {};
    PythonQtShell_QFileDevice(QObject*  parent):QFileDevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFileDevice();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QString  fileName() const;
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual QFileDevice::Permissions  permissions() const;
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  resize(qint64  sz);
virtual bool  seek(qint64  pos);
virtual bool  setPermissions(QFileDevice::Permissions  permissionSpec);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFileDevice : public QFileDevice
{ public:
inline QString  py_q_fileName() const { return QFileDevice::fileName(); }
inline QFileDevice::Permissions  py_q_permissions() const { return QFileDevice::permissions(); }
inline bool  py_q_resize(qint64  sz) { return QFileDevice::resize(sz); }
inline bool  py_q_setPermissions(QFileDevice::Permissions  permissionSpec) { return QFileDevice::setPermissions(permissionSpec); }
};

class PythonQtWrapper_QFileDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError FileHandleFlag MemoryMapFlags Permission )
Q_FLAGS(FileHandleFlags Permissions )
enum FileError{
  NoError = QFileDevice::NoError,   ReadError = QFileDevice::ReadError,   WriteError = QFileDevice::WriteError,   FatalError = QFileDevice::FatalError,   ResourceError = QFileDevice::ResourceError,   OpenError = QFileDevice::OpenError,   AbortError = QFileDevice::AbortError,   TimeOutError = QFileDevice::TimeOutError,   UnspecifiedError = QFileDevice::UnspecifiedError,   RemoveError = QFileDevice::RemoveError,   RenameError = QFileDevice::RenameError,   PositionError = QFileDevice::PositionError,   ResizeError = QFileDevice::ResizeError,   PermissionsError = QFileDevice::PermissionsError,   CopyError = QFileDevice::CopyError};
enum FileHandleFlag{
  AutoCloseHandle = QFileDevice::AutoCloseHandle,   DontCloseHandle = QFileDevice::DontCloseHandle};
enum MemoryMapFlags{
  NoOptions = QFileDevice::NoOptions,   MapPrivateOption = QFileDevice::MapPrivateOption};
enum Permission{
  ReadOwner = QFileDevice::ReadOwner,   WriteOwner = QFileDevice::WriteOwner,   ExeOwner = QFileDevice::ExeOwner,   ReadUser = QFileDevice::ReadUser,   WriteUser = QFileDevice::WriteUser,   ExeUser = QFileDevice::ExeUser,   ReadGroup = QFileDevice::ReadGroup,   WriteGroup = QFileDevice::WriteGroup,   ExeGroup = QFileDevice::ExeGroup,   ReadOther = QFileDevice::ReadOther,   WriteOther = QFileDevice::WriteOther,   ExeOther = QFileDevice::ExeOther};
Q_DECLARE_FLAGS(FileHandleFlags, FileHandleFlag)
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFileDevice* new_QFileDevice();
QFileDevice* new_QFileDevice(QObject*  parent);
void delete_QFileDevice(QFileDevice* obj) { delete obj; } 
   QFileDevice::FileError  error(QFileDevice* theWrappedObject) const;
   QString  fileName(QFileDevice* theWrappedObject) const;
   QString  py_q_fileName(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_fileName());}
   bool  flush(QFileDevice* theWrappedObject);
   int  handle(QFileDevice* theWrappedObject) const;
   uchar*  map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags = QFileDevice::NoOptions);
   QFileDevice::Permissions  permissions(QFileDevice* theWrappedObject) const;
   QFileDevice::Permissions  py_q_permissions(QFileDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_permissions());}
   bool  resize(QFileDevice* theWrappedObject, qint64  sz);
   bool  py_q_resize(QFileDevice* theWrappedObject, qint64  sz){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_resize(sz));}
   bool  setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec);
   bool  py_q_setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec){  return (((PythonQtPublicPromoter_QFileDevice*)theWrappedObject)->py_q_setPermissions(permissionSpec));}
   bool  unmap(QFileDevice* theWrappedObject, uchar*  address);
   void unsetError(QFileDevice* theWrappedObject);
};





class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFile&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; } 
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QDateTime  birthTime(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   bool  exists(QFileInfo* theWrappedObject) const;
   bool  static_QFileInfo_exists(const QString&  file);
   QString  fileName(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   bool  isHidden(QFileInfo* theWrappedObject) const;
   bool  isNativePath(QFileInfo* theWrappedObject) const;
   bool  isReadable(QFileInfo* theWrappedObject) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   QDateTime  metadataChangeTime(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   void refresh(QFileInfo* theWrappedObject);
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   void setFile(QFileInfo* theWrappedObject, const QFile&  file);
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   qint64  size(QFileInfo* theWrappedObject) const;
   QString  suffix(QFileInfo* theWrappedObject) const;
   void swap(QFileInfo* theWrappedObject, QFileInfo&  other);
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
    QString py_toString(QFileInfo*);
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(NULL) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(NULL) {};

   ~PythonQtShell_QIODevice();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setErrorString(const QString&  errorString) { this->setErrorString(errorString); }
inline void promoted_setOpenMode(QIODevice::OpenMode  openMode) { this->setOpenMode(openMode); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QIODevice::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QIODevice::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QIODevice::canReadLine(); }
inline void py_q_close() { QIODevice::close(); }
inline bool  py_q_isSequential() const { return QIODevice::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline qint64  py_q_pos() const { return QIODevice::pos(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  py_q_reset() { return QIODevice::reset(); }
inline bool  py_q_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  py_q_size() const { return QIODevice::size(); }
inline bool  py_q_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered,   NewOnly = QIODevice::NewOnly,   ExistingOnly = QIODevice::ExistingOnly};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   bool  atEnd(QIODevice* theWrappedObject) const;
   bool  py_q_atEnd(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_atEnd());}
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesAvailable(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
   qint64  py_q_bytesToWrite(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_bytesToWrite());}
   bool  canReadLine(QIODevice* theWrappedObject) const;
   bool  py_q_canReadLine(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_canReadLine());}
   void close(QIODevice* theWrappedObject);
   void py_q_close(QIODevice* theWrappedObject){  (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_close());}
   void commitTransaction(QIODevice* theWrappedObject);
   int  currentReadChannel(QIODevice* theWrappedObject) const;
   int  currentWriteChannel(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  py_q_isSequential(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_isSequential());}
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isTransactionStarted(QIODevice* theWrappedObject) const;
   bool  isWritable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  py_q_open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_open(mode));}
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  py_q_pos(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_pos());}
   bool  putChar(QIODevice* theWrappedObject, char  c);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readAll(QIODevice* theWrappedObject);
   int  readChannelCount(QIODevice* theWrappedObject) const;
   qint64  readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readData(data, maxlen));}
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   qint64  py_q_readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   bool  reset(QIODevice* theWrappedObject);
   bool  py_q_reset(QIODevice* theWrappedObject){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_reset());}
   void rollbackTransaction(QIODevice* theWrappedObject);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   bool  py_q_seek(QIODevice* theWrappedObject, qint64  pos){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_seek(pos));}
   void setCurrentReadChannel(QIODevice* theWrappedObject, int  channel);
   void setCurrentWriteChannel(QIODevice* theWrappedObject, int  channel);
   void setErrorString(QIODevice* theWrappedObject, const QString&  errorString);
   void setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  size(QIODevice* theWrappedObject) const;
   qint64  py_q_size(QIODevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_size());}
   qint64  skip(QIODevice* theWrappedObject, qint64  maxSize);
   void startTransaction(QIODevice* theWrappedObject);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForBytesWritten(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   bool  py_q_waitForReadyRead(QIODevice* theWrappedObject, int  msecs){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   qint64  write(QIODevice* theWrappedObject, const char*  data);
   int  writeChannelCount(QIODevice* theWrappedObject) const;
   qint64  writeData(QIODevice* theWrappedObject, const char*  data, qint64  len);
   qint64  py_q_writeData(QIODevice* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QMarginsF : public QObject
{ Q_OBJECT
public:
public slots:
QMarginsF* new_QMarginsF();
QMarginsF* new_QMarginsF(const QMargins&  margins);
QMarginsF* new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom);
void delete_QMarginsF(QMarginsF* obj) { delete obj; } 
   qreal  bottom(QMarginsF* theWrappedObject) const;
   bool  isNull(QMarginsF* theWrappedObject) const;
   qreal  left(QMarginsF* theWrappedObject) const;
   QMarginsF  __mul__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __imul__(QMarginsF* theWrappedObject, qreal  factor);
   QMarginsF  __add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QRectF  __add__(QMarginsF* theWrappedObject, const QRectF&  rhs);
   QMarginsF  __add__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __iadd__(QMarginsF* theWrappedObject, qreal  addend);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   QMarginsF  __sub__(QMarginsF* theWrappedObject, qreal  rhs);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins);
   QMarginsF*  __isub__(QMarginsF* theWrappedObject, qreal  subtrahend);
   QMarginsF  __div__(QMarginsF* theWrappedObject, qreal  divisor);
   QMarginsF*  __idiv__(QMarginsF* theWrappedObject, qreal  divisor);
   void writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs);
   void readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1);
   qreal  right(QMarginsF* theWrappedObject) const;
   void setBottom(QMarginsF* theWrappedObject, qreal  bottom);
   void setLeft(QMarginsF* theWrappedObject, qreal  left);
   void setRight(QMarginsF* theWrappedObject, qreal  right);
   void setTop(QMarginsF* theWrappedObject, qreal  top);
   QMargins  toMargins(QMarginsF* theWrappedObject) const;
   qreal  top(QMarginsF* theWrappedObject) const;
    QString py_toString(QMarginsF*);
    bool __nonzero__(QMarginsF* obj) { return !obj->isNull(); }
};





class PythonQtShell_QMessageLogContext : public QMessageLogContext
{
public:
    PythonQtShell_QMessageLogContext():QMessageLogContext(),_wrapper(NULL) {};
    PythonQtShell_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName):QMessageLogContext(fileName, lineNumber, functionName, categoryName),_wrapper(NULL) {};

   ~PythonQtShell_QMessageLogContext();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMessageLogContext : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogContext* new_QMessageLogContext();
QMessageLogContext* new_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName);
void delete_QMessageLogContext(QMessageLogContext* obj) { delete obj; } 
const char*  py_get_category(QMessageLogContext* theWrappedObject){ return theWrappedObject->category; }
const char*  py_get_file(QMessageLogContext* theWrappedObject){ return theWrappedObject->file; }
const char*  py_get_function(QMessageLogContext* theWrappedObject){ return theWrappedObject->function; }
void py_set_line(QMessageLogContext* theWrappedObject, int  line){ theWrappedObject->line = line; }
int  py_get_line(QMessageLogContext* theWrappedObject){ return theWrappedObject->line; }
void py_set_version(QMessageLogContext* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QMessageLogContext* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtWrapper_QMessageLogger : public QObject
{ Q_OBJECT
public:
public slots:
QMessageLogger* new_QMessageLogger();
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function);
QMessageLogger* new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category);
void delete_QMessageLogger(QMessageLogger* obj) { delete obj; } 
};





class PythonQtWrapper_QMetaType : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TypeFlag )
Q_FLAGS(TypeFlags )
enum TypeFlag{
  NeedsConstruction = QMetaType::NeedsConstruction,   NeedsDestruction = QMetaType::NeedsDestruction,   MovableType = QMetaType::MovableType,   PointerToQObject = QMetaType::PointerToQObject,   IsEnumeration = QMetaType::IsEnumeration,   SharedPointerToQObject = QMetaType::SharedPointerToQObject,   WeakPointerToQObject = QMetaType::WeakPointerToQObject,   TrackingPointerToQObject = QMetaType::TrackingPointerToQObject,   WasDeclaredAsMetaType = QMetaType::WasDeclaredAsMetaType,   IsGadget = QMetaType::IsGadget,   PointerToGadget = QMetaType::PointerToGadget};
Q_DECLARE_FLAGS(TypeFlags, TypeFlag)
public slots:
QMetaType* new_QMetaType(const int  type);
void delete_QMetaType(QMetaType* obj) { delete obj; } 
   bool  static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   void*  static_QMetaType_construct(int  type, void*  where, const void*  copy);
   void*  construct(QMetaType* theWrappedObject, void*  where, const void*  copy = nullptr) const;
   bool  static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId);
   void*  create(QMetaType* theWrappedObject, const void*  copy = nullptr) const;
   void*  static_QMetaType_create(int  type, const void*  copy = nullptr);
   void static_QMetaType_destroy(int  type, void*  data);
   void destroy(QMetaType* theWrappedObject, void*  data) const;
   void static_QMetaType_destruct(int  type, void*  where);
   void destruct(QMetaType* theWrappedObject, void*  data) const;
   bool  static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result);
   QMetaType::TypeFlags  flags(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_hasRegisteredComparators(int  typeId);
   bool  static_QMetaType_hasRegisteredConverterFunction(int  fromTypeId, int  toTypeId);
   bool  static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId);
   bool  isRegistered(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_isRegistered(int  type);
   bool  isValid(QMetaType* theWrappedObject) const;
   bool  static_QMetaType_load(QDataStream&  stream, int  type, void*  data);
   const QMetaObject*  metaObject(QMetaType* theWrappedObject) const;
   const QMetaObject*  static_QMetaType_metaObjectForType(int  type);
   int  static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, int  aliasId);
   int  static_QMetaType_registerTypedef(const char*  typeName, int  aliasId);
   bool  static_QMetaType_save(QDataStream&  stream, int  type, const void*  data);
   int  sizeOf(QMetaType* theWrappedObject) const;
   int  static_QMetaType_sizeOf(int  type);
   int  static_QMetaType_type(const QByteArray&  typeName);
   int  static_QMetaType_type(const char*  typeName);
   QMetaType::TypeFlags  static_QMetaType_typeFlags(int  type);
   const char*  static_QMetaType_typeName(int  type);
   bool  static_QMetaType_unregisterType(int  type);
    bool __nonzero__(QMetaType* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   bool  isRecursive(QMutex* theWrappedObject) const;
   void lock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout = 0);
   bool  try_lock(QMutex* theWrappedObject);
   void unlock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = nullptr):QObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QObject();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_childEvent(QChildEvent*  event) { this->childEvent(event); }
inline void promoted_customEvent(QEvent*  event) { this->customEvent(event); }
inline bool  promoted_isSignalConnected(const QMetaMethod&  signal) const { return this->isSignalConnected(signal); }
inline QObject*  promoted_sender() const { return this->sender(); }
inline int  promoted_senderSignalIndex() const { return this->senderSignalIndex(); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_childEvent(QChildEvent*  event) { QObject::childEvent(event); }
inline void py_q_customEvent(QEvent*  event) { QObject::customEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QObject::event(event); }
inline bool  py_q_eventFilter(QObject*  watched, QEvent*  event) { return QObject::eventFilter(watched, event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QObject::timerEvent(event); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = nullptr);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   void childEvent(QObject* theWrappedObject, QChildEvent*  event);
   void py_q_childEvent(QObject* theWrappedObject, QChildEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_childEvent(event));}
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void customEvent(QObject* theWrappedObject, QEvent*  event);
   void py_q_customEvent(QObject* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_customEvent(event));}
   void dumpObjectInfo(QObject* theWrappedObject);
   void dumpObjectInfo(QObject* theWrappedObject) const;
   void dumpObjectTree(QObject* theWrappedObject);
   void dumpObjectTree(QObject* theWrappedObject) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  event);
   bool  py_q_event(QObject* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_event(event));}
   bool  eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event);
   bool  py_q_eventFilter(QObject* theWrappedObject, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_eventFilter(watched, event));}
   void installEventFilter(QObject* theWrappedObject, QObject*  filterObj);
   bool  isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const;
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  isWindowType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  obj);
   QObject*  sender(QObject* theWrappedObject) const;
   int  senderSignalIndex(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType = Qt::CoarseTimer);
   QThread*  thread(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  event);
   void py_q_timerEvent(QObject* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QObject*)theWrappedObject)->py_q_timerEvent(event));}
};





class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode = QReadWriteLock::NonRecursive);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   void lockForRead(QReadWriteLock* theWrappedObject);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void unlock(QReadWriteLock* theWrappedObject);
};





class PythonQtWrapper_QSignalBlocker : public QObject
{ Q_OBJECT
public:
public slots:
QSignalBlocker* new_QSignalBlocker(QObject&  o);
QSignalBlocker* new_QSignalBlocker(QObject*  o);
void delete_QSignalBlocker(QSignalBlocker* obj) { delete obj; } 
   void reblock(QSignalBlocker* theWrappedObject);
   void unblock(QSignalBlocker* theWrappedObject);
};





class PythonQtShell_QSocketNotifier : public QSocketNotifier
{
public:
    PythonQtShell_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr):QSocketNotifier(socket, arg__2, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSocketNotifier();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSocketNotifier : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  Read = QSocketNotifier::Read,   Write = QSocketNotifier::Write,   Exception = QSocketNotifier::Exception};
public slots:
QSocketNotifier* new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent = nullptr);
void delete_QSocketNotifier(QSocketNotifier* obj) { delete obj; } 
   bool  isEnabled(QSocketNotifier* theWrappedObject) const;
   qintptr  socket(QSocketNotifier* theWrappedObject) const;
   QSocketNotifier::Type  type(QSocketNotifier* theWrappedObject) const;
};





class PythonQtWrapper_QStringMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QStringMatcher* new_QStringMatcher();
QStringMatcher* new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive);
QStringMatcher* new_QStringMatcher(const QStringMatcher&  other);
void delete_QStringMatcher(QStringMatcher* obj) { delete obj; } 
   Qt::CaseSensitivity  caseSensitivity(QStringMatcher* theWrappedObject) const;
   int  indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from = 0) const;
   QString  pattern(QStringMatcher* theWrappedObject) const;
   void setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QStringMatcher* theWrappedObject, const QString&  pattern);
};





class PythonQtShell_QSysInfo : public QSysInfo
{
public:
    PythonQtShell_QSysInfo():QSysInfo(),_wrapper(NULL) {};

   ~PythonQtShell_QSysInfo();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSysInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Sizes )
enum Sizes{
  WordSize = QSysInfo::WordSize};
public slots:
QSysInfo* new_QSysInfo();
void delete_QSysInfo(QSysInfo* obj) { delete obj; } 
   QByteArray  static_QSysInfo_bootUniqueId();
   QString  static_QSysInfo_buildAbi();
   QString  static_QSysInfo_buildCpuArchitecture();
   QString  static_QSysInfo_currentCpuArchitecture();
   QString  static_QSysInfo_kernelType();
   QString  static_QSysInfo_kernelVersion();
   QString  static_QSysInfo_machineHostName();
   QByteArray  static_QSysInfo_machineUniqueId();
   QString  static_QSysInfo_prettyProductName();
   QString  static_QSysInfo_productType();
   QString  static_QSysInfo_productVersion();
};





class PythonQtShell_QTimerEvent : public QTimerEvent
{
public:
    PythonQtShell_QTimerEvent(int  timerId):QTimerEvent(timerId),_wrapper(NULL) {};

   ~PythonQtShell_QTimerEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTimerEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTimerEvent* new_QTimerEvent(int  timerId);
void delete_QTimerEvent(QTimerEvent* obj) { delete obj; } 
   int  timerId(QTimerEvent* theWrappedObject) const;
};


