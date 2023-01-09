#include "com_trolltech_qt_gui_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QMatrix>
#include <QStringList>
#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qtextformat.h>

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap()
{ 
return new QBitmap(); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QBitmap&  other)
{ 
return new QBitmap(other); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QPixmap&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QSize&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QString&  fileName, const char*  format)
{ 
return new QBitmap(fileName, format); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(int  w, int  h)
{ 
return new QBitmap(w, h); }

QBitmap*  PythonQtWrapper_QBitmap::operator_assign(QBitmap* theWrappedObject, const QBitmap&  other)
{
  return &( (*theWrappedObject)= other);
}



PythonQtShell_QImage::~PythonQtShell_QImage() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QImage::devType() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("devType");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
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
  return QImage::devType();
}
void PythonQtShell_QImage::initPainter(QPainter*  painter0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("initPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&painter0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QImage::initPainter(painter0);
}
int  PythonQtShell_QImage::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metric");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {NULL, (void*)&metric0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
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
  return QImage::metric(metric0);
}
QPaintEngine*  PythonQtShell_QImage::paintEngine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("paintEngine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintEngine*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
          } else {
            returnValue = *((QPaintEngine**)args[0]);
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
  return 0;
}
QPaintDevice*  PythonQtShell_QImage::redirected(QPoint*  offset0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("redirected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPaintDevice*" , "QPoint*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QPaintDevice* returnValue{};
      void* args[2] = {NULL, (void*)&offset0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("redirected", methodInfo, result);
          } else {
            returnValue = *((QPaintDevice**)args[0]);
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
  return QImage::redirected(offset0);
}
QPainter*  PythonQtShell_QImage::sharedPainter() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sharedPainter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QPainter*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPainter* returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sharedPainter", methodInfo, result);
          } else {
            returnValue = *((QPainter**)args[0]);
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
  return QImage::sharedPainter();
}
QImage* PythonQtWrapper_QImage::new_QImage(const QImage&  arg__1)
{ 
return new PythonQtShell_QImage(arg__1); }

QImage* PythonQtWrapper_QImage::new_QImage(const QSize&  size, QImage::Format  format)
{ 
return new PythonQtShell_QImage(size, format); }

QImage* PythonQtWrapper_QImage::new_QImage(const QString&  fileName, const char*  format)
{ 
return new PythonQtShell_QImage(fileName, format); }

QImage* PythonQtWrapper_QImage::new_QImage(int  width, int  height, QImage::Format  format)
{ 
return new PythonQtShell_QImage(width, height, format); }

void PythonQtWrapper_QImage::writeTo(QImage* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QImage::readFrom(QImage* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

unsigned int  PythonQtWrapper_QImage::pixel(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->pixel(pt));
}

QColor  PythonQtWrapper_QImage::pixelColor(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->pixelColor(pt));
}

int  PythonQtWrapper_QImage::pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->pixelIndex(pt));
}

void PythonQtWrapper_QImage::setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb)
{
  ( theWrappedObject->setPixel(pt, index_or_rgb));
}

void PythonQtWrapper_QImage::setPixelColor(QImage* theWrappedObject, const QPoint&  pt, const QColor&  c)
{
  ( theWrappedObject->setPixelColor(pt, c));
}

bool  PythonQtWrapper_QImage::valid(QImage* theWrappedObject, const QPoint&  pt) const
{
  return ( theWrappedObject->valid(pt));
}

QString PythonQtWrapper_QImage::py_toString(QImage* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat()
{ 
return new QTextFormat(); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(const QTextFormat&  rhs)
{ 
return new QTextFormat(rhs); }

QTextFormat* PythonQtWrapper_QTextFormat::new_QTextFormat(int  type)
{ 
return new QTextFormat(type); }

QBrush  PythonQtWrapper_QTextFormat::background(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->background());
}

bool  PythonQtWrapper_QTextFormat::boolProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->boolProperty(propertyId));
}

QBrush  PythonQtWrapper_QTextFormat::brushProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->brushProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::clearBackground(QTextFormat* theWrappedObject)
{
  ( theWrappedObject->clearBackground());
}

void PythonQtWrapper_QTextFormat::clearForeground(QTextFormat* theWrappedObject)
{
  ( theWrappedObject->clearForeground());
}

void PythonQtWrapper_QTextFormat::clearProperty(QTextFormat* theWrappedObject, int  propertyId)
{
  ( theWrappedObject->clearProperty(propertyId));
}

QColor  PythonQtWrapper_QTextFormat::colorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->colorProperty(propertyId));
}

qreal  PythonQtWrapper_QTextFormat::doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->doubleProperty(propertyId));
}

QBrush  PythonQtWrapper_QTextFormat::foreground(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->foreground());
}

bool  PythonQtWrapper_QTextFormat::hasProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->hasProperty(propertyId));
}

int  PythonQtWrapper_QTextFormat::intProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->intProperty(propertyId));
}

bool  PythonQtWrapper_QTextFormat::isBlockFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isBlockFormat());
}

bool  PythonQtWrapper_QTextFormat::isCharFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isCharFormat());
}

bool  PythonQtWrapper_QTextFormat::isEmpty(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QTextFormat::isFrameFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isFrameFormat());
}

bool  PythonQtWrapper_QTextFormat::isImageFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isImageFormat());
}

bool  PythonQtWrapper_QTextFormat::isListFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isListFormat());
}

bool  PythonQtWrapper_QTextFormat::isTableCellFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isTableCellFormat());
}

bool  PythonQtWrapper_QTextFormat::isTableFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isTableFormat());
}

bool  PythonQtWrapper_QTextFormat::isValid(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

Qt::LayoutDirection  PythonQtWrapper_QTextFormat::layoutDirection(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->layoutDirection());
}

QTextLength  PythonQtWrapper_QTextFormat::lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->lengthProperty(propertyId));
}

QVector<QTextLength >  PythonQtWrapper_QTextFormat::lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->lengthVectorProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::merge(QTextFormat* theWrappedObject, const QTextFormat&  other)
{
  ( theWrappedObject->merge(other));
}

int  PythonQtWrapper_QTextFormat::objectIndex(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->objectIndex());
}

int  PythonQtWrapper_QTextFormat::objectType(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->objectType());
}

bool  PythonQtWrapper_QTextFormat::__ne__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const
{
  return ( (*theWrappedObject)!= rhs);
}

void PythonQtWrapper_QTextFormat::writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTextFormat::__eq__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QTextFormat::readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPen  PythonQtWrapper_QTextFormat::penProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->penProperty(propertyId));
}

QMap<int , QVariant >  PythonQtWrapper_QTextFormat::properties(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->properties());
}

QVariant  PythonQtWrapper_QTextFormat::property(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->property(propertyId));
}

int  PythonQtWrapper_QTextFormat::propertyCount(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->propertyCount());
}

void PythonQtWrapper_QTextFormat::setBackground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBackground(brush));
}

void PythonQtWrapper_QTextFormat::setForeground(QTextFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setForeground(brush));
}

void PythonQtWrapper_QTextFormat::setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction)
{
  ( theWrappedObject->setLayoutDirection(direction));
}

void PythonQtWrapper_QTextFormat::setObjectIndex(QTextFormat* theWrappedObject, int  object)
{
  ( theWrappedObject->setObjectIndex(object));
}

void PythonQtWrapper_QTextFormat::setObjectType(QTextFormat* theWrappedObject, int  type)
{
  ( theWrappedObject->setObjectType(type));
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value)
{
  ( theWrappedObject->setProperty(propertyId, value));
}

void PythonQtWrapper_QTextFormat::setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths)
{
  ( theWrappedObject->setProperty(propertyId, lengths));
}

QString  PythonQtWrapper_QTextFormat::stringProperty(QTextFormat* theWrappedObject, int  propertyId) const
{
  return ( theWrappedObject->stringProperty(propertyId));
}

void PythonQtWrapper_QTextFormat::swap(QTextFormat* theWrappedObject, QTextFormat&  other)
{
  ( theWrappedObject->swap(other));
}

QTextBlockFormat  PythonQtWrapper_QTextFormat::toBlockFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toBlockFormat());
}

QTextCharFormat  PythonQtWrapper_QTextFormat::toCharFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toCharFormat());
}

QTextFrameFormat  PythonQtWrapper_QTextFormat::toFrameFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toFrameFormat());
}

QTextImageFormat  PythonQtWrapper_QTextFormat::toImageFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toImageFormat());
}

QTextListFormat  PythonQtWrapper_QTextFormat::toListFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toListFormat());
}

QTextTableCellFormat  PythonQtWrapper_QTextFormat::toTableCellFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toTableCellFormat());
}

QTextTableFormat  PythonQtWrapper_QTextFormat::toTableFormat(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->toTableFormat());
}

int  PythonQtWrapper_QTextFormat::type(QTextFormat* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QTextFormat::py_toString(QTextFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextLength* PythonQtWrapper_QTextLength::new_QTextLength()
{ 
return new QTextLength(); }

QTextLength* PythonQtWrapper_QTextLength::new_QTextLength(QTextLength::Type  type, qreal  value)
{ 
return new QTextLength(type, value); }

bool  PythonQtWrapper_QTextLength::__ne__(QTextLength* theWrappedObject, const QTextLength&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QTextLength::writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTextLength::__eq__(QTextLength* theWrappedObject, const QTextLength&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QTextLength::readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QTextLength::rawValue(QTextLength* theWrappedObject) const
{
  return ( theWrappedObject->rawValue());
}

QTextLength::Type  PythonQtWrapper_QTextLength::type(QTextLength* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

qreal  PythonQtWrapper_QTextLength::value(QTextLength* theWrappedObject, qreal  maximumLength) const
{
  return ( theWrappedObject->value(maximumLength));
}

QString PythonQtWrapper_QTextLength::py_toString(QTextLength* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


