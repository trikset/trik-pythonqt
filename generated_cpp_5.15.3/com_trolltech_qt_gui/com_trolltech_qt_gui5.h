#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractbutton.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qcheckbox.h>
#include <qcoreevent.h>
#include <qdialog.h>
#include <qevent.h>
#include <qfontinfo.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qline.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmessagebox.h>
#include <qmouseeventtransition.h>
#include <qmovie.h>
#include <qoffscreensurface.h>
#include <qopenglbuffer.h>
#include <qopenglcontext.h>
#include <qopenglframebufferobject.h>
#include <qopenglpaintdevice.h>
#include <qopenglshaderprogram.h>
#include <qopengltexture.h>
#include <qopengltextureblitter.h>
#include <qopengltimerquery.h>
#include <qopenglvertexarrayobject.h>
#include <qopenglwidget.h>
#include <qopenglwindow.h>
#include <qpagedpaintdevice.h>
#include <qpagesetupdialog.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qprinter.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstyle.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qtouchdevice.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = nullptr):QMessageBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMessageBox();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
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
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline bool  py_q_event(QEvent*  e) { return QMessageBox::event(e); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonRole{
  InvalidRole = QMessageBox::InvalidRole,   AcceptRole = QMessageBox::AcceptRole,   RejectRole = QMessageBox::RejectRole,   DestructiveRole = QMessageBox::DestructiveRole,   ActionRole = QMessageBox::ActionRole,   HelpRole = QMessageBox::HelpRole,   YesRole = QMessageBox::YesRole,   NoRole = QMessageBox::NoRole,   ResetRole = QMessageBox::ResetRole,   ApplyRole = QMessageBox::ApplyRole,   NRoles = QMessageBox::NRoles};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = nullptr);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void py_q_changeEvent(QMessageBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_changeEvent(event));}
   QCheckBox*  checkBox(QMessageBox* theWrappedObject) const;
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void py_q_closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_closeEvent(event));}
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   bool  py_q_event(QMessageBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_event(e));}
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QString  informativeText(QMessageBox* theWrappedObject) const;
   void py_q_keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_keyPressEvent(event));}
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::StandardButtons(Yes | No), QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void py_q_resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setCheckBox(QMessageBox* theWrappedObject, QCheckBox*  cb);
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   void setTextInteractionFlags(QMessageBox* theWrappedObject, Qt::TextInteractionFlags  flags);
   void py_q_showEvent(QMessageBox* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_showEvent(event));}
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   QString  text(QMessageBox* theWrappedObject) const;
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, screenPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source):QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers, source),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QMouseEvent* theWrappedObject) const;
   Qt::MouseEventFlags  flags(QMouseEvent* theWrappedObject) const;
   QPoint  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   const QPointF*  localPos(QMouseEvent* theWrappedObject) const;
   QPoint  pos(QMouseEvent* theWrappedObject) const;
   const QPointF*  screenPos(QMouseEvent* theWrappedObject) const;
   void setLocalPos(QMouseEvent* theWrappedObject, const QPointF&  localPosition);
   Qt::MouseEventSource  source(QMouseEvent* theWrappedObject) const;
   const QPointF*  windowPos(QMouseEvent* theWrappedObject) const;
   int  x(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMouseEventTransition : public QMouseEventTransition
{
public:
    PythonQtShell_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = nullptr):QMouseEventTransition(object, type, button, sourceState),_wrapper(NULL) {};
    PythonQtShell_QMouseEventTransition(QState*  sourceState = nullptr):QMouseEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEventTransition();

virtual bool  event(QEvent*  e);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMouseEventTransition : public QMouseEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_eventTest(QEvent*  event) { return QMouseEventTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QMouseEventTransition::onTransition(event); }
};

class PythonQtWrapper_QMouseEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEventTransition* new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = nullptr);
QMouseEventTransition* new_QMouseEventTransition(QState*  sourceState = nullptr);
void delete_QMouseEventTransition(QMouseEventTransition* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEventTransition* theWrappedObject) const;
   bool  py_q_eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->py_q_eventTest(event));}
   QPainterPath  hitTestPath(QMouseEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QMouseEventTransition* theWrappedObject) const;
   void py_q_onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->py_q_onTransition(event));}
   void setButton(QMouseEventTransition* theWrappedObject, Qt::MouseButton  button);
   void setHitTestPath(QMouseEventTransition* theWrappedObject, const QPainterPath&  path);
   void setModifierMask(QMouseEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};





class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(NULL) {};

   ~PythonQtShell_QMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; } 
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = nullptr):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(fileName, format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMovie();


  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
QMovie* new_QMovie(QObject*  parent = nullptr);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
void delete_QMovie(QMovie* obj) { delete obj; } 
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   QImage  currentImage(QMovie* theWrappedObject) const;
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QIODevice*  device(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   int  frameCount(QMovie* theWrappedObject) const;
   QRect  frameRect(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   QImageReader::ImageReaderError  lastError(QMovie* theWrappedObject) const;
   QString  lastErrorString(QMovie* theWrappedObject) const;
   int  loopCount(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   QSize  scaledSize(QMovie* theWrappedObject);
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  speed(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QList<QByteArray >  static_QMovie_supportedFormats();
    bool __nonzero__(QMovie* obj) { return obj->isValid(); }
};





class PythonQtShell_QNativeGestureEvent : public QNativeGestureEvent
{
public:
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument):QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument),_wrapper(NULL) {};
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QTouchDevice*  dev, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument):QNativeGestureEvent(type, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument),_wrapper(NULL) {};

   ~PythonQtShell_QNativeGestureEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNativeGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument);
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QTouchDevice*  dev, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument);
void delete_QNativeGestureEvent(QNativeGestureEvent* obj) { delete obj; } 
   const QTouchDevice*  device(QNativeGestureEvent* theWrappedObject) const;
   Qt::NativeGestureType  gestureType(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  globalPos(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  localPos(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  pos(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  screenPos(QNativeGestureEvent* theWrappedObject) const;
   qreal  value(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  windowPos(QNativeGestureEvent* theWrappedObject) const;
};





class PythonQtShell_QOffscreenSurface : public QOffscreenSurface
{
public:
    PythonQtShell_QOffscreenSurface():QOffscreenSurface(),_wrapper(NULL) {};

   ~PythonQtShell_QOffscreenSurface();

virtual QSurfaceFormat  format() const;
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOffscreenSurface : public QOffscreenSurface
{ public:
inline QSurfaceFormat  py_q_format() const { return QOffscreenSurface::format(); }
inline QSize  py_q_size() const { return QOffscreenSurface::size(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return QOffscreenSurface::surfaceType(); }
};

class PythonQtWrapper_QOffscreenSurface : public QObject
{ Q_OBJECT
public:
public slots:
QOffscreenSurface* new_QOffscreenSurface();
void delete_QOffscreenSurface(QOffscreenSurface* obj) { delete obj; } 
   void create(QOffscreenSurface* theWrappedObject);
   void destroy(QOffscreenSurface* theWrappedObject);
   QSurfaceFormat  format(QOffscreenSurface* theWrappedObject) const;
   QSurfaceFormat  py_q_format(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_format());}
   bool  isValid(QOffscreenSurface* theWrappedObject) const;
   void*  nativeHandle(QOffscreenSurface* theWrappedObject) const;
   QSurfaceFormat  requestedFormat(QOffscreenSurface* theWrappedObject) const;
   void setFormat(QOffscreenSurface* theWrappedObject, const QSurfaceFormat&  format);
   void setNativeHandle(QOffscreenSurface* theWrappedObject, void*  handle);
   QSize  size(QOffscreenSurface* theWrappedObject) const;
   QSize  py_q_size(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_size());}
   QSurface::SurfaceType  surfaceType(QOffscreenSurface* theWrappedObject) const;
   QSurface::SurfaceType  py_q_surfaceType(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_surfaceType());}
    bool __nonzero__(QOffscreenSurface* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access RangeAccessFlag Type UsagePattern )
enum Access{
  ReadOnly = QOpenGLBuffer::ReadOnly,   WriteOnly = QOpenGLBuffer::WriteOnly,   ReadWrite = QOpenGLBuffer::ReadWrite};
enum RangeAccessFlag{
  RangeRead = QOpenGLBuffer::RangeRead,   RangeWrite = QOpenGLBuffer::RangeWrite,   RangeInvalidate = QOpenGLBuffer::RangeInvalidate,   RangeInvalidateBuffer = QOpenGLBuffer::RangeInvalidateBuffer,   RangeFlushExplicit = QOpenGLBuffer::RangeFlushExplicit,   RangeUnsynchronized = QOpenGLBuffer::RangeUnsynchronized};
enum Type{
  VertexBuffer = QOpenGLBuffer::VertexBuffer,   IndexBuffer = QOpenGLBuffer::IndexBuffer,   PixelPackBuffer = QOpenGLBuffer::PixelPackBuffer,   PixelUnpackBuffer = QOpenGLBuffer::PixelUnpackBuffer};
enum UsagePattern{
  StreamDraw = QOpenGLBuffer::StreamDraw,   StreamRead = QOpenGLBuffer::StreamRead,   StreamCopy = QOpenGLBuffer::StreamCopy,   StaticDraw = QOpenGLBuffer::StaticDraw,   StaticRead = QOpenGLBuffer::StaticRead,   StaticCopy = QOpenGLBuffer::StaticCopy,   DynamicDraw = QOpenGLBuffer::DynamicDraw,   DynamicRead = QOpenGLBuffer::DynamicRead,   DynamicCopy = QOpenGLBuffer::DynamicCopy};
public slots:
QOpenGLBuffer* new_QOpenGLBuffer();
QOpenGLBuffer* new_QOpenGLBuffer(QOpenGLBuffer::Type  type);
QOpenGLBuffer* new_QOpenGLBuffer(const QOpenGLBuffer&  other);
void delete_QOpenGLBuffer(QOpenGLBuffer* obj) { delete obj; } 
   void allocate(QOpenGLBuffer* theWrappedObject, const void*  data, int  count);
   void allocate(QOpenGLBuffer* theWrappedObject, int  count);
   bool  bind(QOpenGLBuffer* theWrappedObject);
   GLuint  bufferId(QOpenGLBuffer* theWrappedObject) const;
   bool  create(QOpenGLBuffer* theWrappedObject);
   void destroy(QOpenGLBuffer* theWrappedObject);
   bool  isCreated(QOpenGLBuffer* theWrappedObject) const;
   void*  map(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::Access  access);
   QOpenGLBuffer*  operator_assign(QOpenGLBuffer* theWrappedObject, const QOpenGLBuffer&  other);
   bool  read(QOpenGLBuffer* theWrappedObject, int  offset, void*  data, int  count);
   void release(QOpenGLBuffer* theWrappedObject);
   void static_QOpenGLBuffer_release(QOpenGLBuffer::Type  type);
   void setUsagePattern(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::UsagePattern  value);
   int  size(QOpenGLBuffer* theWrappedObject) const;
   QOpenGLBuffer::Type  type(QOpenGLBuffer* theWrappedObject) const;
   bool  unmap(QOpenGLBuffer* theWrappedObject);
   QOpenGLBuffer::UsagePattern  usagePattern(QOpenGLBuffer* theWrappedObject) const;
   void write(QOpenGLBuffer* theWrappedObject, int  offset, const void*  data, int  count);
};





class PythonQtShell_QOpenGLContext : public QOpenGLContext
{
public:
    PythonQtShell_QOpenGLContext(QObject*  parent = nullptr):QOpenGLContext(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLContext();


  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLModuleType )
enum OpenGLModuleType{
  LibGL = QOpenGLContext::LibGL,   LibGLES = QOpenGLContext::LibGLES};
public slots:
QOpenGLContext* new_QOpenGLContext(QObject*  parent = nullptr);
void delete_QOpenGLContext(QOpenGLContext* obj) { delete obj; } 
   bool  static_QOpenGLContext_areSharing(QOpenGLContext*  first, QOpenGLContext*  second);
   bool  create(QOpenGLContext* theWrappedObject);
   QOpenGLContext*  static_QOpenGLContext_currentContext();
   GLuint  defaultFramebufferObject(QOpenGLContext* theWrappedObject) const;
   void doneCurrent(QOpenGLContext* theWrappedObject);
   QSet<QByteArray >  extensions(QOpenGLContext* theWrappedObject) const;
   QSurfaceFormat  format(QOpenGLContext* theWrappedObject) const;
   QOpenGLFunctions*  functions(QOpenGLContext* theWrappedObject) const;
   QOpenGLContext*  static_QOpenGLContext_globalShareContext();
   bool  hasExtension(QOpenGLContext* theWrappedObject, const QByteArray&  extension) const;
   bool  isOpenGLES(QOpenGLContext* theWrappedObject) const;
   bool  isValid(QOpenGLContext* theWrappedObject) const;
   bool  makeCurrent(QOpenGLContext* theWrappedObject, QSurface*  surface);
   QVariant  nativeHandle(QOpenGLContext* theWrappedObject) const;
   void*  static_QOpenGLContext_openGLModuleHandle();
   QOpenGLContext::OpenGLModuleType  static_QOpenGLContext_openGLModuleType();
   void setFormat(QOpenGLContext* theWrappedObject, const QSurfaceFormat&  format);
   void setNativeHandle(QOpenGLContext* theWrappedObject, const QVariant&  handle);
   void setShareContext(QOpenGLContext* theWrappedObject, QOpenGLContext*  shareContext);
   QOpenGLContext*  shareContext(QOpenGLContext* theWrappedObject) const;
   QOpenGLContextGroup*  shareGroup(QOpenGLContext* theWrappedObject) const;
   bool  static_QOpenGLContext_supportsThreadedOpenGL();
   QSurface*  surface(QOpenGLContext* theWrappedObject) const;
   void swapBuffers(QOpenGLContext* theWrappedObject, QSurface*  surface);
    QString py_toString(QOpenGLContext*);
    bool __nonzero__(QOpenGLContext* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLContextGroup : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLContextGroup(QOpenGLContextGroup* obj) { delete obj; } 
   QOpenGLContextGroup*  static_QOpenGLContextGroup_currentContextGroup();
   QList<QOpenGLContext* >  shares(QOpenGLContextGroup* theWrappedObject) const;
    QString py_toString(QOpenGLContextGroup*);
};





class PythonQtShell_QOpenGLFramebufferObject : public QOpenGLFramebufferObject
{
public:
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(size, attachment, target, internalFormat),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(width, height, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(width, height, attachment, target, internalFormat),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(width, height, format),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLFramebufferObject();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment FramebufferRestorePolicy )
enum Attachment{
  NoAttachment = QOpenGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QOpenGLFramebufferObject::CombinedDepthStencil,   Depth = QOpenGLFramebufferObject::Depth};
enum FramebufferRestorePolicy{
  DontRestoreFramebufferBinding = QOpenGLFramebufferObject::DontRestoreFramebufferBinding,   RestoreFramebufferBindingToDefault = QOpenGLFramebufferObject::RestoreFramebufferBindingToDefault,   RestoreFrameBufferBinding = QOpenGLFramebufferObject::RestoreFrameBufferBinding};
public slots:
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format);
void delete_QOpenGLFramebufferObject(QOpenGLFramebufferObject* obj) { delete obj; } 
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, const QSize&  size, GLenum  internalFormat = 0);
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, int  width, int  height, GLenum  internalFormat = 0);
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  bind(QOpenGLFramebufferObject* theWrappedObject);
   bool  static_QOpenGLFramebufferObject_bindDefault();
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, QOpenGLFramebufferObject*  source, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex, QOpenGLFramebufferObject::FramebufferRestorePolicy  restorePolicy);
   QOpenGLFramebufferObjectFormat  format(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  handle(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit();
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects();
   int  height(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isBound(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  release(QOpenGLFramebufferObject* theWrappedObject);
   void setAttachment(QOpenGLFramebufferObject* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   QSize  size(QOpenGLFramebufferObject* theWrappedObject) const;
   QVector<QSize >  sizes(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject);
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject, int  colorAttachmentIndex);
   GLuint  texture(QOpenGLFramebufferObject* theWrappedObject) const;
   QVector<GLuint >  textures(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped, int  colorAttachmentIndex) const;
   int  width(QOpenGLFramebufferObject* theWrappedObject) const;
    bool __nonzero__(QOpenGLFramebufferObject* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat();
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat&  other);
void delete_QOpenGLFramebufferObjectFormat(QOpenGLFramebufferObjectFormat* obj) { delete obj; } 
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   GLenum  internalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  mipmap(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __ne__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   QOpenGLFramebufferObjectFormat*  operator_assign(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other);
   bool  __eq__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   int  samples(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   void setAttachment(QOpenGLFramebufferObjectFormat* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   void setInternalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat);
   void setMipmap(QOpenGLFramebufferObjectFormat* theWrappedObject, bool  enabled);
   void setSamples(QOpenGLFramebufferObjectFormat* theWrappedObject, int  samples);
   void setTextureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  target);
   GLenum  textureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
};





class PythonQtShell_QOpenGLPaintDevice : public QOpenGLPaintDevice
{
public:
    PythonQtShell_QOpenGLPaintDevice():QOpenGLPaintDevice(),_wrapper(NULL) {};
    PythonQtShell_QOpenGLPaintDevice(const QSize&  size):QOpenGLPaintDevice(size),_wrapper(NULL) {};
    PythonQtShell_QOpenGLPaintDevice(int  width, int  height):QOpenGLPaintDevice(width, height),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLPaintDevice();

virtual int  devType() const;
virtual void ensureActiveTarget();
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLPaintDevice : public QOpenGLPaintDevice
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline int  py_q_devType() const { return QOpenGLPaintDevice::devType(); }
inline void py_q_ensureActiveTarget() { QOpenGLPaintDevice::ensureActiveTarget(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLPaintDevice::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLPaintDevice::paintEngine(); }
};

class PythonQtWrapper_QOpenGLPaintDevice : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLPaintDevice* new_QOpenGLPaintDevice();
QOpenGLPaintDevice* new_QOpenGLPaintDevice(const QSize&  size);
QOpenGLPaintDevice* new_QOpenGLPaintDevice(int  width, int  height);
void delete_QOpenGLPaintDevice(QOpenGLPaintDevice* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLPaintDevice* theWrappedObject) const;
   int  py_q_devType(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_devType());}
   qreal  dotsPerMeterX(QOpenGLPaintDevice* theWrappedObject) const;
   qreal  dotsPerMeterY(QOpenGLPaintDevice* theWrappedObject) const;
   void ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject);
   void py_q_ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_ensureActiveTarget());}
   int  py_q_metric(QOpenGLPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintFlipped(QOpenGLPaintDevice* theWrappedObject) const;
   void setDevicePixelRatio(QOpenGLPaintDevice* theWrappedObject, qreal  devicePixelRatio);
   void setDotsPerMeterX(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setDotsPerMeterY(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setPaintFlipped(QOpenGLPaintDevice* theWrappedObject, bool  flipped);
   void setSize(QOpenGLPaintDevice* theWrappedObject, const QSize&  size);
   QSize  size(QOpenGLPaintDevice* theWrappedObject) const;
};





class PythonQtWrapper_QOpenGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QOpenGLShader::Vertex,   Fragment = QOpenGLShader::Fragment,   Geometry = QOpenGLShader::Geometry,   TessellationControl = QOpenGLShader::TessellationControl,   TessellationEvaluation = QOpenGLShader::TessellationEvaluation,   Compute = QOpenGLShader::Compute};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public slots:
void delete_QOpenGLShader(QOpenGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QByteArray&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const char*  source);
   bool  compileSourceFile(QOpenGLShader* theWrappedObject, const QString&  fileName);
   bool  static_QOpenGLShader_hasOpenGLShaders(QOpenGLShader::ShaderType  type, QOpenGLContext*  context = nullptr);
   bool  isCompiled(QOpenGLShader* theWrappedObject) const;
   QString  log(QOpenGLShader* theWrappedObject) const;
   GLuint  shaderId(QOpenGLShader* theWrappedObject) const;
   QOpenGLShader::ShaderType  shaderType(QOpenGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QOpenGLShader* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShaderProgram : public QOpenGLShaderProgram
{
public:
    PythonQtShell_QOpenGLShaderProgram(QObject*  parent = nullptr):QOpenGLShaderProgram(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLShaderProgram();

virtual bool  link();

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLShaderProgram : public QOpenGLShaderProgram
{ public:
inline bool  py_q_link() { return QOpenGLShaderProgram::link(); }
};

class PythonQtWrapper_QOpenGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLShaderProgram* new_QOpenGLShaderProgram(QObject*  parent = nullptr);
void delete_QOpenGLShaderProgram(QOpenGLShaderProgram* obj) { delete obj; } 
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addCacheableShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   bool  addShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
   bool  bind(QOpenGLShaderProgram* theWrappedObject);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name, int  location);
   bool  create(QOpenGLShaderProgram* theWrappedObject);
   QVector<float >  defaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   QVector<float >  defaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   bool  static_QOpenGLShaderProgram_hasOpenGLShaderPrograms(QOpenGLContext*  context = nullptr);
   bool  isLinked(QOpenGLShaderProgram* theWrappedObject) const;
   bool  link(QOpenGLShaderProgram* theWrappedObject);
   bool  py_q_link(QOpenGLShaderProgram* theWrappedObject){  return (((PythonQtPublicPromoter_QOpenGLShaderProgram*)theWrappedObject)->py_q_link());}
   QString  log(QOpenGLShaderProgram* theWrappedObject) const;
   int  maxGeometryOutputVertices(QOpenGLShaderProgram* theWrappedObject) const;
   int  patchVertexCount(QOpenGLShaderProgram* theWrappedObject) const;
   GLuint  programId(QOpenGLShaderProgram* theWrappedObject) const;
   void release(QOpenGLShaderProgram* theWrappedObject);
   void removeAllShaders(QOpenGLShaderProgram* theWrappedObject);
   void removeShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setDefaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QVector<float >&  levels);
   void setDefaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QVector<float >&  levels);
   void setPatchVertexCount(QOpenGLShaderProgram* theWrappedObject, int  count);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   QList<QOpenGLShader* >  shaders(QOpenGLShaderProgram* theWrappedObject) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
};





class PythonQtWrapper_QOpenGLTexture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindingTarget ComparisonFunction ComparisonMode CoordinateDirection CubeMapFace DepthStencilMode Feature Filter MipMapGeneration PixelFormat PixelType SwizzleComponent SwizzleValue Target TextureFormat TextureFormatClass TextureUnitReset WrapMode )
Q_FLAGS(Features )
enum BindingTarget{
  BindingTarget1D = QOpenGLTexture::BindingTarget1D,   BindingTarget1DArray = QOpenGLTexture::BindingTarget1DArray,   BindingTarget2D = QOpenGLTexture::BindingTarget2D,   BindingTarget2DArray = QOpenGLTexture::BindingTarget2DArray,   BindingTarget3D = QOpenGLTexture::BindingTarget3D,   BindingTargetCubeMap = QOpenGLTexture::BindingTargetCubeMap,   BindingTargetCubeMapArray = QOpenGLTexture::BindingTargetCubeMapArray,   BindingTarget2DMultisample = QOpenGLTexture::BindingTarget2DMultisample,   BindingTarget2DMultisampleArray = QOpenGLTexture::BindingTarget2DMultisampleArray,   BindingTargetRectangle = QOpenGLTexture::BindingTargetRectangle,   BindingTargetBuffer = QOpenGLTexture::BindingTargetBuffer};
enum ComparisonFunction{
  CompareLessEqual = QOpenGLTexture::CompareLessEqual,   CompareGreaterEqual = QOpenGLTexture::CompareGreaterEqual,   CompareLess = QOpenGLTexture::CompareLess,   CompareGreater = QOpenGLTexture::CompareGreater,   CompareEqual = QOpenGLTexture::CompareEqual,   CommpareNotEqual = QOpenGLTexture::CommpareNotEqual,   CompareAlways = QOpenGLTexture::CompareAlways,   CompareNever = QOpenGLTexture::CompareNever};
enum ComparisonMode{
  CompareRefToTexture = QOpenGLTexture::CompareRefToTexture,   CompareNone = QOpenGLTexture::CompareNone};
enum CoordinateDirection{
  DirectionS = QOpenGLTexture::DirectionS,   DirectionT = QOpenGLTexture::DirectionT,   DirectionR = QOpenGLTexture::DirectionR};
enum CubeMapFace{
  CubeMapPositiveX = QOpenGLTexture::CubeMapPositiveX,   CubeMapNegativeX = QOpenGLTexture::CubeMapNegativeX,   CubeMapPositiveY = QOpenGLTexture::CubeMapPositiveY,   CubeMapNegativeY = QOpenGLTexture::CubeMapNegativeY,   CubeMapPositiveZ = QOpenGLTexture::CubeMapPositiveZ,   CubeMapNegativeZ = QOpenGLTexture::CubeMapNegativeZ};
enum DepthStencilMode{
  DepthMode = QOpenGLTexture::DepthMode,   StencilMode = QOpenGLTexture::StencilMode};
enum Feature{
  ImmutableStorage = QOpenGLTexture::ImmutableStorage,   ImmutableMultisampleStorage = QOpenGLTexture::ImmutableMultisampleStorage,   TextureRectangle = QOpenGLTexture::TextureRectangle,   TextureArrays = QOpenGLTexture::TextureArrays,   Texture3D = QOpenGLTexture::Texture3D,   TextureMultisample = QOpenGLTexture::TextureMultisample,   TextureBuffer = QOpenGLTexture::TextureBuffer,   TextureCubeMapArrays = QOpenGLTexture::TextureCubeMapArrays,   Swizzle = QOpenGLTexture::Swizzle,   StencilTexturing = QOpenGLTexture::StencilTexturing,   AnisotropicFiltering = QOpenGLTexture::AnisotropicFiltering,   NPOTTextures = QOpenGLTexture::NPOTTextures,   NPOTTextureRepeat = QOpenGLTexture::NPOTTextureRepeat,   Texture1D = QOpenGLTexture::Texture1D,   TextureComparisonOperators = QOpenGLTexture::TextureComparisonOperators,   TextureMipMapLevel = QOpenGLTexture::TextureMipMapLevel,   MaxFeatureFlag = QOpenGLTexture::MaxFeatureFlag};
enum Filter{
  Nearest = QOpenGLTexture::Nearest,   Linear = QOpenGLTexture::Linear,   NearestMipMapNearest = QOpenGLTexture::NearestMipMapNearest,   NearestMipMapLinear = QOpenGLTexture::NearestMipMapLinear,   LinearMipMapNearest = QOpenGLTexture::LinearMipMapNearest,   LinearMipMapLinear = QOpenGLTexture::LinearMipMapLinear};
enum MipMapGeneration{
  GenerateMipMaps = QOpenGLTexture::GenerateMipMaps,   DontGenerateMipMaps = QOpenGLTexture::DontGenerateMipMaps};
enum PixelFormat{
  NoSourceFormat = QOpenGLTexture::NoSourceFormat,   Red = QOpenGLTexture::Red,   RG = QOpenGLTexture::RG,   RGB = QOpenGLTexture::RGB,   BGR = QOpenGLTexture::BGR,   RGBA = QOpenGLTexture::RGBA,   BGRA = QOpenGLTexture::BGRA,   Red_Integer = QOpenGLTexture::Red_Integer,   RG_Integer = QOpenGLTexture::RG_Integer,   RGB_Integer = QOpenGLTexture::RGB_Integer,   BGR_Integer = QOpenGLTexture::BGR_Integer,   RGBA_Integer = QOpenGLTexture::RGBA_Integer,   BGRA_Integer = QOpenGLTexture::BGRA_Integer,   Stencil = QOpenGLTexture::Stencil,   Depth = QOpenGLTexture::Depth,   DepthStencil = QOpenGLTexture::DepthStencil,   Alpha = QOpenGLTexture::Alpha,   Luminance = QOpenGLTexture::Luminance,   LuminanceAlpha = QOpenGLTexture::LuminanceAlpha};
enum PixelType{
  NoPixelType = QOpenGLTexture::NoPixelType,   Int8 = QOpenGLTexture::Int8,   UInt8 = QOpenGLTexture::UInt8,   Int16 = QOpenGLTexture::Int16,   UInt16 = QOpenGLTexture::UInt16,   Int32 = QOpenGLTexture::Int32,   UInt32 = QOpenGLTexture::UInt32,   Float16 = QOpenGLTexture::Float16,   Float16OES = QOpenGLTexture::Float16OES,   Float32 = QOpenGLTexture::Float32,   UInt32_RGB9_E5 = QOpenGLTexture::UInt32_RGB9_E5,   UInt32_RG11B10F = QOpenGLTexture::UInt32_RG11B10F,   UInt8_RG3B2 = QOpenGLTexture::UInt8_RG3B2,   UInt8_RG3B2_Rev = QOpenGLTexture::UInt8_RG3B2_Rev,   UInt16_RGB5A1 = QOpenGLTexture::UInt16_RGB5A1,   UInt16_RGB5A1_Rev = QOpenGLTexture::UInt16_RGB5A1_Rev,   UInt16_R5G6B5 = QOpenGLTexture::UInt16_R5G6B5,   UInt16_R5G6B5_Rev = QOpenGLTexture::UInt16_R5G6B5_Rev,   UInt16_RGBA4 = QOpenGLTexture::UInt16_RGBA4,   UInt16_RGBA4_Rev = QOpenGLTexture::UInt16_RGBA4_Rev,   UInt32_RGBA8 = QOpenGLTexture::UInt32_RGBA8,   UInt32_RGBA8_Rev = QOpenGLTexture::UInt32_RGBA8_Rev,   UInt32_RGB10A2 = QOpenGLTexture::UInt32_RGB10A2,   UInt32_RGB10A2_Rev = QOpenGLTexture::UInt32_RGB10A2_Rev,   UInt32_D24S8 = QOpenGLTexture::UInt32_D24S8,   Float32_D32_UInt32_S8_X24 = QOpenGLTexture::Float32_D32_UInt32_S8_X24};
enum SwizzleComponent{
  SwizzleRed = QOpenGLTexture::SwizzleRed,   SwizzleGreen = QOpenGLTexture::SwizzleGreen,   SwizzleBlue = QOpenGLTexture::SwizzleBlue,   SwizzleAlpha = QOpenGLTexture::SwizzleAlpha};
enum SwizzleValue{
  RedValue = QOpenGLTexture::RedValue,   GreenValue = QOpenGLTexture::GreenValue,   BlueValue = QOpenGLTexture::BlueValue,   AlphaValue = QOpenGLTexture::AlphaValue,   ZeroValue = QOpenGLTexture::ZeroValue,   OneValue = QOpenGLTexture::OneValue};
enum Target{
  Target1D = QOpenGLTexture::Target1D,   Target1DArray = QOpenGLTexture::Target1DArray,   Target2D = QOpenGLTexture::Target2D,   Target2DArray = QOpenGLTexture::Target2DArray,   Target3D = QOpenGLTexture::Target3D,   TargetCubeMap = QOpenGLTexture::TargetCubeMap,   TargetCubeMapArray = QOpenGLTexture::TargetCubeMapArray,   Target2DMultisample = QOpenGLTexture::Target2DMultisample,   Target2DMultisampleArray = QOpenGLTexture::Target2DMultisampleArray,   TargetRectangle = QOpenGLTexture::TargetRectangle,   TargetBuffer = QOpenGLTexture::TargetBuffer};
enum TextureFormat{
  NoFormat = QOpenGLTexture::NoFormat,   R8_UNorm = QOpenGLTexture::R8_UNorm,   RG8_UNorm = QOpenGLTexture::RG8_UNorm,   RGB8_UNorm = QOpenGLTexture::RGB8_UNorm,   RGBA8_UNorm = QOpenGLTexture::RGBA8_UNorm,   R16_UNorm = QOpenGLTexture::R16_UNorm,   RG16_UNorm = QOpenGLTexture::RG16_UNorm,   RGB16_UNorm = QOpenGLTexture::RGB16_UNorm,   RGBA16_UNorm = QOpenGLTexture::RGBA16_UNorm,   R8_SNorm = QOpenGLTexture::R8_SNorm,   RG8_SNorm = QOpenGLTexture::RG8_SNorm,   RGB8_SNorm = QOpenGLTexture::RGB8_SNorm,   RGBA8_SNorm = QOpenGLTexture::RGBA8_SNorm,   R16_SNorm = QOpenGLTexture::R16_SNorm,   RG16_SNorm = QOpenGLTexture::RG16_SNorm,   RGB16_SNorm = QOpenGLTexture::RGB16_SNorm,   RGBA16_SNorm = QOpenGLTexture::RGBA16_SNorm,   R8U = QOpenGLTexture::R8U,   RG8U = QOpenGLTexture::RG8U,   RGB8U = QOpenGLTexture::RGB8U,   RGBA8U = QOpenGLTexture::RGBA8U,   R16U = QOpenGLTexture::R16U,   RG16U = QOpenGLTexture::RG16U,   RGB16U = QOpenGLTexture::RGB16U,   RGBA16U = QOpenGLTexture::RGBA16U,   R32U = QOpenGLTexture::R32U,   RG32U = QOpenGLTexture::RG32U,   RGB32U = QOpenGLTexture::RGB32U,   RGBA32U = QOpenGLTexture::RGBA32U,   R8I = QOpenGLTexture::R8I,   RG8I = QOpenGLTexture::RG8I,   RGB8I = QOpenGLTexture::RGB8I,   RGBA8I = QOpenGLTexture::RGBA8I,   R16I = QOpenGLTexture::R16I,   RG16I = QOpenGLTexture::RG16I,   RGB16I = QOpenGLTexture::RGB16I,   RGBA16I = QOpenGLTexture::RGBA16I,   R32I = QOpenGLTexture::R32I,   RG32I = QOpenGLTexture::RG32I,   RGB32I = QOpenGLTexture::RGB32I,   RGBA32I = QOpenGLTexture::RGBA32I,   R16F = QOpenGLTexture::R16F,   RG16F = QOpenGLTexture::RG16F,   RGB16F = QOpenGLTexture::RGB16F,   RGBA16F = QOpenGLTexture::RGBA16F,   R32F = QOpenGLTexture::R32F,   RG32F = QOpenGLTexture::RG32F,   RGB32F = QOpenGLTexture::RGB32F,   RGBA32F = QOpenGLTexture::RGBA32F,   RGB9E5 = QOpenGLTexture::RGB9E5,   RG11B10F = QOpenGLTexture::RG11B10F,   RG3B2 = QOpenGLTexture::RG3B2,   R5G6B5 = QOpenGLTexture::R5G6B5,   RGB5A1 = QOpenGLTexture::RGB5A1,   RGBA4 = QOpenGLTexture::RGBA4,   RGB10A2 = QOpenGLTexture::RGB10A2,   D16 = QOpenGLTexture::D16,   D24 = QOpenGLTexture::D24,   D24S8 = QOpenGLTexture::D24S8,   D32 = QOpenGLTexture::D32,   D32F = QOpenGLTexture::D32F,   D32FS8X24 = QOpenGLTexture::D32FS8X24,   S8 = QOpenGLTexture::S8,   RGB_DXT1 = QOpenGLTexture::RGB_DXT1,   RGBA_DXT1 = QOpenGLTexture::RGBA_DXT1,   RGBA_DXT3 = QOpenGLTexture::RGBA_DXT3,   RGBA_DXT5 = QOpenGLTexture::RGBA_DXT5,   R_ATI1N_UNorm = QOpenGLTexture::R_ATI1N_UNorm,   R_ATI1N_SNorm = QOpenGLTexture::R_ATI1N_SNorm,   RG_ATI2N_UNorm = QOpenGLTexture::RG_ATI2N_UNorm,   RG_ATI2N_SNorm = QOpenGLTexture::RG_ATI2N_SNorm,   RGB_BP_UNSIGNED_FLOAT = QOpenGLTexture::RGB_BP_UNSIGNED_FLOAT,   RGB_BP_SIGNED_FLOAT = QOpenGLTexture::RGB_BP_SIGNED_FLOAT,   RGB_BP_UNorm = QOpenGLTexture::RGB_BP_UNorm,   R11_EAC_UNorm = QOpenGLTexture::R11_EAC_UNorm,   R11_EAC_SNorm = QOpenGLTexture::R11_EAC_SNorm,   RG11_EAC_UNorm = QOpenGLTexture::RG11_EAC_UNorm,   RG11_EAC_SNorm = QOpenGLTexture::RG11_EAC_SNorm,   RGB8_ETC2 = QOpenGLTexture::RGB8_ETC2,   SRGB8_ETC2 = QOpenGLTexture::SRGB8_ETC2,   RGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::RGB8_PunchThrough_Alpha1_ETC2,   SRGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::SRGB8_PunchThrough_Alpha1_ETC2,   RGBA8_ETC2_EAC = QOpenGLTexture::RGBA8_ETC2_EAC,   SRGB8_Alpha8_ETC2_EAC = QOpenGLTexture::SRGB8_Alpha8_ETC2_EAC,   RGB8_ETC1 = QOpenGLTexture::RGB8_ETC1,   RGBA_ASTC_4x4 = QOpenGLTexture::RGBA_ASTC_4x4,   RGBA_ASTC_5x4 = QOpenGLTexture::RGBA_ASTC_5x4,   RGBA_ASTC_5x5 = QOpenGLTexture::RGBA_ASTC_5x5,   RGBA_ASTC_6x5 = QOpenGLTexture::RGBA_ASTC_6x5,   RGBA_ASTC_6x6 = QOpenGLTexture::RGBA_ASTC_6x6,   RGBA_ASTC_8x5 = QOpenGLTexture::RGBA_ASTC_8x5,   RGBA_ASTC_8x6 = QOpenGLTexture::RGBA_ASTC_8x6,   RGBA_ASTC_8x8 = QOpenGLTexture::RGBA_ASTC_8x8,   RGBA_ASTC_10x5 = QOpenGLTexture::RGBA_ASTC_10x5,   RGBA_ASTC_10x6 = QOpenGLTexture::RGBA_ASTC_10x6,   RGBA_ASTC_10x8 = QOpenGLTexture::RGBA_ASTC_10x8,   RGBA_ASTC_10x10 = QOpenGLTexture::RGBA_ASTC_10x10,   RGBA_ASTC_12x10 = QOpenGLTexture::RGBA_ASTC_12x10,   RGBA_ASTC_12x12 = QOpenGLTexture::RGBA_ASTC_12x12,   SRGB8_Alpha8_ASTC_4x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_4x4,   SRGB8_Alpha8_ASTC_5x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x4,   SRGB8_Alpha8_ASTC_5x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x5,   SRGB8_Alpha8_ASTC_6x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x5,   SRGB8_Alpha8_ASTC_6x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x6,   SRGB8_Alpha8_ASTC_8x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x5,   SRGB8_Alpha8_ASTC_8x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x6,   SRGB8_Alpha8_ASTC_8x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x8,   SRGB8_Alpha8_ASTC_10x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x5,   SRGB8_Alpha8_ASTC_10x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x6,   SRGB8_Alpha8_ASTC_10x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x8,   SRGB8_Alpha8_ASTC_10x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x10,   SRGB8_Alpha8_ASTC_12x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x10,   SRGB8_Alpha8_ASTC_12x12 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x12,   SRGB8 = QOpenGLTexture::SRGB8,   SRGB8_Alpha8 = QOpenGLTexture::SRGB8_Alpha8,   SRGB_DXT1 = QOpenGLTexture::SRGB_DXT1,   SRGB_Alpha_DXT1 = QOpenGLTexture::SRGB_Alpha_DXT1,   SRGB_Alpha_DXT3 = QOpenGLTexture::SRGB_Alpha_DXT3,   SRGB_Alpha_DXT5 = QOpenGLTexture::SRGB_Alpha_DXT5,   SRGB_BP_UNorm = QOpenGLTexture::SRGB_BP_UNorm,   DepthFormat = QOpenGLTexture::DepthFormat,   AlphaFormat = QOpenGLTexture::AlphaFormat,   RGBFormat = QOpenGLTexture::RGBFormat,   RGBAFormat = QOpenGLTexture::RGBAFormat,   LuminanceFormat = QOpenGLTexture::LuminanceFormat,   LuminanceAlphaFormat = QOpenGLTexture::LuminanceAlphaFormat};
enum TextureFormatClass{
  NoFormatClass = QOpenGLTexture::NoFormatClass,   FormatClass_128Bit = QOpenGLTexture::FormatClass_128Bit,   FormatClass_96Bit = QOpenGLTexture::FormatClass_96Bit,   FormatClass_64Bit = QOpenGLTexture::FormatClass_64Bit,   FormatClass_48Bit = QOpenGLTexture::FormatClass_48Bit,   FormatClass_32Bit = QOpenGLTexture::FormatClass_32Bit,   FormatClass_24Bit = QOpenGLTexture::FormatClass_24Bit,   FormatClass_16Bit = QOpenGLTexture::FormatClass_16Bit,   FormatClass_8Bit = QOpenGLTexture::FormatClass_8Bit,   FormatClass_RGTC1_R = QOpenGLTexture::FormatClass_RGTC1_R,   FormatClass_RGTC2_RG = QOpenGLTexture::FormatClass_RGTC2_RG,   FormatClass_BPTC_Unorm = QOpenGLTexture::FormatClass_BPTC_Unorm,   FormatClass_BPTC_Float = QOpenGLTexture::FormatClass_BPTC_Float,   FormatClass_S3TC_DXT1_RGB = QOpenGLTexture::FormatClass_S3TC_DXT1_RGB,   FormatClass_S3TC_DXT1_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT1_RGBA,   FormatClass_S3TC_DXT3_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT3_RGBA,   FormatClass_S3TC_DXT5_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT5_RGBA,   FormatClass_Unique = QOpenGLTexture::FormatClass_Unique};
enum TextureUnitReset{
  ResetTextureUnit = QOpenGLTexture::ResetTextureUnit,   DontResetTextureUnit = QOpenGLTexture::DontResetTextureUnit};
enum WrapMode{
  Repeat = QOpenGLTexture::Repeat,   MirroredRepeat = QOpenGLTexture::MirroredRepeat,   ClampToEdge = QOpenGLTexture::ClampToEdge,   ClampToBorder = QOpenGLTexture::ClampToBorder};
Q_DECLARE_FLAGS(Features, Feature)
public slots:
void delete_QOpenGLTexture(QOpenGLTexture* obj) { delete obj; } 
   void allocateStorage(QOpenGLTexture* theWrappedObject);
   void allocateStorage(QOpenGLTexture* theWrappedObject, QOpenGLTexture::PixelFormat  pixelFormat, QOpenGLTexture::PixelType  pixelType);
   void bind(QOpenGLTexture* theWrappedObject);
   void bind(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   QColor  borderColor(QOpenGLTexture* theWrappedObject) const;
   void borderColor(QOpenGLTexture* theWrappedObject, float*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, int*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, unsigned int*  border) const;
   GLuint  static_QOpenGLTexture_boundTextureId(QOpenGLTexture::BindingTarget  target);
   GLuint  static_QOpenGLTexture_boundTextureId(uint  unit, QOpenGLTexture::BindingTarget  target);
   QOpenGLTexture::ComparisonFunction  comparisonFunction(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::ComparisonMode  comparisonMode(QOpenGLTexture* theWrappedObject) const;
   bool  create(QOpenGLTexture* theWrappedObject);
   QOpenGLTexture*  createTextureView(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Target  target, QOpenGLTexture::TextureFormat  viewFormat, int  minimumMipmapLevel, int  maximumMipmapLevel, int  minimumLayer, int  maximumLayer) const;
   int  depth(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::DepthStencilMode  depthStencilMode(QOpenGLTexture* theWrappedObject) const;
   void destroy(QOpenGLTexture* theWrappedObject);
   int  faces(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::TextureFormat  format(QOpenGLTexture* theWrappedObject) const;
   void generateMipMaps(QOpenGLTexture* theWrappedObject);
   void generateMipMaps(QOpenGLTexture* theWrappedObject, int  baseLevel, bool  resetBaseLevel = true);
   bool  static_QOpenGLTexture_hasFeature(QOpenGLTexture::Feature  feature);
   int  height(QOpenGLTexture* theWrappedObject) const;
   bool  isAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject, uint  unit);
   bool  isCreated(QOpenGLTexture* theWrappedObject) const;
   bool  isFixedSamplePositions(QOpenGLTexture* theWrappedObject) const;
   bool  isStorageAllocated(QOpenGLTexture* theWrappedObject) const;
   bool  isTextureView(QOpenGLTexture* theWrappedObject) const;
   int  layers(QOpenGLTexture* theWrappedObject) const;
   QPair<float , float >  levelOfDetailRange(QOpenGLTexture* theWrappedObject) const;
   float  levelofDetailBias(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  magnificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  maximumAnisotropy(QOpenGLTexture* theWrappedObject) const;
   float  maximumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  maximumMipLevels(QOpenGLTexture* theWrappedObject) const;
   QPair<QOpenGLTexture::Filter , QOpenGLTexture::Filter >  minMagFilters(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  minificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  minimumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  mipBaseLevel(QOpenGLTexture* theWrappedObject) const;
   QPair<int , int >  mipLevelRange(QOpenGLTexture* theWrappedObject) const;
   int  mipLevels(QOpenGLTexture* theWrappedObject) const;
   int  mipMaxLevel(QOpenGLTexture* theWrappedObject) const;
   void release(QOpenGLTexture* theWrappedObject);
   void release(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   int  samples(QOpenGLTexture* theWrappedObject) const;
   void setAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject, bool  enabled);
   void setBorderColor(QOpenGLTexture* theWrappedObject, QColor  color);
   void setBorderColor(QOpenGLTexture* theWrappedObject, float  r, float  g, float  b, float  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, int  r, int  g, int  b, int  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, uint  r, uint  g, uint  b, uint  a);
   void setComparisonFunction(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonFunction  function);
   void setComparisonMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonMode  mode);
   void setData(QOpenGLTexture* theWrappedObject, const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
   void setDepthStencilMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::DepthStencilMode  mode);
   void setFixedSamplePositions(QOpenGLTexture* theWrappedObject, bool  fixed);
   void setFormat(QOpenGLTexture* theWrappedObject, QOpenGLTexture::TextureFormat  format);
   void setLayers(QOpenGLTexture* theWrappedObject, int  layers);
   void setLevelOfDetailRange(QOpenGLTexture* theWrappedObject, float  min, float  max);
   void setLevelofDetailBias(QOpenGLTexture* theWrappedObject, float  bias);
   void setMagnificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMaximumAnisotropy(QOpenGLTexture* theWrappedObject, float  anisotropy);
   void setMaximumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMinMagFilters(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  minificationFilter, QOpenGLTexture::Filter  magnificationFilter);
   void setMinificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMinimumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMipBaseLevel(QOpenGLTexture* theWrappedObject, int  baseLevel);
   void setMipLevelRange(QOpenGLTexture* theWrappedObject, int  baseLevel, int  maxLevel);
   void setMipLevels(QOpenGLTexture* theWrappedObject, int  levels);
   void setMipMaxLevel(QOpenGLTexture* theWrappedObject, int  maxLevel);
   void setSamples(QOpenGLTexture* theWrappedObject, int  samples);
   void setSize(QOpenGLTexture* theWrappedObject, int  width, int  height = 1, int  depth = 1);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component, QOpenGLTexture::SwizzleValue  value);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleValue  r, QOpenGLTexture::SwizzleValue  g, QOpenGLTexture::SwizzleValue  b, QOpenGLTexture::SwizzleValue  a);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction, QOpenGLTexture::WrapMode  mode);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::WrapMode  mode);
   QOpenGLTexture::SwizzleValue  swizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component) const;
   QOpenGLTexture::Target  target(QOpenGLTexture* theWrappedObject) const;
   GLuint  textureId(QOpenGLTexture* theWrappedObject) const;
   int  width(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::WrapMode  wrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction) const;
    QString py_toString(QOpenGLTexture*);
};





class PythonQtWrapper_QOpenGLTextureBlitter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Origin )
enum Origin{
  OriginBottomLeft = QOpenGLTextureBlitter::OriginBottomLeft,   OriginTopLeft = QOpenGLTextureBlitter::OriginTopLeft};
public slots:
void delete_QOpenGLTextureBlitter(QOpenGLTextureBlitter* obj) { delete obj; } 
   void bind(QOpenGLTextureBlitter* theWrappedObject, GLenum  target = GL_TEXTURE_2D);
   void blit(QOpenGLTextureBlitter* theWrappedObject, GLuint  texture, const QMatrix4x4&  targetTransform, QOpenGLTextureBlitter::Origin  sourceOrigin);
   bool  create(QOpenGLTextureBlitter* theWrappedObject);
   void destroy(QOpenGLTextureBlitter* theWrappedObject);
   bool  isCreated(QOpenGLTextureBlitter* theWrappedObject) const;
   void release(QOpenGLTextureBlitter* theWrappedObject);
   void setOpacity(QOpenGLTextureBlitter* theWrappedObject, float  opacity);
   void setRedBlueSwizzle(QOpenGLTextureBlitter* theWrappedObject, bool  swizzle);
   bool  supportsExternalOESTarget(QOpenGLTextureBlitter* theWrappedObject) const;
   QMatrix4x4  static_QOpenGLTextureBlitter_targetTransform(const QRectF&  target, const QRect&  viewport);
};





class PythonQtWrapper_QOpenGLTimeMonitor : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLTimeMonitor(QOpenGLTimeMonitor* obj) { delete obj; } 
   bool  create(QOpenGLTimeMonitor* theWrappedObject);
   void destroy(QOpenGLTimeMonitor* theWrappedObject);
   bool  isCreated(QOpenGLTimeMonitor* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimeMonitor* theWrappedObject) const;
   QVector<GLuint >  objectIds(QOpenGLTimeMonitor* theWrappedObject) const;
   int  recordSample(QOpenGLTimeMonitor* theWrappedObject);
   void reset(QOpenGLTimeMonitor* theWrappedObject);
   int  sampleCount(QOpenGLTimeMonitor* theWrappedObject) const;
   void setSampleCount(QOpenGLTimeMonitor* theWrappedObject, int  sampleCount);
   QVector<GLuint64 >  waitForIntervals(QOpenGLTimeMonitor* theWrappedObject) const;
   QVector<GLuint64 >  waitForSamples(QOpenGLTimeMonitor* theWrappedObject) const;
};





class PythonQtWrapper_QOpenGLTimerQuery : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLTimerQuery(QOpenGLTimerQuery* obj) { delete obj; } 
   void begin(QOpenGLTimerQuery* theWrappedObject);
   bool  create(QOpenGLTimerQuery* theWrappedObject);
   void destroy(QOpenGLTimerQuery* theWrappedObject);
   void end(QOpenGLTimerQuery* theWrappedObject);
   bool  isCreated(QOpenGLTimerQuery* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint  objectId(QOpenGLTimerQuery* theWrappedObject) const;
   void recordTimestamp(QOpenGLTimerQuery* theWrappedObject);
   GLuint64  waitForResult(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint64  waitForTimestamp(QOpenGLTimerQuery* theWrappedObject) const;
};





class PythonQtWrapper_QOpenGLVersionProfile : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLVersionProfile* new_QOpenGLVersionProfile();
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QOpenGLVersionProfile&  other);
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QSurfaceFormat&  format);
void delete_QOpenGLVersionProfile(QOpenGLVersionProfile* obj) { delete obj; } 
   bool  hasProfiles(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isLegacyVersion(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isValid(QOpenGLVersionProfile* theWrappedObject) const;
   QOpenGLVersionProfile*  operator_assign(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   bool  __eq__(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   QSurfaceFormat::OpenGLContextProfile  profile(QOpenGLVersionProfile* theWrappedObject) const;
   void setProfile(QOpenGLVersionProfile* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setVersion(QOpenGLVersionProfile* theWrappedObject, int  majorVersion, int  minorVersion);
   QPair<int , int >  version(QOpenGLVersionProfile* theWrappedObject) const;
    QString py_toString(QOpenGLVersionProfile*);
    bool __nonzero__(QOpenGLVersionProfile* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLVertexArrayObject : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLVertexArrayObject(QOpenGLVertexArrayObject* obj) { delete obj; } 
   void bind(QOpenGLVertexArrayObject* theWrappedObject);
   bool  create(QOpenGLVertexArrayObject* theWrappedObject);
   void destroy(QOpenGLVertexArrayObject* theWrappedObject);
   bool  isCreated(QOpenGLVertexArrayObject* theWrappedObject) const;
   GLuint  objectId(QOpenGLVertexArrayObject* theWrappedObject) const;
   void release(QOpenGLVertexArrayObject* theWrappedObject);
};





class PythonQtShell_QOpenGLWidget : public QOpenGLWidget
{
public:
    PythonQtShell_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QOpenGLWidget(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void initializeGL();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintGL();
virtual QPaintDevice*  redirected(QPoint*  p) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void resizeGL(int  w, int  h);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLWidget : public QOpenGLWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintGL() { this->paintGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  p) const { return this->redirected(p); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline bool  py_q_event(QEvent*  e) { return QOpenGLWidget::event(e); }
inline void py_q_initializeGL() { QOpenGLWidget::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWidget::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  e) { QOpenGLWidget::paintEvent(e); }
inline void py_q_paintGL() { QOpenGLWidget::paintGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  p) const { return QOpenGLWidget::redirected(p); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QOpenGLWidget::resizeEvent(e); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWidget::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWidget::NoPartialUpdate,   PartialUpdate = QOpenGLWidget::PartialUpdate};
public slots:
QOpenGLWidget* new_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QOpenGLWidget(QOpenGLWidget* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLWidget* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWidget* theWrappedObject) const;
   void doneCurrent(QOpenGLWidget* theWrappedObject);
   bool  py_q_event(QOpenGLWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_event(e));}
   QSurfaceFormat  format(QOpenGLWidget* theWrappedObject) const;
   QImage  grabFramebuffer(QOpenGLWidget* theWrappedObject);
   void initializeGL(QOpenGLWidget* theWrappedObject);
   void py_q_initializeGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWidget* theWrappedObject) const;
   void makeCurrent(QOpenGLWidget* theWrappedObject);
   int  py_q_metric(QOpenGLWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEngine());}
   void py_q_paintEvent(QOpenGLWidget* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEvent(e));}
   void paintGL(QOpenGLWidget* theWrappedObject);
   void py_q_paintGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWidget* theWrappedObject, QPoint*  p) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_redirected(p));}
   void py_q_resizeEvent(QOpenGLWidget* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeEvent(e));}
   void resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeGL(w, h));}
   void setFormat(QOpenGLWidget* theWrappedObject, const QSurfaceFormat&  format);
   void setTextureFormat(QOpenGLWidget* theWrappedObject, GLenum  texFormat);
   void setUpdateBehavior(QOpenGLWidget* theWrappedObject, QOpenGLWidget::UpdateBehavior  updateBehavior);
   GLenum  textureFormat(QOpenGLWidget* theWrappedObject) const;
   QOpenGLWidget::UpdateBehavior  updateBehavior(QOpenGLWidget* theWrappedObject) const;
    bool __nonzero__(QOpenGLWidget* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLWindow : public QOpenGLWindow
{
public:
    PythonQtShell_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(shareContext, updateBehavior, parent),_wrapper(NULL) {};
    PythonQtShell_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(updateBehavior, parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLWindow();

virtual void initializeGL();
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual void paintEvent(QPaintEvent*  event);
virtual void paintGL();
virtual void paintOverGL();
virtual void paintUnderGL();
virtual QPaintDevice*  redirected(QPoint*  arg__1) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void resizeGL(int  w, int  h);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLWindow : public QOpenGLWindow
{ public:
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_paintGL() { this->paintGL(); }
inline void promoted_paintOverGL() { this->paintOverGL(); }
inline void promoted_paintUnderGL() { this->paintUnderGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline void py_q_initializeGL() { QOpenGLWindow::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QOpenGLWindow::paintEvent(event); }
inline void py_q_paintGL() { QOpenGLWindow::paintGL(); }
inline void py_q_paintOverGL() { QOpenGLWindow::paintOverGL(); }
inline void py_q_paintUnderGL() { QOpenGLWindow::paintUnderGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  arg__1) const { return QOpenGLWindow::redirected(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QOpenGLWindow::resizeEvent(event); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWindow::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWindow::NoPartialUpdate,   PartialUpdateBlit = QOpenGLWindow::PartialUpdateBlit,   PartialUpdateBlend = QOpenGLWindow::PartialUpdateBlend};
public slots:
QOpenGLWindow* new_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
QOpenGLWindow* new_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
void delete_QOpenGLWindow(QOpenGLWindow* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLWindow* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWindow* theWrappedObject) const;
   void doneCurrent(QOpenGLWindow* theWrappedObject);
   QImage  grabFramebuffer(QOpenGLWindow* theWrappedObject);
   void initializeGL(QOpenGLWindow* theWrappedObject);
   void py_q_initializeGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWindow* theWrappedObject) const;
   void makeCurrent(QOpenGLWindow* theWrappedObject);
   int  metric(QOpenGLWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  py_q_metric(QOpenGLWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_metric(metric));}
   void paintEvent(QOpenGLWindow* theWrappedObject, QPaintEvent*  event);
   void py_q_paintEvent(QOpenGLWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void paintGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintGL());}
   void paintOverGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintOverGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintOverGL());}
   void paintUnderGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintUnderGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintUnderGL());}
   QPaintDevice*  redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const;
   QPaintDevice*  py_q_redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_redirected(arg__1));}
   void resizeEvent(QOpenGLWindow* theWrappedObject, QResizeEvent*  event);
   void py_q_resizeEvent(QOpenGLWindow* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeEvent(event));}
   void resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeGL(w, h));}
   QOpenGLContext*  shareContext(QOpenGLWindow* theWrappedObject) const;
   QOpenGLWindow::UpdateBehavior  updateBehavior(QOpenGLWindow* theWrappedObject) const;
    bool __nonzero__(QOpenGLWindow* obj) { return obj->isValid(); }
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr):QPageSetupDialog(printer, parent),_wrapper(NULL) {};
    PythonQtShell_QPageSetupDialog(QWidget*  parent = nullptr):QPageSetupDialog(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPageSetupDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
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
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline void py_q_done(int  result) { QPageSetupDialog::done(result); }
inline int  py_q_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = nullptr);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = nullptr);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void py_q_done(QPageSetupDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_done(result));}
   int  py_q_exec(QPageSetupDialog* theWrappedObject){  return (((PythonQtPublicPromoter_QPageSetupDialog*)theWrappedObject)->py_q_exec());}
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPrinter*  printer(QPageSetupDialog* theWrappedObject);
};





class PythonQtShell_QPagedPaintDevice : public QPagedPaintDevice
{
public:
    PythonQtShell_QPagedPaintDevice():QPagedPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPagedPaintDevice();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual bool  newPage();
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void setMargins(const QPagedPaintDevice::Margins&  margins);
virtual void setPageSize(QPagedPaintDevice::PageSize  size);
virtual void setPageSizeMM(const QSizeF&  size);
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPagedPaintDevice : public QPagedPaintDevice
{ public:
inline QPageLayout&  promoted_devicePageLayout() { return this->devicePageLayout(); }
inline bool  py_q_newPage() { return this->newPage(); }
inline void py_q_setMargins(const QPagedPaintDevice::Margins&  margins) { QPagedPaintDevice::setMargins(margins); }
inline void py_q_setPageSize(QPagedPaintDevice::PageSize  size) { QPagedPaintDevice::setPageSize(size); }
inline void py_q_setPageSizeMM(const QSizeF&  size) { QPagedPaintDevice::setPageSizeMM(size); }
};

class PythonQtWrapper_QPagedPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSize PdfVersion )
enum PageSize{
  A4 = QPagedPaintDevice::A4,   B5 = QPagedPaintDevice::B5,   Letter = QPagedPaintDevice::Letter,   Legal = QPagedPaintDevice::Legal,   Executive = QPagedPaintDevice::Executive,   A0 = QPagedPaintDevice::A0,   A1 = QPagedPaintDevice::A1,   A2 = QPagedPaintDevice::A2,   A3 = QPagedPaintDevice::A3,   A5 = QPagedPaintDevice::A5,   A6 = QPagedPaintDevice::A6,   A7 = QPagedPaintDevice::A7,   A8 = QPagedPaintDevice::A8,   A9 = QPagedPaintDevice::A9,   B0 = QPagedPaintDevice::B0,   B1 = QPagedPaintDevice::B1,   B10 = QPagedPaintDevice::B10,   B2 = QPagedPaintDevice::B2,   B3 = QPagedPaintDevice::B3,   B4 = QPagedPaintDevice::B4,   B6 = QPagedPaintDevice::B6,   B7 = QPagedPaintDevice::B7,   B8 = QPagedPaintDevice::B8,   B9 = QPagedPaintDevice::B9,   C5E = QPagedPaintDevice::C5E,   Comm10E = QPagedPaintDevice::Comm10E,   DLE = QPagedPaintDevice::DLE,   Folio = QPagedPaintDevice::Folio,   Ledger = QPagedPaintDevice::Ledger,   Tabloid = QPagedPaintDevice::Tabloid,   Custom = QPagedPaintDevice::Custom,   A10 = QPagedPaintDevice::A10,   A3Extra = QPagedPaintDevice::A3Extra,   A4Extra = QPagedPaintDevice::A4Extra,   A4Plus = QPagedPaintDevice::A4Plus,   A4Small = QPagedPaintDevice::A4Small,   A5Extra = QPagedPaintDevice::A5Extra,   B5Extra = QPagedPaintDevice::B5Extra,   JisB0 = QPagedPaintDevice::JisB0,   JisB1 = QPagedPaintDevice::JisB1,   JisB2 = QPagedPaintDevice::JisB2,   JisB3 = QPagedPaintDevice::JisB3,   JisB4 = QPagedPaintDevice::JisB4,   JisB5 = QPagedPaintDevice::JisB5,   JisB6 = QPagedPaintDevice::JisB6,   JisB7 = QPagedPaintDevice::JisB7,   JisB8 = QPagedPaintDevice::JisB8,   JisB9 = QPagedPaintDevice::JisB9,   JisB10 = QPagedPaintDevice::JisB10,   AnsiC = QPagedPaintDevice::AnsiC,   AnsiD = QPagedPaintDevice::AnsiD,   AnsiE = QPagedPaintDevice::AnsiE,   LegalExtra = QPagedPaintDevice::LegalExtra,   LetterExtra = QPagedPaintDevice::LetterExtra,   LetterPlus = QPagedPaintDevice::LetterPlus,   LetterSmall = QPagedPaintDevice::LetterSmall,   TabloidExtra = QPagedPaintDevice::TabloidExtra,   ArchA = QPagedPaintDevice::ArchA,   ArchB = QPagedPaintDevice::ArchB,   ArchC = QPagedPaintDevice::ArchC,   ArchD = QPagedPaintDevice::ArchD,   ArchE = QPagedPaintDevice::ArchE,   Imperial7x9 = QPagedPaintDevice::Imperial7x9,   Imperial8x10 = QPagedPaintDevice::Imperial8x10,   Imperial9x11 = QPagedPaintDevice::Imperial9x11,   Imperial9x12 = QPagedPaintDevice::Imperial9x12,   Imperial10x11 = QPagedPaintDevice::Imperial10x11,   Imperial10x13 = QPagedPaintDevice::Imperial10x13,   Imperial10x14 = QPagedPaintDevice::Imperial10x14,   Imperial12x11 = QPagedPaintDevice::Imperial12x11,   Imperial15x11 = QPagedPaintDevice::Imperial15x11,   ExecutiveStandard = QPagedPaintDevice::ExecutiveStandard,   Note = QPagedPaintDevice::Note,   Quarto = QPagedPaintDevice::Quarto,   Statement = QPagedPaintDevice::Statement,   SuperA = QPagedPaintDevice::SuperA,   SuperB = QPagedPaintDevice::SuperB,   Postcard = QPagedPaintDevice::Postcard,   DoublePostcard = QPagedPaintDevice::DoublePostcard,   Prc16K = QPagedPaintDevice::Prc16K,   Prc32K = QPagedPaintDevice::Prc32K,   Prc32KBig = QPagedPaintDevice::Prc32KBig,   FanFoldUS = QPagedPaintDevice::FanFoldUS,   FanFoldGerman = QPagedPaintDevice::FanFoldGerman,   FanFoldGermanLegal = QPagedPaintDevice::FanFoldGermanLegal,   EnvelopeB4 = QPagedPaintDevice::EnvelopeB4,   EnvelopeB5 = QPagedPaintDevice::EnvelopeB5,   EnvelopeB6 = QPagedPaintDevice::EnvelopeB6,   EnvelopeC0 = QPagedPaintDevice::EnvelopeC0,   EnvelopeC1 = QPagedPaintDevice::EnvelopeC1,   EnvelopeC2 = QPagedPaintDevice::EnvelopeC2,   EnvelopeC3 = QPagedPaintDevice::EnvelopeC3,   EnvelopeC4 = QPagedPaintDevice::EnvelopeC4,   EnvelopeC6 = QPagedPaintDevice::EnvelopeC6,   EnvelopeC65 = QPagedPaintDevice::EnvelopeC65,   EnvelopeC7 = QPagedPaintDevice::EnvelopeC7,   Envelope9 = QPagedPaintDevice::Envelope9,   Envelope11 = QPagedPaintDevice::Envelope11,   Envelope12 = QPagedPaintDevice::Envelope12,   Envelope14 = QPagedPaintDevice::Envelope14,   EnvelopeMonarch = QPagedPaintDevice::EnvelopeMonarch,   EnvelopePersonal = QPagedPaintDevice::EnvelopePersonal,   EnvelopeChou3 = QPagedPaintDevice::EnvelopeChou3,   EnvelopeChou4 = QPagedPaintDevice::EnvelopeChou4,   EnvelopeInvite = QPagedPaintDevice::EnvelopeInvite,   EnvelopeItalian = QPagedPaintDevice::EnvelopeItalian,   EnvelopeKaku2 = QPagedPaintDevice::EnvelopeKaku2,   EnvelopeKaku3 = QPagedPaintDevice::EnvelopeKaku3,   EnvelopePrc1 = QPagedPaintDevice::EnvelopePrc1,   EnvelopePrc2 = QPagedPaintDevice::EnvelopePrc2,   EnvelopePrc3 = QPagedPaintDevice::EnvelopePrc3,   EnvelopePrc4 = QPagedPaintDevice::EnvelopePrc4,   EnvelopePrc5 = QPagedPaintDevice::EnvelopePrc5,   EnvelopePrc6 = QPagedPaintDevice::EnvelopePrc6,   EnvelopePrc7 = QPagedPaintDevice::EnvelopePrc7,   EnvelopePrc8 = QPagedPaintDevice::EnvelopePrc8,   EnvelopePrc9 = QPagedPaintDevice::EnvelopePrc9,   EnvelopePrc10 = QPagedPaintDevice::EnvelopePrc10,   EnvelopeYou4 = QPagedPaintDevice::EnvelopeYou4,   LastPageSize = QPagedPaintDevice::LastPageSize,   NPageSize = QPagedPaintDevice::NPageSize,   NPaperSize = QPagedPaintDevice::NPaperSize,   AnsiA = QPagedPaintDevice::AnsiA,   AnsiB = QPagedPaintDevice::AnsiB,   EnvelopeC5 = QPagedPaintDevice::EnvelopeC5,   EnvelopeDL = QPagedPaintDevice::EnvelopeDL,   Envelope10 = QPagedPaintDevice::Envelope10};
enum PdfVersion{
  PdfVersion_1_4 = QPagedPaintDevice::PdfVersion_1_4,   PdfVersion_A1b = QPagedPaintDevice::PdfVersion_A1b,   PdfVersion_1_6 = QPagedPaintDevice::PdfVersion_1_6};
public slots:
QPagedPaintDevice* new_QPagedPaintDevice();
void delete_QPagedPaintDevice(QPagedPaintDevice* obj) { delete obj; } 
   QPageLayout*  devicePageLayout(QPagedPaintDevice* theWrappedObject);
   QPagedPaintDevice::Margins  margins(QPagedPaintDevice* theWrappedObject) const;
   bool  newPage(QPagedPaintDevice* theWrappedObject);
   bool  py_q_newPage(QPagedPaintDevice* theWrappedObject){  return (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_newPage());}
   QPageLayout  pageLayout(QPagedPaintDevice* theWrappedObject) const;
   QPagedPaintDevice::PageSize  pageSize(QPagedPaintDevice* theWrappedObject) const;
   QSizeF  pageSizeMM(QPagedPaintDevice* theWrappedObject) const;
   void setMargins(QPagedPaintDevice* theWrappedObject, const QPagedPaintDevice::Margins&  margins);
   void py_q_setMargins(QPagedPaintDevice* theWrappedObject, const QPagedPaintDevice::Margins&  margins){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setMargins(margins));}
   bool  setPageLayout(QPagedPaintDevice* theWrappedObject, const QPageLayout&  pageLayout);
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins);
   bool  setPageMargins(QPagedPaintDevice* theWrappedObject, const QMarginsF&  margins, QPageLayout::Unit  units);
   bool  setPageOrientation(QPagedPaintDevice* theWrappedObject, QPageLayout::Orientation  orientation);
   void setPageSize(QPagedPaintDevice* theWrappedObject, QPagedPaintDevice::PageSize  size);
   void py_q_setPageSize(QPagedPaintDevice* theWrappedObject, QPagedPaintDevice::PageSize  size){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSize(size));}
   bool  setPageSize(QPagedPaintDevice* theWrappedObject, const QPageSize&  pageSize);
   void setPageSizeMM(QPagedPaintDevice* theWrappedObject, const QSizeF&  size);
   void py_q_setPageSizeMM(QPagedPaintDevice* theWrappedObject, const QSizeF&  size){  (((PythonQtPublicPromoter_QPagedPaintDevice*)theWrappedObject)->py_q_setPageSizeMM(size));}
};





class PythonQtShell_QPagedPaintDevice__Margins : public QPagedPaintDevice::Margins
{
public:
    PythonQtShell_QPagedPaintDevice__Margins():QPagedPaintDevice::Margins(),_wrapper(NULL) {};

   ~PythonQtShell_QPagedPaintDevice__Margins();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPagedPaintDevice__Margins : public QObject
{ Q_OBJECT
public:
public slots:
QPagedPaintDevice::Margins* new_QPagedPaintDevice__Margins();
QPagedPaintDevice::Margins* new_QPagedPaintDevice__Margins(const QPagedPaintDevice::Margins& other) {
PythonQtShell_QPagedPaintDevice__Margins* a = new PythonQtShell_QPagedPaintDevice__Margins();
*((QPagedPaintDevice::Margins*)a) = other;
return a; }
void delete_QPagedPaintDevice__Margins(QPagedPaintDevice::Margins* obj) { delete obj; } 
void py_set_bottom(QPagedPaintDevice::Margins* theWrappedObject, qreal  bottom){ theWrappedObject->bottom = bottom; }
qreal  py_get_bottom(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->bottom; }
void py_set_left(QPagedPaintDevice::Margins* theWrappedObject, qreal  left){ theWrappedObject->left = left; }
qreal  py_get_left(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->left; }
void py_set_right(QPagedPaintDevice::Margins* theWrappedObject, qreal  right){ theWrappedObject->right = right; }
qreal  py_get_right(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->right; }
void py_set_top(QPagedPaintDevice::Margins* theWrappedObject, qreal  top){ theWrappedObject->top = top; }
qreal  py_get_top(QPagedPaintDevice::Margins* theWrappedObject){ return theWrappedObject->top; }
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintDevice();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline void promoted_initPainter(QPainter*  painter) const { this->initPainter(painter); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return this->redirected(offset); }
inline QPainter*  promoted_sharedPainter() const { return this->sharedPainter(); }
inline int  py_q_devType() const { return QPaintDevice::devType(); }
inline void py_q_initPainter(QPainter*  painter) const { QPaintDevice::initPainter(painter); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return this->paintEngine(); }
inline QPaintDevice*  py_q_redirected(QPoint*  offset) const { return QPaintDevice::redirected(offset); }
inline QPainter*  py_q_sharedPainter() const { return QPaintDevice::sharedPainter(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY,   PdmDevicePixelRatio = QPaintDevice::PdmDevicePixelRatio,   PdmDevicePixelRatioScaled = QPaintDevice::PdmDevicePixelRatioScaled};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; } 
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  py_q_devType(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_devType());}
   int  devicePixelRatio(QPaintDevice* theWrappedObject) const;
   qreal  devicePixelRatioF(QPaintDevice* theWrappedObject) const;
   qreal  static_QPaintDevice_devicePixelRatioFScale();
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   void initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const;
   void py_q_initPainter(QPaintDevice* theWrappedObject, QPainter*  painter) const{  (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_initPainter(painter));}
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  py_q_metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   QPaintDevice*  redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const;
   QPaintDevice*  py_q_redirected(QPaintDevice* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_redirected(offset));}
   QPainter*  sharedPainter(QPaintDevice* theWrappedObject) const;
   QPainter*  py_q_sharedPainter(QPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintDevice*)theWrappedObject)->py_q_sharedPainter());}
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures()):QPaintEngine(features),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngine();

virtual bool  begin(QPaintDevice*  pdev);
virtual QPoint  coordinateOffset() const;
virtual void drawEllipse(const QRect&  r);
virtual void drawEllipse(const QRectF&  r);
virtual void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
virtual void drawLines(const QLine*  lines, int  lineCount);
virtual void drawLines(const QLineF*  lines, int  lineCount);
virtual void drawPath(const QPainterPath&  path);
virtual void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
virtual void drawPoints(const QPoint*  points, int  pointCount);
virtual void drawPoints(const QPointF*  points, int  pointCount);
virtual void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawRects(const QRect*  rects, int  rectCount);
virtual void drawRects(const QRectF*  rects, int  rectCount);
virtual void drawTextItem(const QPointF&  p, const QTextItem&  textItem);
virtual void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
virtual bool  end();
virtual QPaintEngine::Type  type() const;
virtual void updateState(const QPaintEngineState&  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline bool  py_q_begin(QPaintDevice*  pdev) { return this->begin(pdev); }
inline QPoint  py_q_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void py_q_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void py_q_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void py_q_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void py_q_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void py_q_drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) { this->drawPixmap(r, pm, sr); }
inline void py_q_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void py_q_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void py_q_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void py_q_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void py_q_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline bool  py_q_end() { return this->end(); }
inline QPaintEngine::Type  py_q_type() const { return this->type(); }
inline void py_q_updateState(const QPaintEngineState&  state) { this->updateState(state); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyFlag PaintEngineFeature PolygonDrawMode Type )
Q_FLAGS(DirtyFlags PaintEngineFeatures )
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   Direct2D = QPaintEngine::Direct2D,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = QPaintEngine::PaintEngineFeatures());
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; } 
   bool  begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev);
   bool  py_q_begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_begin(pdev));}
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   QPoint  py_q_coordinateOffset(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_coordinateOffset());}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void py_q_drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawEllipse(r));}
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void py_q_drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawImage(r, pm, sr, flags));}
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void py_q_drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawLines(lines, lineCount));}
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void py_q_drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPath(path));}
   void drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
   void py_q_drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPixmap(r, pm, sr));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void py_q_drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPoints(points, pointCount));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void py_q_drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawPolygon(points, pointCount, mode));}
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void py_q_drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawRects(rects, rectCount));}
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void py_q_drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTextItem(p, textItem));}
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   void py_q_drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_drawTiledPixmap(r, pixmap, s));}
   bool  end(QPaintEngine* theWrappedObject);
   bool  py_q_end(QPaintEngine* theWrappedObject){  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_end());}
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPaintEngine::Type  type(QPaintEngine* theWrappedObject) const;
   QPaintEngine::Type  py_q_type(QPaintEngine* theWrappedObject) const{  return (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_type());}
   void updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state);
   void py_q_updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state){  (((PythonQtPublicPromoter_QPaintEngine*)theWrappedObject)->py_q_updateState(state));}
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; } 
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};


