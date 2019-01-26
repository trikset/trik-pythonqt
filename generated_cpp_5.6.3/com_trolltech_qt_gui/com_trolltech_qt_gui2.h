#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qtouchdevice.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>



class PythonQtWrapper_QTouchDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CapabilityFlag DeviceType )
Q_FLAGS(Capabilities )
enum CapabilityFlag{
  Position = QTouchDevice::Position,   Area = QTouchDevice::Area,   Pressure = QTouchDevice::Pressure,   Velocity = QTouchDevice::Velocity,   RawPositions = QTouchDevice::RawPositions,   NormalizedPosition = QTouchDevice::NormalizedPosition,   MouseEmulation = QTouchDevice::MouseEmulation};
enum DeviceType{
  TouchScreen = QTouchDevice::TouchScreen,   TouchPad = QTouchDevice::TouchPad};
Q_DECLARE_FLAGS(Capabilities, CapabilityFlag)
public slots:
QTouchDevice* new_QTouchDevice();
void delete_QTouchDevice(QTouchDevice* obj) { delete obj; } 
   QTouchDevice::Capabilities  capabilities(QTouchDevice* theWrappedObject) const;
   QList<const QTouchDevice* >  static_QTouchDevice_devices();
   int  maximumTouchPoints(QTouchDevice* theWrappedObject) const;
   QString  name(QTouchDevice* theWrappedObject) const;
   void setCapabilities(QTouchDevice* theWrappedObject, QTouchDevice::Capabilities  caps);
   void setMaximumTouchPoints(QTouchDevice* theWrappedObject, int  max);
   void setName(QTouchDevice* theWrappedObject, const QString&  name);
   void setType(QTouchDevice* theWrappedObject, QTouchDevice::DeviceType  devType);
   QTouchDevice::DeviceType  type(QTouchDevice* theWrappedObject) const;
    QString py_toString(QTouchDevice*);
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = NULL, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints),_wrapper(NULL) {};

   ~PythonQtShell_QTouchEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = NULL, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; } 
   QTouchDevice*  device(QTouchEvent* theWrappedObject) const;
   void setDevice(QTouchEvent* theWrappedObject, QTouchDevice*  adevice);
   void setTarget(QTouchEvent* theWrappedObject, QObject*  atarget);
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   void setWindow(QTouchEvent* theWrappedObject, QWindow*  awindow);
   QObject*  target(QTouchEvent* theWrappedObject) const;
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   QWindow*  window(QTouchEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTouchEvent__TouchPoint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InfoFlag )
Q_FLAGS(InfoFlags )
enum InfoFlag{
  Pen = QTouchEvent::TouchPoint::Pen};
Q_DECLARE_FLAGS(InfoFlags, InfoFlag)
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(int  id = -1);
void delete_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; } 
   QTouchEvent::TouchPoint::InfoFlags  flags(QTouchEvent::TouchPoint* theWrappedObject) const;
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   QVector<QPointF >  rawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setFlags(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint::InfoFlags  flags);
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setRawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject, const QVector<QPointF >&  positions);
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setVelocity(QTouchEvent::TouchPoint* theWrappedObject, const QVector2D&  v);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void swap(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint&  other);
   QVector2D  velocity(QTouchEvent::TouchPoint* theWrappedObject) const;
    QString py_toString(QTouchEvent::TouchPoint*);
};





class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h21, qreal  h22, qreal  dx, qreal  dy);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; } 
   QTransform  adjoint(QTransform* theWrappedObject) const;
   qreal  det(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   qreal  dx(QTransform* theWrappedObject) const;
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform  static_QTransform_fromScale(qreal  dx, qreal  dy);
   QTransform  static_QTransform_fromTranslate(qreal  dx, qreal  dy);
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = NULL) const;
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   bool  isRotating(QTransform* theWrappedObject) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   bool  isTranslating(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m21(QTransform* theWrappedObject) const;
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m23(QTransform* theWrappedObject) const;
   qreal  m31(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  __ne__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform  __mul__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __imul__(QTransform* theWrappedObject, const QTransform&  arg__1);
   QTransform*  __imul__(QTransform* theWrappedObject, qreal  div);
   QTransform  __add__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __iadd__(QTransform* theWrappedObject, qreal  div);
   QTransform  __sub__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __isub__(QTransform* theWrappedObject, qreal  div);
   QTransform  __div__(QTransform* theWrappedObject, qreal  n);
   QTransform*  __idiv__(QTransform* theWrappedObject, qreal  div);
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   void reset(QTransform* theWrappedObject);
   QTransform*  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform*  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   QTransform*  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   const QMatrix*  toAffine(QTransform* theWrappedObject) const;
   QTransform*  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   QTransform  transposed(QTransform* theWrappedObject) const;
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
    QString py_toString(QTransform*);
};





class PythonQtShell_QVBoxLayout : public QVBoxLayout
{
public:
    PythonQtShell_QVBoxLayout():QVBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QVBoxLayout(QWidget*  parent):QVBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  arg__1) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QLayoutItem*  takeAt(int  arg__1);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QVBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QVBoxLayout* new_QVBoxLayout();
QVBoxLayout* new_QVBoxLayout(QWidget*  parent);
void delete_QVBoxLayout(QVBoxLayout* obj) { delete obj; } 
    bool __nonzero__(QVBoxLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QVector2D : public QObject
{ Q_OBJECT
public:
public slots:
QVector2D* new_QVector2D();
QVector2D* new_QVector2D(const QPoint&  point);
QVector2D* new_QVector2D(const QPointF&  point);
QVector2D* new_QVector2D(const QVector3D&  vector);
QVector2D* new_QVector2D(const QVector4D&  vector);
QVector2D* new_QVector2D(float  xpos, float  ypos);
QVector2D* new_QVector2D(const QVector2D& other) {
QVector2D* a = new QVector2D();
*((QVector2D*)a) = other;
return a; }
void delete_QVector2D(QVector2D* obj) { delete obj; } 
   float  distanceToLine(QVector2D* theWrappedObject, const QVector2D&  point, const QVector2D&  direction) const;
   float  distanceToPoint(QVector2D* theWrappedObject, const QVector2D&  point) const;
   float  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   bool  isNull(QVector2D* theWrappedObject) const;
   float  length(QVector2D* theWrappedObject) const;
   float  lengthSquared(QVector2D* theWrappedObject) const;
   void normalize(QVector2D* theWrappedObject);
   QVector2D  normalized(QVector2D* theWrappedObject) const;
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, float  factor);
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __imul__(QVector2D* theWrappedObject, float  factor);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __div__(QVector2D* theWrappedObject, const QVector2D&  divisor);
   const QVector2D  __div__(QVector2D* theWrappedObject, float  divisor);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, float  divisor);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector2D* theWrappedObject, const QVector2D&  v2);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector2D* theWrappedObject, int  i) const;
   void setX(QVector2D* theWrappedObject, float  x);
   void setY(QVector2D* theWrappedObject, float  y);
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   QVector4D  toVector4D(QVector2D* theWrappedObject) const;
   float  x(QVector2D* theWrappedObject) const;
   float  y(QVector2D* theWrappedObject) const;
    QString py_toString(QVector2D*);
    bool __nonzero__(QVector2D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector3D : public QObject
{ Q_OBJECT
public:
public slots:
QVector3D* new_QVector3D();
QVector3D* new_QVector3D(const QPoint&  point);
QVector3D* new_QVector3D(const QPointF&  point);
QVector3D* new_QVector3D(const QVector2D&  vector);
QVector3D* new_QVector3D(const QVector2D&  vector, float  zpos);
QVector3D* new_QVector3D(const QVector4D&  vector);
QVector3D* new_QVector3D(float  xpos, float  ypos, float  zpos);
QVector3D* new_QVector3D(const QVector3D& other) {
QVector3D* a = new QVector3D();
*((QVector3D*)a) = other;
return a; }
void delete_QVector3D(QVector3D* obj) { delete obj; } 
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   float  distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const;
   float  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   float  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   float  distanceToPoint(QVector3D* theWrappedObject, const QVector3D&  point) const;
   float  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   bool  isNull(QVector3D* theWrappedObject) const;
   float  length(QVector3D* theWrappedObject) const;
   float  lengthSquared(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   void normalize(QVector3D* theWrappedObject);
   QVector3D  normalized(QVector3D* theWrappedObject) const;
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __mul__(QVector3D* theWrappedObject, float  factor);
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __imul__(QVector3D* theWrappedObject, float  factor);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __div__(QVector3D* theWrappedObject, const QVector3D&  divisor);
   const QVector3D  __div__(QVector3D* theWrappedObject, float  divisor);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, float  divisor);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector3D* theWrappedObject, const QVector3D&  v2);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector3D* theWrappedObject, int  i) const;
   QVector3D  project(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const;
   void setX(QVector3D* theWrappedObject, float  x);
   void setY(QVector3D* theWrappedObject, float  y);
   void setZ(QVector3D* theWrappedObject, float  z);
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   QPointF  toPointF(QVector3D* theWrappedObject) const;
   QVector2D  toVector2D(QVector3D* theWrappedObject) const;
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   QVector3D  unproject(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const;
   float  x(QVector3D* theWrappedObject) const;
   float  y(QVector3D* theWrappedObject) const;
   float  z(QVector3D* theWrappedObject) const;
    QString py_toString(QVector3D*);
    bool __nonzero__(QVector3D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector4D : public QObject
{ Q_OBJECT
public:
public slots:
QVector4D* new_QVector4D();
QVector4D* new_QVector4D(const QPoint&  point);
QVector4D* new_QVector4D(const QPointF&  point);
QVector4D* new_QVector4D(const QVector2D&  vector);
QVector4D* new_QVector4D(const QVector2D&  vector, float  zpos, float  wpos);
QVector4D* new_QVector4D(const QVector3D&  vector);
QVector4D* new_QVector4D(const QVector3D&  vector, float  wpos);
QVector4D* new_QVector4D(float  xpos, float  ypos, float  zpos, float  wpos);
QVector4D* new_QVector4D(const QVector4D& other) {
QVector4D* a = new QVector4D();
*((QVector4D*)a) = other;
return a; }
void delete_QVector4D(QVector4D* obj) { delete obj; } 
   float  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   bool  isNull(QVector4D* theWrappedObject) const;
   float  length(QVector4D* theWrappedObject) const;
   float  lengthSquared(QVector4D* theWrappedObject) const;
   void normalize(QVector4D* theWrappedObject);
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, float  factor);
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __imul__(QVector4D* theWrappedObject, float  factor);
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __div__(QVector4D* theWrappedObject, const QVector4D&  divisor);
   const QVector4D  __div__(QVector4D* theWrappedObject, float  divisor);
   QVector4D*  __idiv__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __idiv__(QVector4D* theWrappedObject, float  divisor);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector4D* theWrappedObject, const QVector4D&  v2);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector4D* theWrappedObject, int  i) const;
   void setW(QVector4D* theWrappedObject, float  w);
   void setX(QVector4D* theWrappedObject, float  x);
   void setY(QVector4D* theWrappedObject, float  y);
   void setZ(QVector4D* theWrappedObject, float  z);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   float  w(QVector4D* theWrappedObject) const;
   float  x(QVector4D* theWrappedObject) const;
   float  y(QVector4D* theWrappedObject) const;
   float  z(QVector4D* theWrappedObject) const;
    QString py_toString(QVector4D*);
    bool __nonzero__(QVector4D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};

   ~PythonQtShell_QWheelEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   QPoint  angleDelta(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   QPoint  globalPos(QWheelEvent* theWrappedObject) const;
   const QPointF*  globalPosF(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   Qt::ScrollPhase  phase(QWheelEvent* theWrappedObject) const;
   QPoint  pixelDelta(QWheelEvent* theWrappedObject) const;
   QPoint  pos(QWheelEvent* theWrappedObject) const;
   const QPointF*  posF(QWheelEvent* theWrappedObject) const;
   Qt::MouseEventSource  source(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags()):QWidget(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { this->actionEvent(event); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_destroy(bool  destroyWindow = true, bool  destroySubWindows = true) { this->destroy(destroyWindow, destroySubWindows); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline void promoted_enterEvent(QEvent*  event) { this->enterEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextChild() { return this->focusNextChild(); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline bool  promoted_focusPreviousChild() { return this->focusPreviousChild(); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_initPainter(QPainter*  painter) const { this->initPainter(painter); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_leaveEvent(QEvent*  event) { this->leaveEvent(event); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return this->metric(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_moveEvent(QMoveEvent*  event) { this->moveEvent(event); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return this->nativeEvent(eventType, message, result); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return this->redirected(offset); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline QPainter*  promoted_sharedPainter() const { return this->sharedPainter(); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void promoted_tabletEvent(QTabletEvent*  event) { this->tabletEvent(event); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_actionEvent(QActionEvent*  event) { QWidget::actionEvent(event); }
inline void py_q_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  event) { QWidget::closeEvent(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QWidget::contextMenuEvent(event); }
inline int  py_q_devType() const { return QWidget::devType(); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  event) { QWidget::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  event) { QWidget::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QWidget::dragMoveEvent(event); }
inline void py_q_dropEvent(QDropEvent*  event) { QWidget::dropEvent(event); }
inline void py_q_enterEvent(QEvent*  event) { QWidget::enterEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QWidget::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QWidget::focusOutEvent(event); }
inline bool  py_q_hasHeightForWidth() const { return QWidget::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void py_q_hideEvent(QHideEvent*  event) { QWidget::hideEvent(event); }
inline void py_q_initPainter(QPainter*  painter) const { QWidget::initPainter(painter); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QWidget::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QWidget::keyReleaseEvent(event); }
inline void py_q_leaveEvent(QEvent*  event) { QWidget::leaveEvent(event); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QWidget::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QWidget::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QWidget::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QWidget::mouseReleaseEvent(event); }
inline void py_q_moveEvent(QMoveEvent*  event) { QWidget::moveEvent(event); }
inline bool  py_q_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return QWidget::nativeEvent(eventType, message, result); }
inline QPaintEngine*  py_q_paintEngine() const { return QWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  event) { QWidget::paintEvent(event); }
inline QPaintDevice*  py_q_redirected(QPoint*  offset) const { return QWidget::redirected(offset); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QWidget::resizeEvent(event); }
inline void py_q_setVisible(bool  visible) { QWidget::setVisible(visible); }
inline QPainter*  py_q_sharedPainter() const { return QWidget::sharedPainter(); }
inline void py_q_showEvent(QShowEvent*  event) { QWidget::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QWidget::sizeHint(); }
inline void py_q_tabletEvent(QTabletEvent*  event) { QWidget::tabletEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QWidget::wheelEvent(event); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = NULL, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QWidget(QWidget* obj) { delete obj; } 
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  event);
   void py_q_actionEvent(QWidget* theWrappedObject, QActionEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_actionEvent(event));}
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QBackingStore*  backingStore(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void py_q_changeEvent(QWidget* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  event);
   void py_q_closeEvent(QWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_closeEvent(event));}
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  event);
   void py_q_contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_contextMenuEvent(event));}
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   QWidget*  static_QWidget_createWindowContainer(QWindow*  window, QWidget*  parent = NULL, Qt::WindowFlags  flags = Qt::WindowFlags());
   QCursor  cursor(QWidget* theWrappedObject) const;
   void destroy(QWidget* theWrappedObject, bool  destroyWindow = true, bool  destroySubWindows = true);
   int  py_q_devType(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_devType());}
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  event);
   void py_q_dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  event);
   void py_q_dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  event);
   void py_q_dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  event);
   void py_q_dropEvent(QWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dropEvent(event));}
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  event);
   void py_q_enterEvent(QWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_enterEvent(event));}
   bool  py_q_event(QWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_event(event));}
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  focusNextChild(QWidget* theWrappedObject);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   bool  py_q_focusNextPrevChild(QWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   bool  focusPreviousChild(QWidget* theWrappedObject);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   QFontInfo  fontInfo(QWidget* theWrappedObject) const;
   QFontMetrics  fontMetrics(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QSize  frameSize(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   QPixmap  grab(QWidget* theWrappedObject, const QRect&  rectangle = QRect(QPoint(0, 0), QSize(-1, -1)));
   void grabGesture(QWidget* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void grabKeyboard(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  hasHeightForWidth(QWidget* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_hasHeightForWidth());}
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QWidget* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  event);
   void py_q_hideEvent(QWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_initPainter(QWidget* theWrappedObject, QPainter*  painter) const{  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_initPainter(painter));}
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   void py_q_inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   QVariant  py_q_inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isFullScreen(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QWidget*  static_QWidget_keyboardGrabber();
   QLayout*  layout(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  event);
   void py_q_leaveEvent(QWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_leaveEvent(event));}
   QLocale  locale(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   int  py_q_metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_metric(arg__1));}
   int  minimumHeight(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_minimumSizeHint());}
   int  minimumWidth(QWidget* theWrappedObject) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   QWidget*  static_QWidget_mouseGrabber();
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  event);
   void py_q_moveEvent(QWidget* theWrappedObject, QMoveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_moveEvent(event));}
   bool  nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result);
   bool  py_q_nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_nativeEvent(eventType, message, result));}
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPaintEngine*  py_q_paintEngine(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_paintEngine());}
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  event);
   void py_q_paintEvent(QWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_paintEvent(event));}
   const QPalette*  palette(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   QPaintDevice*  py_q_redirected(QWidget* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_redirected(offset));}
   void releaseKeyboard(QWidget* theWrappedObject);
   void releaseMouse(QWidget* theWrappedObject);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  event);
   void py_q_resizeEvent(QWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   void setLayout(QWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent, Qt::WindowFlags  f);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setToolTipDuration(QWidget* theWrappedObject, int  msec);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void py_q_setVisible(QWidget* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_setVisible(visible));}
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPainter*  py_q_sharedPainter(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_sharedPainter());}
   void showEvent(QWidget* theWrappedObject, QShowEvent*  event);
   void py_q_showEvent(QWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSize  size(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_sizeHint());}
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QString  statusTip(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  event);
   void py_q_tabletEvent(QWidget* theWrappedObject, QTabletEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_tabletEvent(event));}
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   int  toolTipDuration(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   void ungrabGesture(QWidget* theWrappedObject, Qt::GestureType  type);
   void unsetCursor(QWidget* theWrappedObject);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void unsetLocale(QWidget* theWrappedObject);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void updateGeometry(QWidget* theWrappedObject);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   QString  whatsThis(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  event);
   void py_q_wheelEvent(QWidget* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_wheelEvent(event));}
   int  width(QWidget* theWrappedObject) const;
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   QWindow*  windowHandle(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QString  windowRole(QWidget* theWrappedObject) const;
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   int  x(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
    QString py_toString(QWidget*);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QWidgetItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QWidgetItem::geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  py_q_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QWidgetItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  py_q_widget() { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   QSizePolicy::ControlTypes  py_q_controlTypes(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  py_q_expandingDirections(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_hasHeightForWidth(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   bool  py_q_isEmpty(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_sizeHint());}
   QWidget*  py_q_widget(QWidgetItem* theWrappedObject){  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QWidgetItem* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride = false);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};


