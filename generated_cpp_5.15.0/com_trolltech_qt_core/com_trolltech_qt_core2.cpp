#include "com_trolltech_qt_core2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextCodec>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsignalmapper.h>
#include <qsignaltransition.h>
#include <qsocketnotifier.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringmatcher.h>
#include <qsystemsemaphore.h>
#include <qtemporarydir.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthread.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtranslator.h>
#include <qurl.h>
#include <qurlquery.h>
#include <qvariantanimation.h>
#include <qwaitcondition.h>
#include <qwidget.h>

PythonQtShell_QSignalMapper::~PythonQtShell_QSignalMapper() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSignalMapper* PythonQtWrapper_QSignalMapper::new_QSignalMapper(QObject*  parent)
{ 
return new PythonQtShell_QSignalMapper(parent); }

const QMetaObject* PythonQtShell_QSignalMapper::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSignalMapper::staticMetaObject);
  } else {
    return &QSignalMapper::staticMetaObject;
  }
}
int PythonQtShell_QSignalMapper::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSignalMapper::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QObject*  object) const
{
  return ( theWrappedObject->mapping(object));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QWidget*  widget) const
{
  return ( theWrappedObject->mapping(widget));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->mapping(text));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, int  id) const
{
  return ( theWrappedObject->mapping(id));
}

void PythonQtWrapper_QSignalMapper::removeMappings(QSignalMapper* theWrappedObject, QObject*  sender)
{
  ( theWrappedObject->removeMappings(sender));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object)
{
  ( theWrappedObject->setMapping(sender, object));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QWidget*  widget)
{
  ( theWrappedObject->setMapping(sender, widget));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text)
{
  ( theWrappedObject->setMapping(sender, text));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id)
{
  ( theWrappedObject->setMapping(sender, id));
}



PythonQtShell_QSignalTransition::~PythonQtShell_QSignalTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSignalTransition::event(QEvent*  e0)
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
  return QSignalTransition::event(e0);
}
bool  PythonQtShell_QSignalTransition::eventTest(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventTest");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
  return QSignalTransition::eventTest(event0);
}
void PythonQtShell_QSignalTransition::onTransition(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onTransition");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSignalTransition::onTransition(event0);
}
QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sourceState); }

QSignalTransition* PythonQtWrapper_QSignalTransition::new_QSignalTransition(const QObject*  sender, const char*  signal, QState*  sourceState)
{ 
return new PythonQtShell_QSignalTransition(sender, signal, sourceState); }

const QMetaObject* PythonQtShell_QSignalTransition::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSignalTransition::staticMetaObject);
  } else {
    return &QSignalTransition::staticMetaObject;
  }
}
int PythonQtShell_QSignalTransition::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSignalTransition::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QObject*  PythonQtWrapper_QSignalTransition::senderObject(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->senderObject());
}

void PythonQtWrapper_QSignalTransition::setSenderObject(QSignalTransition* theWrappedObject, const QObject*  sender)
{
  ( theWrappedObject->setSenderObject(sender));
}

void PythonQtWrapper_QSignalTransition::setSignal(QSignalTransition* theWrappedObject, const QByteArray&  signal)
{
  ( theWrappedObject->setSignal(signal));
}

QByteArray  PythonQtWrapper_QSignalTransition::signal(QSignalTransition* theWrappedObject) const
{
  return ( theWrappedObject->signal());
}



PythonQtShell_QSocketNotifier::~PythonQtShell_QSocketNotifier() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSocketNotifier::event(QEvent*  arg__1)
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
      void* args[2] = {NULL, (void*)&arg__1};
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
  return QSocketNotifier::event(arg__1);
}
QSocketNotifier* PythonQtWrapper_QSocketNotifier::new_QSocketNotifier(qintptr  socket, QSocketNotifier::Type  arg__2, QObject*  parent)
{ 
return new PythonQtShell_QSocketNotifier(socket, arg__2, parent); }

const QMetaObject* PythonQtShell_QSocketNotifier::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSocketNotifier::staticMetaObject);
  } else {
    return &QSocketNotifier::staticMetaObject;
  }
}
int PythonQtShell_QSocketNotifier::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSocketNotifier::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QSocketNotifier::event(QSocketNotifier* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QSocketNotifier::isEnabled(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

qintptr  PythonQtWrapper_QSocketNotifier::socket(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->socket());
}

QSocketNotifier::Type  PythonQtWrapper_QSocketNotifier::type(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



QString  PythonQtWrapper_QStandardPaths::static_QStandardPaths_displayName(QStandardPaths::StandardLocation  type)
{
  return (QStandardPaths::displayName(type));
}

void PythonQtWrapper_QStandardPaths::static_QStandardPaths_enableTestMode(bool  testMode)
{
  (QStandardPaths::enableTestMode(testMode));
}

QString  PythonQtWrapper_QStandardPaths::static_QStandardPaths_findExecutable(const QString&  executableName, const QStringList&  paths)
{
  return (QStandardPaths::findExecutable(executableName, paths));
}

bool  PythonQtWrapper_QStandardPaths::static_QStandardPaths_isTestModeEnabled()
{
  return (QStandardPaths::isTestModeEnabled());
}

QString  PythonQtWrapper_QStandardPaths::static_QStandardPaths_locate(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options)
{
  return (QStandardPaths::locate(type, fileName, options));
}

QStringList  PythonQtWrapper_QStandardPaths::static_QStandardPaths_locateAll(QStandardPaths::StandardLocation  type, const QString&  fileName, QStandardPaths::LocateOptions  options)
{
  return (QStandardPaths::locateAll(type, fileName, options));
}

void PythonQtWrapper_QStandardPaths::static_QStandardPaths_setTestModeEnabled(bool  testMode)
{
  (QStandardPaths::setTestModeEnabled(testMode));
}

QStringList  PythonQtWrapper_QStandardPaths::static_QStandardPaths_standardLocations(QStandardPaths::StandardLocation  type)
{
  return (QStandardPaths::standardLocations(type));
}

QString  PythonQtWrapper_QStandardPaths::static_QStandardPaths_writableLocation(QStandardPaths::StandardLocation  type)
{
  return (QStandardPaths::writableLocation(type));
}



PythonQtShell_QState::~PythonQtShell_QState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QState::event(QEvent*  e0)
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
  return QState::event(e0);
}
void PythonQtShell_QState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onEntry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QState::onEntry(event0);
}
void PythonQtShell_QState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onExit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QState::onExit(event0);
}
QState* PythonQtWrapper_QState::new_QState(QState*  parent)
{ 
return new PythonQtShell_QState(parent); }

QState* PythonQtWrapper_QState::new_QState(QState::ChildMode  childMode, QState*  parent)
{ 
return new PythonQtShell_QState(childMode, parent); }

const QMetaObject* PythonQtShell_QState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QState::staticMetaObject);
  } else {
    return &QState::staticMetaObject;
  }
}
int PythonQtShell_QState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAbstractTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractState* >  target)
{
  return ( theWrappedObject->addTransition(target));
}

void PythonQtWrapper_QState::addTransition(QState* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractTransition* >  transition)
{
  ( theWrappedObject->addTransition(transition));
}

QSignalTransition*  PythonQtWrapper_QState::addTransition(QState* theWrappedObject, const QObject*  sender, const char*  signal, QAbstractState*  target)
{
  return ( theWrappedObject->addTransition(sender, signal, target));
}

void PythonQtWrapper_QState::assignProperty(QState* theWrappedObject, QObject*  object, const char*  name, const QVariant&  value)
{
  ( theWrappedObject->assignProperty(object, name, value));
}

QState::ChildMode  PythonQtWrapper_QState::childMode(QState* theWrappedObject) const
{
  return ( theWrappedObject->childMode());
}

QAbstractState*  PythonQtWrapper_QState::errorState(QState* theWrappedObject) const
{
  return ( theWrappedObject->errorState());
}

QAbstractState*  PythonQtWrapper_QState::initialState(QState* theWrappedObject) const
{
  return ( theWrappedObject->initialState());
}

void PythonQtWrapper_QState::removeTransition(QState* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractTransition* >  transition)
{
  ( theWrappedObject->removeTransition(transition));
}

void PythonQtWrapper_QState::setChildMode(QState* theWrappedObject, QState::ChildMode  mode)
{
  ( theWrappedObject->setChildMode(mode));
}

void PythonQtWrapper_QState::setErrorState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setErrorState(state));
}

void PythonQtWrapper_QState::setInitialState(QState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setInitialState(state));
}

QList<QAbstractTransition* >  PythonQtWrapper_QState::transitions(QState* theWrappedObject) const
{
  return ( theWrappedObject->transitions());
}



PythonQtShell_QStateMachine::~PythonQtShell_QStateMachine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QStateMachine::beginMicrostep(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("beginMicrostep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::beginMicrostep(event0);
}
void PythonQtShell_QStateMachine::beginSelectTransitions(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("beginSelectTransitions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::beginSelectTransitions(event0);
}
void PythonQtShell_QStateMachine::endMicrostep(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endMicrostep");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::endMicrostep(event0);
}
void PythonQtShell_QStateMachine::endSelectTransitions(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endSelectTransitions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::endSelectTransitions(event0);
}
bool  PythonQtShell_QStateMachine::event(QEvent*  e0)
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
  return QStateMachine::event(e0);
}
bool  PythonQtShell_QStateMachine::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
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
  return QStateMachine::eventFilter(watched0, event1);
}
void PythonQtShell_QStateMachine::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onEntry");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::onEntry(event0);
}
void PythonQtShell_QStateMachine::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onExit");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QStateMachine::onExit(event0);
}
QStateMachine* PythonQtWrapper_QStateMachine::new_QStateMachine(QObject*  parent)
{ 
return new PythonQtShell_QStateMachine(parent); }

QStateMachine* PythonQtWrapper_QStateMachine::new_QStateMachine(QState::ChildMode  childMode, QObject*  parent)
{ 
return new PythonQtShell_QStateMachine(childMode, parent); }

const QMetaObject* PythonQtShell_QStateMachine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QStateMachine::staticMetaObject);
  } else {
    return &QStateMachine::staticMetaObject;
  }
}
int PythonQtShell_QStateMachine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QStateMachine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QStateMachine::addDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addDefaultAnimation(animation));
}

void PythonQtWrapper_QStateMachine::addState(QStateMachine* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractState* >  state)
{
  ( theWrappedObject->addState(state));
}

void PythonQtWrapper_QStateMachine::beginMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginMicrostep(event));
}

void PythonQtWrapper_QStateMachine::beginSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_beginSelectTransitions(event));
}

bool  PythonQtWrapper_QStateMachine::cancelDelayedEvent(QStateMachine* theWrappedObject, int  id)
{
  return ( theWrappedObject->cancelDelayedEvent(id));
}

void PythonQtWrapper_QStateMachine::clearError(QStateMachine* theWrappedObject)
{
  ( theWrappedObject->clearError());
}

QSet<QAbstractState* >  PythonQtWrapper_QStateMachine::configuration(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
}

QList<QAbstractAnimation* >  PythonQtWrapper_QStateMachine::defaultAnimations(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->defaultAnimations());
}

void PythonQtWrapper_QStateMachine::endMicrostep(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endMicrostep(event));
}

void PythonQtWrapper_QStateMachine::endSelectTransitions(QStateMachine* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QStateMachine*)theWrappedObject)->promoted_endSelectTransitions(event));
}

QStateMachine::Error  PythonQtWrapper_QStateMachine::error(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QStateMachine::errorString(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QStateMachine::eventFilter(QStateMachine* theWrappedObject, QObject*  watched, QEvent*  event)
{
  return ( theWrappedObject->eventFilter(watched, event));
}

QState::RestorePolicy  PythonQtWrapper_QStateMachine::globalRestorePolicy(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->globalRestorePolicy());
}

bool  PythonQtWrapper_QStateMachine::isAnimated(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isAnimated());
}

bool  PythonQtWrapper_QStateMachine::isRunning(QStateMachine* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

int  PythonQtWrapper_QStateMachine::postDelayedEvent(QStateMachine* theWrappedObject, QEvent*  event, int  delay)
{
  return ( theWrappedObject->postDelayedEvent(event, delay));
}

void PythonQtWrapper_QStateMachine::postEvent(QStateMachine* theWrappedObject, QEvent*  event, QStateMachine::EventPriority  priority)
{
  ( theWrappedObject->postEvent(event, priority));
}

void PythonQtWrapper_QStateMachine::removeDefaultAnimation(QStateMachine* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeDefaultAnimation(animation));
}

void PythonQtWrapper_QStateMachine::removeState(QStateMachine* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractState* >  state)
{
  ( theWrappedObject->removeState(state));
}

void PythonQtWrapper_QStateMachine::setAnimated(QStateMachine* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAnimated(enabled));
}

void PythonQtWrapper_QStateMachine::setGlobalRestorePolicy(QStateMachine* theWrappedObject, QState::RestorePolicy  restorePolicy)
{
  ( theWrappedObject->setGlobalRestorePolicy(restorePolicy));
}



QStateMachine::SignalEvent* PythonQtWrapper_QStateMachine__SignalEvent::new_QStateMachine__SignalEvent(QObject*  sender, int  signalIndex, const QList<QVariant >&  arguments)
{ 
return new QStateMachine::SignalEvent(sender, signalIndex, arguments); }

QList<QVariant >  PythonQtWrapper_QStateMachine__SignalEvent::arguments(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

QObject*  PythonQtWrapper_QStateMachine__SignalEvent::sender(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->sender());
}

int  PythonQtWrapper_QStateMachine__SignalEvent::signalIndex(QStateMachine::SignalEvent* theWrappedObject) const
{
  return ( theWrappedObject->signalIndex());
}



QStateMachine::WrappedEvent* PythonQtWrapper_QStateMachine__WrappedEvent::new_QStateMachine__WrappedEvent(QObject*  object, QEvent*  event)
{ 
return new QStateMachine::WrappedEvent(object, event); }

QEvent*  PythonQtWrapper_QStateMachine__WrappedEvent::event(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->event());
}

QObject*  PythonQtWrapper_QStateMachine__WrappedEvent::object(QStateMachine::WrappedEvent* theWrappedObject) const
{
  return ( theWrappedObject->object());
}



QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher()
{ 
return new QStringMatcher(); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

int  PythonQtWrapper_QStringMatcher::indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from) const
{
  return ( theWrappedObject->indexIn(str, from));
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

void PythonQtWrapper_QStringMatcher::setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

void PythonQtWrapper_QStringMatcher::setPattern(QStringMatcher* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}



PythonQtShell_QSysInfo::~PythonQtShell_QSysInfo() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSysInfo* PythonQtWrapper_QSysInfo::new_QSysInfo()
{ 
return new PythonQtShell_QSysInfo(); }

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_bootUniqueId()
{
  return (QSysInfo::bootUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildAbi()
{
  return (QSysInfo::buildAbi());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_buildCpuArchitecture()
{
  return (QSysInfo::buildCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_currentCpuArchitecture()
{
  return (QSysInfo::currentCpuArchitecture());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelType()
{
  return (QSysInfo::kernelType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_kernelVersion()
{
  return (QSysInfo::kernelVersion());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_machineHostName()
{
  return (QSysInfo::machineHostName());
}

QByteArray  PythonQtWrapper_QSysInfo::static_QSysInfo_machineUniqueId()
{
  return (QSysInfo::machineUniqueId());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_prettyProductName()
{
  return (QSysInfo::prettyProductName());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productType()
{
  return (QSysInfo::productType());
}

QString  PythonQtWrapper_QSysInfo::static_QSysInfo_productVersion()
{
  return (QSysInfo::productVersion());
}



bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
  return ( theWrappedObject->acquire());
}

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSystemSemaphore::release(QSystemSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->release(n));
}

void PythonQtWrapper_QSystemSemaphore::setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{
  ( theWrappedObject->setKey(key, initialValue, mode));
}



bool  PythonQtWrapper_QTemporaryDir::autoRemove(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QString  PythonQtWrapper_QTemporaryDir::errorString(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QTemporaryDir::filePath(QTemporaryDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->filePath(fileName));
}

bool  PythonQtWrapper_QTemporaryDir::isValid(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTemporaryDir::path(QTemporaryDir* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

bool  PythonQtWrapper_QTemporaryDir::remove(QTemporaryDir* theWrappedObject)
{
  return ( theWrappedObject->remove());
}

void PythonQtWrapper_QTemporaryDir::setAutoRemove(QTemporaryDir* theWrappedObject, bool  b)
{
  ( theWrappedObject->setAutoRemove(b));
}



PythonQtShell_QTemporaryFile::~PythonQtShell_QTemporaryFile() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QTemporaryFile::atEnd() const
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
  return QTemporaryFile::atEnd();
}
qint64  PythonQtShell_QTemporaryFile::bytesAvailable() const
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
  return QTemporaryFile::bytesAvailable();
}
qint64  PythonQtShell_QTemporaryFile::bytesToWrite() const
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
  return QTemporaryFile::bytesToWrite();
}
bool  PythonQtShell_QTemporaryFile::canReadLine() const
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
  return QTemporaryFile::canReadLine();
}
void PythonQtShell_QTemporaryFile::close()
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
  QTemporaryFile::close();
}
QString  PythonQtShell_QTemporaryFile::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("uniqueFilename");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("uniqueFilename", methodInfo, result);
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
  return QTemporaryFile::fileName();
}
bool  PythonQtShell_QTemporaryFile::isSequential() const
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
  return QTemporaryFile::isSequential();
}
bool  PythonQtShell_QTemporaryFile::open(QIODevice::OpenMode  flags0)
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
  return QTemporaryFile::open(flags0);
}
QFileDevice::Permissions  PythonQtShell_QTemporaryFile::permissions() const
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
  return QTemporaryFile::permissions();
}
qint64  PythonQtShell_QTemporaryFile::pos() const
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
  return QTemporaryFile::pos();
}
qint64  PythonQtShell_QTemporaryFile::readData(char*  data0, qint64  maxlen1)
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
  return QTemporaryFile::readData(data0, maxlen1);
}
qint64  PythonQtShell_QTemporaryFile::readLineData(char*  data0, qint64  maxlen1)
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
  return QTemporaryFile::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QTemporaryFile::reset()
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
  return QTemporaryFile::reset();
}
bool  PythonQtShell_QTemporaryFile::resize(qint64  sz0)
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
  return QTemporaryFile::resize(sz0);
}
bool  PythonQtShell_QTemporaryFile::seek(qint64  offset0)
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
  return QTemporaryFile::seek(offset0);
}
bool  PythonQtShell_QTemporaryFile::setPermissions(QFileDevice::Permissions  permissionSpec0)
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
  return QTemporaryFile::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QTemporaryFile::size() const
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
  return QTemporaryFile::size();
}
bool  PythonQtShell_QTemporaryFile::waitForBytesWritten(int  msecs0)
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
  return QTemporaryFile::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QTemporaryFile::waitForReadyRead(int  msecs0)
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
  return QTemporaryFile::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QTemporaryFile::writeData(const char*  data0, qint64  len1)
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
  return QTemporaryFile::writeData(data0, len1);
}
QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile()
{ 
return new PythonQtShell_QTemporaryFile(); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(parent); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName)
{ 
return new PythonQtShell_QTemporaryFile(templateName); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName, QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(templateName, parent); }

const QMetaObject* PythonQtShell_QTemporaryFile::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTemporaryFile::staticMetaObject);
  } else {
    return &QTemporaryFile::staticMetaObject;
  }
}
int PythonQtShell_QTemporaryFile::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTemporaryFile::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QTemporaryFile::autoRemove(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(QFile&  file)
{
  return (QTemporaryFile::createLocalFile(file));
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(const QString&  fileName)
{
  return (QTemporaryFile::createLocalFile(fileName));
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createNativeFile(QFile&  file)
{
  return (QTemporaryFile::createNativeFile(file));
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createNativeFile(const QString&  fileName)
{
  return (QTemporaryFile::createNativeFile(fileName));
}

QString  PythonQtWrapper_QTemporaryFile::fileName(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QTemporaryFile::fileTemplate(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileTemplate());
}

bool  PythonQtWrapper_QTemporaryFile::open(QTemporaryFile* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QTemporaryFile::rename(QTemporaryFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->rename(newName));
}

void PythonQtWrapper_QTemporaryFile::setAutoRemove(QTemporaryFile* theWrappedObject, bool  b)
{
  ( theWrappedObject->setAutoRemove(b));
}

void PythonQtWrapper_QTemporaryFile::setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileTemplate(name));
}



QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder()
{ 
return new QTextBoundaryFinder(); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string)
{ 
return new QTextBoundaryFinder(type, string); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(const QTextBoundaryFinder&  other)
{ 
return new QTextBoundaryFinder(other); }

QTextBoundaryFinder::BoundaryReasons  PythonQtWrapper_QTextBoundaryFinder::boundaryReasons(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->boundaryReasons());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isAtBoundary(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isAtBoundary());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isValid(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTextBoundaryFinder::position(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTextBoundaryFinder::setPosition(QTextBoundaryFinder* theWrappedObject, int  position)
{
  ( theWrappedObject->setPosition(position));
}

QString  PythonQtWrapper_QTextBoundaryFinder::string(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->string());
}

void PythonQtWrapper_QTextBoundaryFinder::toEnd(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toEnd());
}

int  PythonQtWrapper_QTextBoundaryFinder::toNextBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toNextBoundary());
}

int  PythonQtWrapper_QTextBoundaryFinder::toPreviousBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toPreviousBoundary());
}

void PythonQtWrapper_QTextBoundaryFinder::toStart(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toStart());
}

QTextBoundaryFinder::BoundaryType  PythonQtWrapper_QTextBoundaryFinder::type(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QTextCodec::~PythonQtShell_QTextCodec() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QByteArray >  PythonQtShell_QTextCodec::aliases() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("aliases");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QByteArray >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("aliases", methodInfo, result);
          } else {
            returnValue = *((QList<QByteArray >*)args[0]);
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
  return QTextCodec::aliases();
}
QByteArray  PythonQtShell_QTextCodec::convertFromUnicode(const QChar*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("convertFromUnicode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QByteArray" , "const QChar*" , "int" , "QTextCodec::ConverterState*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QByteArray returnValue{};
      void* args[4] = {NULL, (void*)&in0, (void*)&length1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("convertFromUnicode", methodInfo, result);
          } else {
            returnValue = *((QByteArray*)args[0]);
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
  return QByteArray();
}
QString  PythonQtShell_QTextCodec::convertToUnicode(const char*  in0, int  length1, QTextCodec::ConverterState*  state2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("convertToUnicode");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const char*" , "int" , "QTextCodec::ConverterState*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QString returnValue{};
      void* args[4] = {NULL, (void*)&in0, (void*)&length1, (void*)&state2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("convertToUnicode", methodInfo, result);
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
  return QString();
}
int  PythonQtShell_QTextCodec::mibEnum() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mibEnum");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("mibEnum", methodInfo, result);
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
  return int();
}
QByteArray  PythonQtShell_QTextCodec::name() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("name");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QByteArray"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QByteArray returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
          } else {
            returnValue = *((QByteArray*)args[0]);
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
  return QByteArray();
}
QTextCodec* PythonQtWrapper_QTextCodec::new_QTextCodec()
{ 
return new PythonQtShell_QTextCodec(); }

QList<QByteArray >  PythonQtWrapper_QTextCodec::aliases(QTextCodec* theWrappedObject) const
{
  return ( theWrappedObject->aliases());
}

QList<QByteArray >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableCodecs()
{
  return (QTextCodec::availableCodecs());
}

QList<int >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableMibs()
{
  return (QTextCodec::availableMibs());
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba)
{
  return (QTextCodec::codecForHtml(ba));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
  return (QTextCodec::codecForHtml(ba, defaultCodec));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForLocale()
{
  return (QTextCodec::codecForLocale());
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForMib(int  mib)
{
  return (QTextCodec::codecForMib(mib));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const QByteArray&  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const char*  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForUtfText(const QByteArray&  ba)
{
  return (QTextCodec::codecForUtfText(ba));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForUtfText(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
  return (QTextCodec::codecForUtfText(ba, defaultCodec));
}

QByteArray  PythonQtWrapper_QTextCodec::convertFromUnicode(QTextCodec* theWrappedObject, const QChar*  in, int  length, QTextCodec::ConverterState*  state) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_convertFromUnicode(in, length, state));
}

QString  PythonQtWrapper_QTextCodec::convertToUnicode(QTextCodec* theWrappedObject, const char*  in, int  length, QTextCodec::ConverterState*  state) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_convertToUnicode(in, length, state));
}

QByteArray  PythonQtWrapper_QTextCodec::fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const
{
  return ( theWrappedObject->fromUnicode(uc));
}

QTextDecoder*  PythonQtWrapper_QTextCodec::makeDecoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags) const
{
  return ( theWrappedObject->makeDecoder(flags));
}

QTextEncoder*  PythonQtWrapper_QTextCodec::makeEncoder(QTextCodec* theWrappedObject, QTextCodec::ConversionFlags  flags) const
{
  return ( theWrappedObject->makeEncoder(flags));
}

int  PythonQtWrapper_QTextCodec::mibEnum(QTextCodec* theWrappedObject) const
{
  return ( theWrappedObject->mibEnum());
}

QByteArray  PythonQtWrapper_QTextCodec::name(QTextCodec* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForLocale(QTextCodec*  c)
{
  (QTextCodec::setCodecForLocale(c));
}

QString  PythonQtWrapper_QTextCodec::toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const
{
  return ( theWrappedObject->toUnicode(arg__1));
}



bool  PythonQtWrapper_QTextDecoder::hasFailure(QTextDecoder* theWrappedObject) const
{
  return ( theWrappedObject->hasFailure());
}

bool  PythonQtWrapper_QTextDecoder::needsMoreData(QTextDecoder* theWrappedObject) const
{
  return ( theWrappedObject->needsMoreData());
}

QString  PythonQtWrapper_QTextDecoder::toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba)
{
  return ( theWrappedObject->toUnicode(ba));
}



PythonQtShell_QTextStream::~PythonQtShell_QTextStream() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTextStream* PythonQtWrapper_QTextStream::new_QTextStream()
{ 
return new PythonQtShell_QTextStream(); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QIODevice*  device)
{ 
return new PythonQtShell_QTextStream(device); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

bool  PythonQtWrapper_QTextStream::atEnd(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

bool  PythonQtWrapper_QTextStream::autoDetectUnicode(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectUnicode());
}

QTextCodec*  PythonQtWrapper_QTextStream::codec(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QTextStream::device(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QTextStream::FieldAlignment  PythonQtWrapper_QTextStream::fieldAlignment(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldAlignment());
}

int  PythonQtWrapper_QTextStream::fieldWidth(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldWidth());
}

void PythonQtWrapper_QTextStream::flush(QTextStream* theWrappedObject)
{
  ( theWrappedObject->flush());
}

bool  PythonQtWrapper_QTextStream::generateByteOrderMark(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->generateByteOrderMark());
}

int  PythonQtWrapper_QTextStream::integerBase(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->integerBase());
}

QLocale  PythonQtWrapper_QTextStream::locale(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

QTextStream::NumberFlags  PythonQtWrapper_QTextStream::numberFlags(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->numberFlags());
}

QTextStream*  PythonQtWrapper_QTextStream::__lshift__(QTextStream* theWrappedObject, QLatin1String  s)
{
  return &( (*theWrappedObject) <<s);
}

QTextStream*  PythonQtWrapper_QTextStream::writeByte(QTextStream* theWrappedObject, char  ch)
{
  return &( (*theWrappedObject) <<ch);
}

QTextStream*  PythonQtWrapper_QTextStream::__lshift__(QTextStream* theWrappedObject, const QStringRef&  s)
{
  return &( (*theWrappedObject) <<s);
}

QTextStream*  PythonQtWrapper_QTextStream::writeDouble(QTextStream* theWrappedObject, double  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeFloat(QTextStream* theWrappedObject, float  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeLongLong(QTextStream* theWrappedObject, qlonglong  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeInt(QTextStream* theWrappedObject, signed int  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeShort(QTextStream* theWrappedObject, signed short  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::readByte(QTextStream* theWrappedObject, char&  ch)
{
  return &( (*theWrappedObject) >>ch);
}

QTextStream*  PythonQtWrapper_QTextStream::readDouble(QTextStream* theWrappedObject, double&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readFloat(QTextStream* theWrappedObject, float&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readLongLong(QTextStream* theWrappedObject, qlonglong&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readInt(QTextStream* theWrappedObject, signed int&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readShort(QTextStream* theWrappedObject, signed short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QChar  PythonQtWrapper_QTextStream::padChar(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->padChar());
}

qint64  PythonQtWrapper_QTextStream::pos(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QString  PythonQtWrapper_QTextStream::read(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QString  PythonQtWrapper_QTextStream::readAll(QTextStream* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

QString  PythonQtWrapper_QTextStream::readLine(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

bool  PythonQtWrapper_QTextStream::readLineInto(QTextStream* theWrappedObject, QString*  line, qint64  maxlen)
{
  return ( theWrappedObject->readLineInto(line, maxlen));
}

QTextStream::RealNumberNotation  PythonQtWrapper_QTextStream::realNumberNotation(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberNotation());
}

int  PythonQtWrapper_QTextStream::realNumberPrecision(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberPrecision());
}

void PythonQtWrapper_QTextStream::reset(QTextStream* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QTextStream::resetStatus(QTextStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

bool  PythonQtWrapper_QTextStream::seek(QTextStream* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QTextStream::setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoDetectUnicode(enabled));
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

void PythonQtWrapper_QTextStream::setDevice(QTextStream* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QTextStream::setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment)
{
  ( theWrappedObject->setFieldAlignment(alignment));
}

void PythonQtWrapper_QTextStream::setFieldWidth(QTextStream* theWrappedObject, int  width)
{
  ( theWrappedObject->setFieldWidth(width));
}

void PythonQtWrapper_QTextStream::setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate)
{
  ( theWrappedObject->setGenerateByteOrderMark(generate));
}

void PythonQtWrapper_QTextStream::setIntegerBase(QTextStream* theWrappedObject, int  base)
{
  ( theWrappedObject->setIntegerBase(base));
}

void PythonQtWrapper_QTextStream::setLocale(QTextStream* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

void PythonQtWrapper_QTextStream::setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags)
{
  ( theWrappedObject->setNumberFlags(flags));
}

void PythonQtWrapper_QTextStream::setPadChar(QTextStream* theWrappedObject, QChar  ch)
{
  ( theWrappedObject->setPadChar(ch));
}

void PythonQtWrapper_QTextStream::setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation)
{
  ( theWrappedObject->setRealNumberNotation(notation));
}

void PythonQtWrapper_QTextStream::setRealNumberPrecision(QTextStream* theWrappedObject, int  precision)
{
  ( theWrappedObject->setRealNumberPrecision(precision));
}

void PythonQtWrapper_QTextStream::setStatus(QTextStream* theWrappedObject, QTextStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

void PythonQtWrapper_QTextStream::skipWhiteSpace(QTextStream* theWrappedObject)
{
  ( theWrappedObject->skipWhiteSpace());
}

QTextStream::Status  PythonQtWrapper_QTextStream::status(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}



PythonQtShell_QThread::~PythonQtShell_QThread() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QThread::event(QEvent*  event0)
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
  return QThread::event(event0);
}
void PythonQtShell_QThread::run()
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
  QThread::run();
}
QThread* PythonQtWrapper_QThread::new_QThread(QObject*  parent)
{ 
return new PythonQtShell_QThread(parent); }

const QMetaObject* PythonQtShell_QThread::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QThread::staticMetaObject);
  } else {
    return &QThread::staticMetaObject;
  }
}
int PythonQtShell_QThread::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QThread::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QThread*  PythonQtWrapper_QThread::static_QThread_currentThread()
{
  return (QThread::currentThread());
}

bool  PythonQtWrapper_QThread::event(QThread* theWrappedObject, QEvent*  event)
{
  return ( theWrappedObject->event(event));
}

QAbstractEventDispatcher*  PythonQtWrapper_QThread::eventDispatcher(QThread* theWrappedObject) const
{
  return ( theWrappedObject->eventDispatcher());
}

int  PythonQtWrapper_QThread::exec(QThread* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QThread*)theWrappedObject)->promoted_exec());
}

void PythonQtWrapper_QThread::exit(QThread* theWrappedObject, int  retcode)
{
  ( theWrappedObject->exit(retcode));
}

bool  PythonQtWrapper_QThread::isFinished(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QThread::isInterruptionRequested(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isInterruptionRequested());
}

bool  PythonQtWrapper_QThread::isRunning(QThread* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

int  PythonQtWrapper_QThread::loopLevel(QThread* theWrappedObject) const
{
  return ( theWrappedObject->loopLevel());
}

void PythonQtWrapper_QThread::static_QThread_msleep(unsigned long  arg__1)
{
  (QThread::msleep(arg__1));
}

void PythonQtWrapper_QThread::requestInterruption(QThread* theWrappedObject)
{
  ( theWrappedObject->requestInterruption());
}

void PythonQtWrapper_QThread::run(QThread* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QThread*)theWrappedObject)->promoted_run());
}

void PythonQtWrapper_QThread::setEventDispatcher(QThread* theWrappedObject, QAbstractEventDispatcher*  eventDispatcher)
{
  ( theWrappedObject->setEventDispatcher(eventDispatcher));
}

void PythonQtWrapper_QThread::setStackSize(QThread* theWrappedObject, uint  stackSize)
{
  ( theWrappedObject->setStackSize(stackSize));
}

void PythonQtWrapper_QThread::static_QThread_setTerminationEnabled(bool  enabled)
{
  (PythonQtPublicPromoter_QThread::promoted_setTerminationEnabled(enabled));
}

void PythonQtWrapper_QThread::static_QThread_sleep(unsigned long  arg__1)
{
  (QThread::sleep(arg__1));
}

uint  PythonQtWrapper_QThread::stackSize(QThread* theWrappedObject) const
{
  return ( theWrappedObject->stackSize());
}

void PythonQtWrapper_QThread::static_QThread_usleep(unsigned long  arg__1)
{
  (QThread::usleep(arg__1));
}

bool  PythonQtWrapper_QThread::wait(QThread* theWrappedObject, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(deadline));
}

bool  PythonQtWrapper_QThread::wait(QThread* theWrappedObject, unsigned long  time)
{
  return ( theWrappedObject->wait(time));
}

void PythonQtWrapper_QThread::static_QThread_yieldCurrentThread()
{
  (QThread::yieldCurrentThread());
}



QThreadPool* PythonQtWrapper_QThreadPool::new_QThreadPool(QObject*  parent)
{ 
return new QThreadPool(parent); }

int  PythonQtWrapper_QThreadPool::activeThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->activeThreadCount());
}

void PythonQtWrapper_QThreadPool::cancel(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  ( theWrappedObject->cancel(runnable));
}

void PythonQtWrapper_QThreadPool::clear(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QThreadPool::expiryTimeout(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->expiryTimeout());
}

QThreadPool*  PythonQtWrapper_QThreadPool::static_QThreadPool_globalInstance()
{
  return (QThreadPool::globalInstance());
}

int  PythonQtWrapper_QThreadPool::maxThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->maxThreadCount());
}

void PythonQtWrapper_QThreadPool::releaseThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->releaseThread());
}

void PythonQtWrapper_QThreadPool::reserveThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->reserveThread());
}

void PythonQtWrapper_QThreadPool::setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout)
{
  ( theWrappedObject->setExpiryTimeout(expiryTimeout));
}

void PythonQtWrapper_QThreadPool::setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount)
{
  ( theWrappedObject->setMaxThreadCount(maxThreadCount));
}

void PythonQtWrapper_QThreadPool::setStackSize(QThreadPool* theWrappedObject, uint  stackSize)
{
  ( theWrappedObject->setStackSize(stackSize));
}

uint  PythonQtWrapper_QThreadPool::stackSize(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->stackSize());
}

void PythonQtWrapper_QThreadPool::start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority)
{
  ( theWrappedObject->start(runnable, priority));
}

bool  PythonQtWrapper_QThreadPool::tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryStart(runnable));
}

bool  PythonQtWrapper_QThreadPool::tryTake(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryTake(runnable));
}

bool  PythonQtWrapper_QThreadPool::waitForDone(QThreadPool* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDone(msecs));
}



PythonQtShell_QTimeLine::~PythonQtShell_QTimeLine() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimeLine::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimeLine::timerEvent(event0);
}
qreal  PythonQtShell_QTimeLine::valueForTime(int  msec0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("valueForTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qreal" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qreal returnValue{};
      void* args[2] = {NULL, (void*)&msec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("valueForTime", methodInfo, result);
          } else {
            returnValue = *((qreal*)args[0]);
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
  return QTimeLine::valueForTime(msec0);
}
QTimeLine* PythonQtWrapper_QTimeLine::new_QTimeLine(int  duration, QObject*  parent)
{ 
return new PythonQtShell_QTimeLine(duration, parent); }

const QMetaObject* PythonQtShell_QTimeLine::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTimeLine::staticMetaObject);
  } else {
    return &QTimeLine::staticMetaObject;
  }
}
int PythonQtShell_QTimeLine::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTimeLine::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QTimeLine::currentFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

int  PythonQtWrapper_QTimeLine::currentTime(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

qreal  PythonQtWrapper_QTimeLine::currentValue(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QTimeLine::CurveShape  PythonQtWrapper_QTimeLine::curveShape(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->curveShape());
}

QTimeLine::Direction  PythonQtWrapper_QTimeLine::direction(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QTimeLine::duration(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QEasingCurve  PythonQtWrapper_QTimeLine::easingCurve(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

int  PythonQtWrapper_QTimeLine::endFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->endFrame());
}

int  PythonQtWrapper_QTimeLine::frameForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->frameForTime(msec));
}

int  PythonQtWrapper_QTimeLine::loopCount(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

void PythonQtWrapper_QTimeLine::setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape)
{
  ( theWrappedObject->setCurveShape(shape));
}

void PythonQtWrapper_QTimeLine::setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

void PythonQtWrapper_QTimeLine::setDuration(QTimeLine* theWrappedObject, int  duration)
{
  ( theWrappedObject->setDuration(duration));
}

void PythonQtWrapper_QTimeLine::setEasingCurve(QTimeLine* theWrappedObject, const QEasingCurve&  curve)
{
  ( theWrappedObject->setEasingCurve(curve));
}

void PythonQtWrapper_QTimeLine::setEndFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setEndFrame(frame));
}

void PythonQtWrapper_QTimeLine::setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame)
{
  ( theWrappedObject->setFrameRange(startFrame, endFrame));
}

void PythonQtWrapper_QTimeLine::setLoopCount(QTimeLine* theWrappedObject, int  count)
{
  ( theWrappedObject->setLoopCount(count));
}

void PythonQtWrapper_QTimeLine::setStartFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setStartFrame(frame));
}

void PythonQtWrapper_QTimeLine::setUpdateInterval(QTimeLine* theWrappedObject, int  interval)
{
  ( theWrappedObject->setUpdateInterval(interval));
}

int  PythonQtWrapper_QTimeLine::startFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->startFrame());
}

QTimeLine::State  PythonQtWrapper_QTimeLine::state(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QTimeLine::timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_timerEvent(event));
}

int  PythonQtWrapper_QTimeLine::updateInterval(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->updateInterval());
}

qreal  PythonQtWrapper_QTimeLine::valueForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->valueForTime(msec));
}



PythonQtShell_QTimerEvent::~PythonQtShell_QTimerEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new PythonQtShell_QTimerEvent(timerId); }

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



PythonQtShell_QTranslator::~PythonQtShell_QTranslator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QTranslator::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QTranslator::isEmpty();
}
QString  PythonQtShell_QTranslator::translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, int  n3) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("translate");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const char*" , "const char*" , "const char*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue{};
      void* args[5] = {NULL, (void*)&context0, (void*)&sourceText1, (void*)&disambiguation2, (void*)&n3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("translate", methodInfo, result);
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
  return QTranslator::translate(context0, sourceText1, disambiguation2, n3);
}
QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new PythonQtShell_QTranslator(parent); }

const QMetaObject* PythonQtShell_QTranslator::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTranslator::staticMetaObject);
  } else {
    return &QTranslator::staticMetaObject;
  }
}
int PythonQtShell_QTranslator::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTranslator::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QTranslator::filePath(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTranslator::language(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix, const QString&  directory, const QString&  suffix)
{
  return ( theWrappedObject->load(locale, filename, prefix, directory, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
  return ( theWrappedObject->load(filename, directory, search_delimiters, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory)
{
  return ( theWrappedObject->load(data, len, directory));
}

QString  PythonQtWrapper_QTranslator::translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation, int  n) const
{
  return ( theWrappedObject->translate(context, sourceText, disambiguation, n));
}



QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery()
{ 
return new QUrlQuery(); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QString&  queryString)
{ 
return new QUrlQuery(queryString); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrl&  url)
{ 
return new QUrlQuery(url); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrlQuery&  other)
{ 
return new QUrlQuery(other); }

QUrlQuery*  PythonQtWrapper_QUrlQuery::operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}



PythonQtShell_QVariantAnimation::~PythonQtShell_QVariantAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QVariantAnimation::duration() const
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
  return QVariantAnimation::duration();
}
bool  PythonQtShell_QVariantAnimation::event(QEvent*  event0)
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
  return QVariantAnimation::event(event0);
}
QVariant  PythonQtShell_QVariantAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
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
  return QVariantAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QVariantAnimation::updateCurrentTime(int  arg__1)
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
  QVariantAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QVariantAnimation::updateCurrentValue(const QVariant&  value0)
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
  QVariantAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QVariantAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
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
  QVariantAnimation::updateDirection(direction0);
}
void PythonQtShell_QVariantAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
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
  QVariantAnimation::updateState(newState0, oldState1);
}
QVariantAnimation* PythonQtWrapper_QVariantAnimation::new_QVariantAnimation(QObject*  parent)
{ 
return new PythonQtShell_QVariantAnimation(parent); }

const QMetaObject* PythonQtShell_QVariantAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVariantAnimation::staticMetaObject);
  } else {
    return &QVariantAnimation::staticMetaObject;
  }
}
int PythonQtShell_QVariantAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVariantAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QVariantAnimation::currentValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QEasingCurve  PythonQtWrapper_QVariantAnimation::easingCurve(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

QVariant  PythonQtWrapper_QVariantAnimation::endValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->endValue());
}

QVariant  PythonQtWrapper_QVariantAnimation::interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_interpolated(from, to, progress));
}

QVariant  PythonQtWrapper_QVariantAnimation::keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->keyValueAt(step));
}

QVector<QPair<qreal , QVariant >  >  PythonQtWrapper_QVariantAnimation::keyValues(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->keyValues());
}

void PythonQtWrapper_QVariantAnimation::setDuration(QVariantAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QVariantAnimation::setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing)
{
  ( theWrappedObject->setEasingCurve(easing));
}

void PythonQtWrapper_QVariantAnimation::setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setEndValue(value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value)
{
  ( theWrappedObject->setKeyValueAt(step, value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values)
{
  ( theWrappedObject->setKeyValues(values));
}

void PythonQtWrapper_QVariantAnimation::setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setStartValue(value));
}

QVariant  PythonQtWrapper_QVariantAnimation::startValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->startValue());
}

void PythonQtWrapper_QVariantAnimation::updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}



void PythonQtWrapper_QWaitCondition::notify_all(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_all());
}

void PythonQtWrapper_QWaitCondition::notify_one(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_one());
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedMutex, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedMutex, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, time));
}

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {NULL, (void*)&publicId0, (void*)&systemId1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveUndeclaredEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->resolveUndeclaredEntity(name));
}


