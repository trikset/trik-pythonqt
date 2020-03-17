#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qabstractanimation.h>
#include <qanimationgroup.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qiodevice.h>
#include <qlibrary.h>
#include <qlockfile.h>
#include <qlogging.h>
#include <qloggingcategory.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qobject.h>
#include <qoperatingsystemversion.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qrandom.h>
#include <qreadwritelock.h>
#include <qsavefile.h>
#include <qsemaphore.h>
#include <qsequentialanimationgroup.h>
#include <qsettings.h>
#include <qsharedmemory.h>
#include <qtextcodec.h>
#include <qurl.h>

QString  PythonQtWrapper_QLibrary::errorString(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QLibrary::fileName(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QLibrary::static_QLibrary_isLibrary(const QString&  fileName)
{
  return (QLibrary::isLibrary(fileName));
}

bool  PythonQtWrapper_QLibrary::isLoaded(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QLibrary::load(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->load());
}

QLibrary::LoadHints  PythonQtWrapper_QLibrary::loadHints(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->loadHints());
}

void PythonQtWrapper_QLibrary::setFileName(QLibrary* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, version));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, verNum));
}

void PythonQtWrapper_QLibrary::setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints)
{
  ( theWrappedObject->setLoadHints(hints));
}

bool  PythonQtWrapper_QLibrary::unload(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->unload());
}



QDate  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildDate()
{
  return (QLibraryInfo::buildDate());
}

bool  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_isDebugBuild()
{
  return (QLibraryInfo::isDebugBuild());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensedProducts()
{
  return (QLibraryInfo::licensedProducts());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensee()
{
  return (QLibraryInfo::licensee());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1)
{
  return (QLibraryInfo::location(arg__1));
}

QStringList  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_platformPluginArguments(const QString&  platformName)
{
  return (QLibraryInfo::platformPluginArguments(platformName));
}



QLockFile::LockError  PythonQtWrapper_QLockFile::error(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QLockFile::getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const
{
  return ( theWrappedObject->getLockInfo(pid, hostname, appname));
}

bool  PythonQtWrapper_QLockFile::isLocked(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->isLocked());
}

bool  PythonQtWrapper_QLockFile::lock(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QLockFile::removeStaleLockFile(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->removeStaleLockFile());
}

void PythonQtWrapper_QLockFile::setStaleLockTime(QLockFile* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setStaleLockTime(arg__1));
}

int  PythonQtWrapper_QLockFile::staleLockTime(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->staleLockTime());
}

bool  PythonQtWrapper_QLockFile::tryLock(QLockFile* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

void PythonQtWrapper_QLockFile::unlock(QLockFile* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



const char*  PythonQtWrapper_QLoggingCategory::categoryName(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->categoryName());
}

QLoggingCategory*  PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_defaultCategory()
{
  return (QLoggingCategory::defaultCategory());
}

bool  PythonQtWrapper_QLoggingCategory::isCriticalEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isCriticalEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isDebugEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isDebugEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type) const
{
  return ( theWrappedObject->isEnabled(type));
}

bool  PythonQtWrapper_QLoggingCategory::isInfoEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isInfoEnabled());
}

bool  PythonQtWrapper_QLoggingCategory::isWarningEnabled(QLoggingCategory* theWrappedObject) const
{
  return ( theWrappedObject->isWarningEnabled());
}

void PythonQtWrapper_QLoggingCategory::setEnabled(QLoggingCategory* theWrappedObject, QtMsgType  type, bool  enable)
{
  ( theWrappedObject->setEnabled(type, enable));
}

void PythonQtWrapper_QLoggingCategory::static_QLoggingCategory_setFilterRules(const QString&  rules)
{
  (QLoggingCategory::setFilterRules(rules));
}



PythonQtShell_QMarginsF::~PythonQtShell_QMarginsF() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF()
{ 
return new PythonQtShell_QMarginsF(); }

QMarginsF  PythonQtWrapper_QMarginsF::__div__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__idiv__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QMarginsF::writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QMarginsF::readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QMarginsF::py_toString(QMarginsF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



bool  PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, int  length)
{
  ( theWrappedObject->addData(data, length));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method)
{
  return (QMessageAuthenticationCode::hash(message, key, method));
}

void PythonQtWrapper_QMessageAuthenticationCode::reset(QMessageAuthenticationCode* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::result(QMessageAuthenticationCode* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

void PythonQtWrapper_QMessageAuthenticationCode::setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->setKey(key));
}



PythonQtShell_QMessageLogContext::~PythonQtShell_QMessageLogContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMessageLogContext* PythonQtWrapper_QMessageLogContext::new_QMessageLogContext()
{ 
return new PythonQtShell_QMessageLogContext(); }





QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QMetaEnum* PythonQtWrapper_QMetaEnum::new_QMetaEnum()
{ 
return new QMetaEnum(); }

const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaEnum::enumName(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enumName());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isScoped(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isScoped());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::key(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->key(index));
}

int  PythonQtWrapper_QMetaEnum::keyCount(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->keyCount());
}

int  PythonQtWrapper_QMetaEnum::keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok) const
{
  return ( theWrappedObject->keyToValue(key, ok));
}

int  PythonQtWrapper_QMetaEnum::keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok) const
{
  return ( theWrappedObject->keysToValue(keys, ok));
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

int  PythonQtWrapper_QMetaEnum::value(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->value(index));
}

const char*  PythonQtWrapper_QMetaEnum::valueToKey(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKey(value));
}

QByteArray  PythonQtWrapper_QMetaEnum::valueToKeys(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKeys(value));
}



QMetaMethod* PythonQtWrapper_QMetaMethod::new_QMetaMethod()
{ 
return new QMetaMethod(); }

QMetaMethod::Access  PythonQtWrapper_QMetaMethod::access(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->access());
}

int  PythonQtWrapper_QMetaMethod::attributes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

const QMetaObject*  PythonQtWrapper_QMetaMethod::enclosingMetaObject(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

void PythonQtWrapper_QMetaMethod::getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const
{
  ( theWrappedObject->getParameterTypes(types));
}

bool  PythonQtWrapper_QMetaMethod::isValid(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QMetaMethod::methodIndex(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodIndex());
}

QByteArray  PythonQtWrapper_QMetaMethod::methodSignature(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodSignature());
}

QMetaMethod::MethodType  PythonQtWrapper_QMetaMethod::methodType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodType());
}

QByteArray  PythonQtWrapper_QMetaMethod::name(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMetaMethod::__eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  m2)
{
  return ( (*theWrappedObject)== m2);
}

int  PythonQtWrapper_QMetaMethod::parameterCount(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterCount());
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterNames(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterNames());
}

int  PythonQtWrapper_QMetaMethod::parameterType(QMetaMethod* theWrappedObject, int  index) const
{
  return ( theWrappedObject->parameterType(index));
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterTypes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterTypes());
}

int  PythonQtWrapper_QMetaMethod::returnType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->returnType());
}

int  PythonQtWrapper_QMetaMethod::revision(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

const char*  PythonQtWrapper_QMetaMethod::tag(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

const char*  PythonQtWrapper_QMetaMethod::typeName(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}



QMetaProperty* PythonQtWrapper_QMetaProperty::new_QMetaProperty()
{ 
return new QMetaProperty(); }

const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isDesignable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEditable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isEditable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isRequired(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isRequired());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isScriptable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isStored(obj));
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isUser(obj));
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

int  PythonQtWrapper_QMetaProperty::notifySignalIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignalIndex());
}

int  PythonQtWrapper_QMetaProperty::propertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyIndex());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

QVariant  PythonQtWrapper_QMetaProperty::readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const
{
  return ( theWrappedObject->readOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::relativePropertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->relativePropertyIndex());
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

bool  PythonQtWrapper_QMetaProperty::resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const
{
  return ( theWrappedObject->resetOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::revision(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

int  PythonQtWrapper_QMetaProperty::userType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->userType());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}

bool  PythonQtWrapper_QMetaProperty::writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const
{
  return ( theWrappedObject->writeOnGadget(gadget, value));
}



QMetaType* PythonQtWrapper_QMetaType::new_QMetaType(const int  type)
{ 
return new QMetaType(type); }

bool  PythonQtWrapper_QMetaType::static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::compare(lhs, rhs, typeId, result));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, void*  where, const void*  copy)
{
  return (QMetaType::construct(type, where, copy));
}

void*  PythonQtWrapper_QMetaType::construct(QMetaType* theWrappedObject, void*  where, const void*  copy) const
{
  return ( theWrappedObject->construct(where, copy));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId)
{
  return (QMetaType::convert(from, fromTypeId, to, toTypeId));
}

void*  PythonQtWrapper_QMetaType::create(QMetaType* theWrappedObject, const void*  copy) const
{
  return ( theWrappedObject->create(copy));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_create(int  type, const void*  copy)
{
  return (QMetaType::create(type, copy));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destroy(int  type, void*  data)
{
  (QMetaType::destroy(type, data));
}

void PythonQtWrapper_QMetaType::destroy(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destroy(data));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destruct(int  type, void*  where)
{
  (QMetaType::destruct(type, where));
}

void PythonQtWrapper_QMetaType::destruct(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destruct(data));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::equals(lhs, rhs, typeId, result));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredComparators(int  typeId)
{
  return (QMetaType::hasRegisteredComparators(typeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredConverterFunction(int  fromTypeId, int  toTypeId)
{
  return (QMetaType::hasRegisteredConverterFunction(fromTypeId, toTypeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId)
{
  return (QMetaType::hasRegisteredDebugStreamOperator(typeId));
}

int  PythonQtWrapper_QMetaType::id(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->id());
}

bool  PythonQtWrapper_QMetaType::isRegistered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isRegistered());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_isRegistered(int  type)
{
  return (QMetaType::isRegistered(type));
}

bool  PythonQtWrapper_QMetaType::isValid(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_load(QDataStream&  stream, int  type, void*  data)
{
  return (QMetaType::load(stream, type, data));
}

const QMetaObject*  PythonQtWrapper_QMetaType::metaObject(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const QMetaObject*  PythonQtWrapper_QMetaType::static_QMetaType_metaObjectForType(int  type)
{
  return (QMetaType::metaObjectForType(type));
}

QByteArray  PythonQtWrapper_QMetaType::name(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

int  PythonQtWrapper_QMetaType::static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, int  aliasId)
{
  return (QMetaType::registerNormalizedTypedef(normalizedTypeName, aliasId));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_registerTypedef(const char*  typeName, int  aliasId)
{
  return (QMetaType::registerTypedef(typeName, aliasId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_save(QDataStream&  stream, int  type, const void*  data)
{
  return (QMetaType::save(stream, type, data));
}

int  PythonQtWrapper_QMetaType::sizeOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->sizeOf());
}

int  PythonQtWrapper_QMetaType::static_QMetaType_sizeOf(int  type)
{
  return (QMetaType::sizeOf(type));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const QByteArray&  typeName)
{
  return (QMetaType::type(typeName));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const char*  typeName)
{
  return (QMetaType::type(typeName));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::static_QMetaType_typeFlags(int  type)
{
  return (QMetaType::typeFlags(type));
}

const char*  PythonQtWrapper_QMetaType::static_QMetaType_typeName(int  type)
{
  return (QMetaType::typeName(type));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_unregisterType(int  type)
{
  return (QMetaType::unregisterType(type));
}



PythonQtShell_QMimeData::~PythonQtShell_QMimeData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("formats");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("formats", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&mimetype0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasFormat", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMimeData::hasFormat(mimetype0);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype0, QVariant::Type  preferredType1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("retrieveData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&" , "QVariant::Type"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {NULL, (void*)&mimetype0, (void*)&preferredType1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("retrieveData", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMimeData::retrieveData(mimetype0, preferredType1);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

const QMetaObject* PythonQtShell_QMimeData::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMimeData::staticMetaObject);
  } else {
    return &QMimeData::staticMetaObject;
  }
}
int PythonQtShell_QMimeData::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMimeData::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->formats());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}



QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



PythonQtShell_QOperatingSystemVersion::~PythonQtShell_QOperatingSystemVersion() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QOperatingSystemVersion* PythonQtWrapper_QOperatingSystemVersion::new_QOperatingSystemVersion(QOperatingSystemVersion::OSType  osType, int  vmajor, int  vminor, int  vmicro)
{ 
return new PythonQtShell_QOperatingSystemVersion(osType, vmajor, vminor, vmicro); }

QOperatingSystemVersion  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_current()
{
  return (QOperatingSystemVersion::current());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::static_QOperatingSystemVersion_currentType()
{
  return (QOperatingSystemVersion::currentType());
}

int  PythonQtWrapper_QOperatingSystemVersion::majorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->majorVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::microVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->microVersion());
}

int  PythonQtWrapper_QOperatingSystemVersion::minorVersion(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->minorVersion());
}

QString  PythonQtWrapper_QOperatingSystemVersion::name(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

int  PythonQtWrapper_QOperatingSystemVersion::segmentCount(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->segmentCount());
}

QOperatingSystemVersion::OSType  PythonQtWrapper_QOperatingSystemVersion::type(QOperatingSystemVersion* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QOperatingSystemVersion::py_toString(QOperatingSystemVersion* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QParallelAnimationGroup::~PythonQtShell_QParallelAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QParallelAnimationGroup::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QParallelAnimationGroup::duration();
}
bool  PythonQtShell_QParallelAnimationGroup::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QParallelAnimationGroup::event(event0);
}
void PythonQtShell_QParallelAnimationGroup::updateCurrentTime(int  currentTime0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&currentTime0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateCurrentTime(currentTime0);
}
void PythonQtShell_QParallelAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QParallelAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QParallelAnimationGroup::updateState(newState0, oldState1);
}
QParallelAnimationGroup* PythonQtWrapper_QParallelAnimationGroup::new_QParallelAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QParallelAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QParallelAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QParallelAnimationGroup::staticMetaObject);
  } else {
    return &QParallelAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QParallelAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QParallelAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QPauseAnimation::~PythonQtShell_QPauseAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPauseAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPauseAnimation::duration();
}
bool  PythonQtShell_QPauseAnimation::event(QEvent*  e0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&e0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPauseAnimation::event(e0);
}
void PythonQtShell_QPauseAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPauseAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateDirection(direction0);
}
void PythonQtShell_QPauseAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPauseAnimation::updateState(newState0, oldState1);
}
QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(parent); }

QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(int  msecs, QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(msecs, parent); }

const QMetaObject* PythonQtShell_QPauseAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPauseAnimation::staticMetaObject);
  } else {
    return &QPauseAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPauseAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPauseAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QPauseAnimation::setDuration(QPauseAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}



PythonQtShell_QProcess::~PythonQtShell_QProcess() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QProcess::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::atEnd();
}
qint64  PythonQtShell_QProcess::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesAvailable();
}
qint64  PythonQtShell_QProcess::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::bytesToWrite();
}
bool  PythonQtShell_QProcess::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::canReadLine();
}
void PythonQtShell_QProcess::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::close();
}
bool  PythonQtShell_QProcess::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::isSequential();
}
bool  PythonQtShell_QProcess::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::open(mode0);
}
qint64  PythonQtShell_QProcess::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::pos();
}
qint64  PythonQtShell_QProcess::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readData(data0, maxlen1);
}
qint64  PythonQtShell_QProcess::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QProcess::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::reset();
}
bool  PythonQtShell_QProcess::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::seek(pos0);
}
void PythonQtShell_QProcess::setupChildProcess()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setupChildProcess");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QProcess::setupChildProcess();
}
qint64  PythonQtShell_QProcess::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::size();
}
bool  PythonQtShell_QProcess::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QProcess::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QProcess::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QProcess::writeData(data0, len1);
}
QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new PythonQtShell_QProcess(parent); }

const QMetaObject* PythonQtShell_QProcess::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QProcess::staticMetaObject);
  } else {
    return &QProcess::staticMetaObject;
  }
}
int PythonQtShell_QProcess::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QProcess::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QProcess::arguments(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->closeReadChannel(channel));
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
  ( theWrappedObject->closeWriteChannel());
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->environment());
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  command)
{
  return (QProcess::execute(command));
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::execute(program, arguments));
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitCode());
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitStatus());
}

QProcess::InputChannelMode  PythonQtWrapper_QProcess::inputChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->inputChannelMode());
}

QString  PythonQtWrapper_QProcess::static_QProcess_nullDevice()
{
  return (QProcess::nullDevice());
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processChannelMode());
}

QProcessEnvironment  PythonQtWrapper_QProcess::processEnvironment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processEnvironment());
}

qint64  PythonQtWrapper_QProcess::processId(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processId());
}

QString  PythonQtWrapper_QProcess::program(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->program());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardError());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardOutput());
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->readChannel());
}

void PythonQtWrapper_QProcess::setArguments(QProcess* theWrappedObject, const QStringList&  arguments)
{
  ( theWrappedObject->setArguments(arguments));
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
  ( theWrappedObject->setEnvironment(environment));
}

void PythonQtWrapper_QProcess::setInputChannelMode(QProcess* theWrappedObject, QProcess::InputChannelMode  mode)
{
  ( theWrappedObject->setInputChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
  ( theWrappedObject->setProcessChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment)
{
  ( theWrappedObject->setProcessEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setProcessState(state));
}

void PythonQtWrapper_QProcess::setProgram(QProcess* theWrappedObject, const QString&  program)
{
  ( theWrappedObject->setProgram(program));
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->setReadChannel(channel));
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardErrorFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setStandardInputFile(fileName));
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardOutputFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
  ( theWrappedObject->setStandardOutputProcess(destination));
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

void PythonQtWrapper_QProcess::setupChildProcess(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setupChildProcess());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_splitCommand(const QString&  command)
{
  return (QProcess::splitCommand(command));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  command, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(command, mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(program, arguments, mode));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  command)
{
  return (QProcess::startDetached(command));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::startDetached(program, arguments));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
  return (QProcess::startDetached(program, arguments, workingDirectory, pid));
}

bool  PythonQtWrapper_QProcess::startDetached(QProcess* theWrappedObject, qint64*  pid)
{
  return ( theWrappedObject->startDetached(pid));
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
  return (QProcess::systemEnvironment());
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForFinished(msecs));
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForStarted(msecs));
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}



PythonQtShell_QPropertyAnimation::~PythonQtShell_QPropertyAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QPropertyAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::duration();
}
bool  PythonQtShell_QPropertyAnimation::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::event(event0);
}
QVariant  PythonQtShell_QPropertyAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("interpolated");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {NULL, (void*)&from0, (void*)&to1, (void*)&progress2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QPropertyAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QPropertyAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QPropertyAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateDirection(direction0);
}
void PythonQtShell_QPropertyAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QPropertyAnimation::updateState(newState0, oldState1);
}
QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(parent); }

QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(target, propertyName, parent); }

const QMetaObject* PythonQtShell_QPropertyAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QPropertyAnimation::staticMetaObject);
  } else {
    return &QPropertyAnimation::staticMetaObject;
  }
}
int PythonQtShell_QPropertyAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QPropertyAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QByteArray  PythonQtWrapper_QPropertyAnimation::propertyName(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}

void PythonQtWrapper_QPropertyAnimation::setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName)
{
  ( theWrappedObject->setPropertyName(propertyName));
}

void PythonQtWrapper_QPropertyAnimation::setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target)
{
  ( theWrappedObject->setTargetObject(target));
}

QObject*  PythonQtWrapper_QPropertyAnimation::targetObject(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->targetObject());
}



QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const QRandomGenerator&  other)
{ 
return new QRandomGenerator64(other); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(const unsigned int*  begin, const unsigned int*  end)
{ 
return new QRandomGenerator64(begin, end); }

QRandomGenerator64* PythonQtWrapper_QRandomGenerator64::new_QRandomGenerator64(unsigned int  seedValue)
{ 
return new QRandomGenerator64(seedValue); }

void PythonQtWrapper_QRandomGenerator64::discard(QRandomGenerator64* theWrappedObject, quint64  z)
{
  ( theWrappedObject->discard(z));
}

quint64  PythonQtWrapper_QRandomGenerator64::generate(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->generate());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_global()
{
  return (QRandomGenerator64::global());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_max()
{
  return (QRandomGenerator64::max());
}

quint64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_min()
{
  return (QRandomGenerator64::min());
}

quint64  PythonQtWrapper_QRandomGenerator64::operator_cast_(QRandomGenerator64* theWrappedObject)
{
  return ( theWrappedObject->operator()());
}

QRandomGenerator64  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_securelySeeded()
{
  return (QRandomGenerator64::securelySeeded());
}

QRandomGenerator64*  PythonQtWrapper_QRandomGenerator64::static_QRandomGenerator64_system()
{
  return (QRandomGenerator64::system());
}



void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForRead());
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QResource::~PythonQtShell_QResource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QResource* PythonQtWrapper_QResource::new_QResource(const QString&  file, const QLocale&  locale)
{ 
return new PythonQtShell_QResource(file, locale); }

QString  PythonQtWrapper_QResource::absoluteFilePath(QResource* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

void PythonQtWrapper_QResource::static_QResource_addSearchPath(const QString&  path)
{
  (QResource::addSearchPath(path));
}

QStringList  PythonQtWrapper_QResource::children(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_children());
}

const uchar*  PythonQtWrapper_QResource::data(QResource* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QString  PythonQtWrapper_QResource::fileName(QResource* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QResource::isCompressed(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isCompressed());
}

bool  PythonQtWrapper_QResource::isDir(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_isDir());
}

bool  PythonQtWrapper_QResource::isFile(QResource* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QResource*)theWrappedObject)->promoted_isFile());
}

bool  PythonQtWrapper_QResource::isValid(QResource* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QResource::lastModified(QResource* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

QLocale  PythonQtWrapper_QResource::locale(QResource* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_registerResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::registerResource(rccData, resourceRoot));
}

QStringList  PythonQtWrapper_QResource::static_QResource_searchPaths()
{
  return (QResource::searchPaths());
}

void PythonQtWrapper_QResource::setFileName(QResource* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFileName(file));
}

void PythonQtWrapper_QResource::setLocale(QResource* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

qint64  PythonQtWrapper_QResource::size(QResource* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QByteArray  PythonQtWrapper_QResource::uncompressedData(QResource* theWrappedObject) const
{
  return ( theWrappedObject->uncompressedData());
}

qint64  PythonQtWrapper_QResource::uncompressedSize(QResource* theWrappedObject) const
{
  return ( theWrappedObject->uncompressedSize());
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const QString&  rccFilename, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccFilename, resourceRoot));
}

bool  PythonQtWrapper_QResource::static_QResource_unregisterResource(const uchar*  rccData, const QString&  resourceRoot)
{
  return (QResource::unregisterResource(rccData, resourceRoot));
}



PythonQtShell_QRunnable::~PythonQtShell_QRunnable() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QRunnable::run()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("run");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QRunnable* PythonQtWrapper_QRunnable::new_QRunnable()
{ 
return new PythonQtShell_QRunnable(); }

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
  return ( theWrappedObject->autoDelete());
}

void PythonQtWrapper_QRunnable::run(QRunnable* theWrappedObject)
{
  ( theWrappedObject->run());
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete)
{
  ( theWrappedObject->setAutoDelete(_autoDelete));
}



PythonQtShell_QSaveFile::~PythonQtShell_QSaveFile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSaveFile::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::atEnd();
}
qint64  PythonQtShell_QSaveFile::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::bytesAvailable();
}
qint64  PythonQtShell_QSaveFile::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::bytesToWrite();
}
bool  PythonQtShell_QSaveFile::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::canReadLine();
}
QString  PythonQtShell_QSaveFile::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fileName");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fileName", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::fileName();
}
bool  PythonQtShell_QSaveFile::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::isSequential();
}
bool  PythonQtShell_QSaveFile::open(QIODevice::OpenMode  flags0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&flags0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::open(flags0);
}
QFileDevice::Permissions  PythonQtShell_QSaveFile::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::permissions();
}
qint64  PythonQtShell_QSaveFile::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::pos();
}
qint64  PythonQtShell_QSaveFile::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::readData(data0, maxlen1);
}
qint64  PythonQtShell_QSaveFile::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QSaveFile::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::reset();
}
bool  PythonQtShell_QSaveFile::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::resize(sz0);
}
bool  PythonQtShell_QSaveFile::seek(qint64  offset0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::seek(offset0);
}
bool  PythonQtShell_QSaveFile::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QSaveFile::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::size();
}
bool  PythonQtShell_QSaveFile::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QSaveFile::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QSaveFile::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSaveFile::writeData(data0, len1);
}
QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(QObject*  parent)
{ 
return new PythonQtShell_QSaveFile(parent); }

QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(const QString&  name)
{ 
return new PythonQtShell_QSaveFile(name); }

QSaveFile* PythonQtWrapper_QSaveFile::new_QSaveFile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QSaveFile(name, parent); }

const QMetaObject* PythonQtShell_QSaveFile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSaveFile::staticMetaObject);
  } else {
    return &QSaveFile::staticMetaObject;
  }
}
int PythonQtShell_QSaveFile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSaveFile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QSaveFile::cancelWriting(QSaveFile* theWrappedObject)
{
  ( theWrappedObject->cancelWriting());
}

bool  PythonQtWrapper_QSaveFile::commit(QSaveFile* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

bool  PythonQtWrapper_QSaveFile::directWriteFallback(QSaveFile* theWrappedObject) const
{
  return ( theWrappedObject->directWriteFallback());
}

void PythonQtWrapper_QSaveFile::setDirectWriteFallback(QSaveFile* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setDirectWriteFallback(enabled));
}

void PythonQtWrapper_QSaveFile::setFileName(QSaveFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileName(name));
}



void PythonQtWrapper_QSemaphore::acquire(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->acquire(n));
}

int  PythonQtWrapper_QSemaphore::available(QSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->available());
}

void PythonQtWrapper_QSemaphore::release(QSemaphore* theWrappedObject, int  n)
{
  ( theWrappedObject->release(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->tryAcquire(n));
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout)
{
  return ( theWrappedObject->tryAcquire(n, timeout));
}



PythonQtShell_QSequentialAnimationGroup::~PythonQtShell_QSequentialAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QSequentialAnimationGroup::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSequentialAnimationGroup::duration();
}
bool  PythonQtShell_QSequentialAnimationGroup::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSequentialAnimationGroup::event(event0);
}
void PythonQtShell_QSequentialAnimationGroup::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateCurrentTime(arg__1);
}
void PythonQtShell_QSequentialAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QSequentialAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSequentialAnimationGroup::updateState(newState0, oldState1);
}
QSequentialAnimationGroup* PythonQtWrapper_QSequentialAnimationGroup::new_QSequentialAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QSequentialAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QSequentialAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSequentialAnimationGroup::staticMetaObject);
  } else {
    return &QSequentialAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QSequentialAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSequentialAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::addPause(QSequentialAnimationGroup* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->addPause(msecs));
}

QAbstractAnimation*  PythonQtWrapper_QSequentialAnimationGroup::currentAnimation(QSequentialAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->currentAnimation());
}

QPauseAnimation*  PythonQtWrapper_QSequentialAnimationGroup::insertPause(QSequentialAnimationGroup* theWrappedObject, int  index, int  msecs)
{
  return ( theWrappedObject->insertPause(index, msecs));
}



PythonQtShell_QSettings::~PythonQtShell_QSettings() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSettings::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSettings::event(event0);
}
QSettings* PythonQtWrapper_QSettings::new_QSettings(QObject*  parent)
{ 
return new PythonQtShell_QSettings(parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(format, scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent)
{ 
return new PythonQtShell_QSettings(fileName, format, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(organization, application, parent); }

const QMetaObject* PythonQtShell_QSettings::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSettings::staticMetaObject);
  } else {
    return &QSettings::staticMetaObject;
  }
}
int PythonQtShell_QSettings::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSettings::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QSettings::allKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->allKeys());
}

QString  PythonQtWrapper_QSettings::applicationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->applicationName());
}

void PythonQtWrapper_QSettings::beginGroup(QSettings* theWrappedObject, const QString&  prefix)
{
  ( theWrappedObject->beginGroup(prefix));
}

int  PythonQtWrapper_QSettings::beginReadArray(QSettings* theWrappedObject, const QString&  prefix)
{
  return ( theWrappedObject->beginReadArray(prefix));
}

void PythonQtWrapper_QSettings::beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size)
{
  ( theWrappedObject->beginWriteArray(prefix, size));
}

QStringList  PythonQtWrapper_QSettings::childGroups(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childGroups());
}

QStringList  PythonQtWrapper_QSettings::childKeys(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->childKeys());
}

void PythonQtWrapper_QSettings::clear(QSettings* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QSettings::contains(QSettings* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

QSettings::Format  PythonQtWrapper_QSettings::static_QSettings_defaultFormat()
{
  return (QSettings::defaultFormat());
}

void PythonQtWrapper_QSettings::endArray(QSettings* theWrappedObject)
{
  ( theWrappedObject->endArray());
}

void PythonQtWrapper_QSettings::endGroup(QSettings* theWrappedObject)
{
  ( theWrappedObject->endGroup());
}

bool  PythonQtWrapper_QSettings::event(QSettings* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QSettings*)theWrappedObject)->promoted_event(event));
}

bool  PythonQtWrapper_QSettings::fallbacksEnabled(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fallbacksEnabled());
}

QString  PythonQtWrapper_QSettings::fileName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QSettings::Format  PythonQtWrapper_QSettings::format(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QString  PythonQtWrapper_QSettings::group(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

QTextCodec*  PythonQtWrapper_QSettings::iniCodec(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->iniCodec());
}

bool  PythonQtWrapper_QSettings::isAtomicSyncRequired(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->isAtomicSyncRequired());
}

bool  PythonQtWrapper_QSettings::isWritable(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QString  PythonQtWrapper_QSettings::organizationName(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->organizationName());
}

void PythonQtWrapper_QSettings::remove(QSettings* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

QSettings::Scope  PythonQtWrapper_QSettings::scope(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

void PythonQtWrapper_QSettings::setArrayIndex(QSettings* theWrappedObject, int  i)
{
  ( theWrappedObject->setArrayIndex(i));
}

void PythonQtWrapper_QSettings::setAtomicSyncRequired(QSettings* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAtomicSyncRequired(enable));
}

void PythonQtWrapper_QSettings::static_QSettings_setDefaultFormat(QSettings::Format  format)
{
  (QSettings::setDefaultFormat(format));
}

void PythonQtWrapper_QSettings::setFallbacksEnabled(QSettings* theWrappedObject, bool  b)
{
  ( theWrappedObject->setFallbacksEnabled(b));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setIniCodec(codec));
}

void PythonQtWrapper_QSettings::setIniCodec(QSettings* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setIniCodec(codecName));
}

void PythonQtWrapper_QSettings::static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path)
{
  (QSettings::setPath(format, scope, path));
}

void PythonQtWrapper_QSettings::setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setValue(key, value));
}

QSettings::Status  PythonQtWrapper_QSettings::status(QSettings* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QSettings::sync(QSettings* theWrappedObject)
{
  ( theWrappedObject->sync());
}

QVariant  PythonQtWrapper_QSettings::value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->value(key, defaultValue));
}



bool  PythonQtWrapper_QSharedMemory::attach(QSharedMemory* theWrappedObject, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->attach(mode));
}

const void*  PythonQtWrapper_QSharedMemory::constData(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->constData());
}

bool  PythonQtWrapper_QSharedMemory::create(QSharedMemory* theWrappedObject, int  size, QSharedMemory::AccessMode  mode)
{
  return ( theWrappedObject->create(size, mode));
}

void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->data());
}

const void*  PythonQtWrapper_QSharedMemory::data(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

QSharedMemory::SharedMemoryError  PythonQtWrapper_QSharedMemory::error(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSharedMemory::errorString(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QSharedMemory::isAttached(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->isAttached());
}

QString  PythonQtWrapper_QSharedMemory::key(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSharedMemory::lock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

QString  PythonQtWrapper_QSharedMemory::nativeKey(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->nativeKey());
}

void PythonQtWrapper_QSharedMemory::setKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setKey(key));
}

void PythonQtWrapper_QSharedMemory::setNativeKey(QSharedMemory* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->setNativeKey(key));
}

int  PythonQtWrapper_QSharedMemory::size(QSharedMemory* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QSharedMemory::unlock(QSharedMemory* theWrappedObject)
{
  return ( theWrappedObject->unlock());
}



PythonQtShell_QSignalBlocker::~PythonQtShell_QSignalBlocker() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSignalBlocker* PythonQtWrapper_QSignalBlocker::new_QSignalBlocker()
{ 
return new PythonQtShell_QSignalBlocker(); }


