#include <PythonQt.h>
#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QInputMethodEvent>
#include <QLocale>
#include <QObject>
#include <QPalette>
#include <QVariant>
#include <qapplication.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfile.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qframe.h>
#include <qgridlayout.h>
#include <qguiapplication.h>
#include <qinputmethod.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qtransform.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtWrapper_QActionEvent : public QObject
{ Q_OBJECT
public:
public slots:
QActionEvent* new_QActionEvent(int  type, QAction*  action, QAction*  before = nullptr);
void delete_QActionEvent(QActionEvent* obj) { delete obj; } 
   QAction*  action(QActionEvent* theWrappedObject) const;
   QAction*  before(QActionEvent* theWrappedObject) const;
};





class PythonQtWrapper_QApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorSpec )
enum ColorSpec{
  NormalColor = QApplication::NormalColor,   CustomColor = QApplication::CustomColor,   ManyColor = QApplication::ManyColor};
public slots:
void delete_QApplication(QApplication* obj) { delete obj; } 
   QWidget*  static_QApplication_activeModalWidget();
   QWidget*  static_QApplication_activePopupWidget();
   QWidget*  static_QApplication_activeWindow();
   void static_QApplication_alert(QWidget*  widget, int  duration = 0);
   QList<QWidget* >  static_QApplication_allWidgets();
   void static_QApplication_beep();
   int  static_QApplication_colorSpec();
   int  static_QApplication_cursorFlashTime();
   QDesktopWidget*  static_QApplication_desktop();
   int  static_QApplication_doubleClickInterval();
   int  static_QApplication_exec();
   QWidget*  static_QApplication_focusWidget();
   QFont  static_QApplication_font();
   QFont  static_QApplication_font(const QWidget*  arg__1);
   QFontMetrics  static_QApplication_fontMetrics();
   QSize  static_QApplication_globalStrut();
   bool  static_QApplication_isEffectEnabled(Qt::UIEffect  arg__1);
   int  static_QApplication_keyboardInputInterval();
   QPalette  static_QApplication_palette(const QWidget*  arg__1);
   void static_QApplication_setActiveWindow(QWidget*  act);
   void static_QApplication_setColorSpec(int  arg__1);
   void static_QApplication_setCursorFlashTime(int  arg__1);
   void static_QApplication_setDoubleClickInterval(int  arg__1);
   void static_QApplication_setEffectEnabled(Qt::UIEffect  arg__1, bool  enable = true);
   void static_QApplication_setFont(const QFont&  arg__1, const char*  className = nullptr);
   void static_QApplication_setGlobalStrut(const QSize&  arg__1);
   void static_QApplication_setKeyboardInputInterval(int  arg__1);
   void static_QApplication_setPalette(const QPalette&  arg__1, const char*  className = nullptr);
   void static_QApplication_setStartDragDistance(int  l);
   void static_QApplication_setStartDragTime(int  ms);
   void static_QApplication_setStyle(QStyle*  arg__1);
   QStyle*  static_QApplication_setStyle(const QString&  arg__1);
   void static_QApplication_setWheelScrollLines(int  arg__1);
   void static_QApplication_setWindowIcon(const QIcon&  icon);
   int  static_QApplication_startDragDistance();
   int  static_QApplication_startDragTime();
   QStyle*  static_QApplication_style();
   QString  styleSheet(QApplication* theWrappedObject) const;
   QWidget*  static_QApplication_topLevelAt(const QPoint&  p);
   QWidget*  static_QApplication_topLevelAt(int  x, int  y);
   QList<QWidget* >  static_QApplication_topLevelWidgets();
   int  static_QApplication_wheelScrollLines();
   QWidget*  static_QApplication_widgetAt(const QPoint&  p);
   QWidget*  static_QApplication_widgetAt(int  x, int  y);
   QIcon  static_QApplication_windowIcon();
};





class PythonQtShell_QBoxLayout : public QBoxLayout
{
public:
    PythonQtShell_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = nullptr):QBoxLayout(arg__1, parent),_wrapper(NULL) {};

   ~PythonQtShell_QBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBoxLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Direction )
enum Direction{
  LeftToRight = QBoxLayout::LeftToRight,   RightToLeft = QBoxLayout::RightToLeft,   TopToBottom = QBoxLayout::TopToBottom,   BottomToTop = QBoxLayout::BottomToTop,   Down = QBoxLayout::Down,   Up = QBoxLayout::Up};
public slots:
QBoxLayout* new_QBoxLayout(QBoxLayout::Direction  arg__1, QWidget*  parent = nullptr);
void delete_QBoxLayout(QBoxLayout* obj) { delete obj; } 
   void addLayout(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void addSpacerItem(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void addSpacing(QBoxLayout* theWrappedObject, int  size);
   void addStretch(QBoxLayout* theWrappedObject, int  stretch = 0);
   void addStrut(QBoxLayout* theWrappedObject, int  arg__1);
   void addWidget(QBoxLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  stretch = 0, Qt::Alignment  alignment = Qt::Alignment());
   QBoxLayout::Direction  direction(QBoxLayout* theWrappedObject) const;
   void insertItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayoutItem* >  arg__2);
   void insertLayout(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QLayout* >  layout, int  stretch = 0);
   void insertSpacerItem(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QSpacerItem* >  spacerItem);
   void insertSpacing(QBoxLayout* theWrappedObject, int  index, int  size);
   void insertStretch(QBoxLayout* theWrappedObject, int  index, int  stretch = 0);
   void insertWidget(QBoxLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, int  stretch = 0, Qt::Alignment  alignment = Qt::Alignment());
   void setDirection(QBoxLayout* theWrappedObject, QBoxLayout::Direction  arg__1);
   void setSpacing(QBoxLayout* theWrappedObject, int  spacing);
   void setStretch(QBoxLayout* theWrappedObject, int  index, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QLayout*  l, int  stretch);
   bool  setStretchFactor(QBoxLayout* theWrappedObject, QWidget*  w, int  stretch);
   int  spacing(QBoxLayout* theWrappedObject) const;
   int  stretch(QBoxLayout* theWrappedObject, int  index) const;
};





class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; } 
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
};





class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos):QContextMenuEvent(reason, pos, globalPos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QContextMenuEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public slots:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; } 
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   int  globalX(QContextMenuEvent* theWrappedObject) const;
   int  globalY(QContextMenuEvent* theWrappedObject) const;
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
   int  x(QContextMenuEvent* theWrappedObject) const;
   int  y(QContextMenuEvent* theWrappedObject) const;
};





class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; } 
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDragMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; } 
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};

   ~PythonQtShell_QDropEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPointF&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; } 
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   QPoint  pos(QDropEvent* theWrappedObject) const;
   const QPointF*  posF(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   QObject*  source(QDropEvent* theWrappedObject) const;
};





class PythonQtShell_QEnterEvent : public QEnterEvent
{
public:
    PythonQtShell_QEnterEvent(const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos):QEnterEvent(localPos, windowPos, screenPos),_wrapper(NULL) {};

   ~PythonQtShell_QEnterEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QEnterEvent* new_QEnterEvent(const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos);
void delete_QEnterEvent(QEnterEvent* obj) { delete obj; } 
   QPoint  globalPos(QEnterEvent* theWrappedObject) const;
   int  globalX(QEnterEvent* theWrappedObject) const;
   int  globalY(QEnterEvent* theWrappedObject) const;
   const QPointF*  localPos(QEnterEvent* theWrappedObject) const;
   QPoint  pos(QEnterEvent* theWrappedObject) const;
   const QPointF*  screenPos(QEnterEvent* theWrappedObject) const;
   const QPointF*  windowPos(QEnterEvent* theWrappedObject) const;
   int  x(QEnterEvent* theWrappedObject) const;
   int  y(QEnterEvent* theWrappedObject) const;
};





class PythonQtShell_QExposeEvent : public QExposeEvent
{
public:
    PythonQtShell_QExposeEvent(const QRegion&  rgn):QExposeEvent(rgn),_wrapper(NULL) {};

   ~PythonQtShell_QExposeEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QExposeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QExposeEvent* new_QExposeEvent(const QRegion&  rgn);
void delete_QExposeEvent(QExposeEvent* obj) { delete obj; } 
   const QRegion*  region(QExposeEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFileOpenEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFileOpenEvent* new_QFileOpenEvent(const QString&  file);
QFileOpenEvent* new_QFileOpenEvent(const QUrl&  url);
void delete_QFileOpenEvent(QFileOpenEvent* obj) { delete obj; } 
   QString  file(QFileOpenEvent* theWrappedObject) const;
   bool  openFile(QFileOpenEvent* theWrappedObject, QFile&  file, QIODevice::OpenMode  flags) const;
   QUrl  url(QFileOpenEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFocusEvent : public QObject
{ Q_OBJECT
public:
public slots:
QFocusEvent* new_QFocusEvent(QEvent::Type  type, Qt::FocusReason  reason = Qt::OtherFocusReason);
void delete_QFocusEvent(QFocusEvent* obj) { delete obj; } 
   bool  gotFocus(QFocusEvent* theWrappedObject) const;
   bool  lostFocus(QFocusEvent* theWrappedObject) const;
   Qt::FocusReason  reason(QFocusEvent* theWrappedObject) const;
};





class PythonQtWrapper_QFontInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFontInfo* new_QFontInfo(const QFont&  arg__1);
QFontInfo* new_QFontInfo(const QFontInfo&  arg__1);
void delete_QFontInfo(QFontInfo* obj) { delete obj; } 
   bool  bold(QFontInfo* theWrappedObject) const;
   bool  exactMatch(QFontInfo* theWrappedObject) const;
   QString  family(QFontInfo* theWrappedObject) const;
   bool  fixedPitch(QFontInfo* theWrappedObject) const;
   bool  italic(QFontInfo* theWrappedObject) const;
   bool  overline(QFontInfo* theWrappedObject) const;
   int  pixelSize(QFontInfo* theWrappedObject) const;
   int  pointSize(QFontInfo* theWrappedObject) const;
   qreal  pointSizeF(QFontInfo* theWrappedObject) const;
   bool  rawMode(QFontInfo* theWrappedObject) const;
   bool  strikeOut(QFontInfo* theWrappedObject) const;
   QFont::Style  style(QFontInfo* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFontInfo* theWrappedObject) const;
   QString  styleName(QFontInfo* theWrappedObject) const;
   void swap(QFontInfo* theWrappedObject, QFontInfo&  other);
   bool  underline(QFontInfo* theWrappedObject) const;
   int  weight(QFontInfo* theWrappedObject) const;
};





class PythonQtWrapper_QFontMetrics : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetrics* new_QFontMetrics(const QFont&  arg__1);
QFontMetrics* new_QFontMetrics(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetrics(QFontMetrics* obj) { delete obj; } 
   int  ascent(QFontMetrics* theWrappedObject) const;
   int  averageCharWidth(QFontMetrics* theWrappedObject) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QRect&  r, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = nullptr) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   QRect  boundingRect(QFontMetrics* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, int  tabstops = 0, int*  tabarray = nullptr) const;
   int  capHeight(QFontMetrics* theWrappedObject) const;
   int  charWidth(QFontMetrics* theWrappedObject, const QString&  str, int  pos) const;
   int  descent(QFontMetrics* theWrappedObject) const;
   QString  elidedText(QFontMetrics* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, int  width, int  flags = 0) const;
   int  height(QFontMetrics* theWrappedObject) const;
   int  horizontalAdvance(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  horizontalAdvance(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len = -1) const;
   bool  inFont(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   bool  inFontUcs4(QFontMetrics* theWrappedObject, uint  ucs4) const;
   int  leading(QFontMetrics* theWrappedObject) const;
   int  leftBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  lineSpacing(QFontMetrics* theWrappedObject) const;
   int  lineWidth(QFontMetrics* theWrappedObject) const;
   int  maxWidth(QFontMetrics* theWrappedObject) const;
   int  minLeftBearing(QFontMetrics* theWrappedObject) const;
   int  minRightBearing(QFontMetrics* theWrappedObject) const;
   int  overlinePos(QFontMetrics* theWrappedObject) const;
   int  rightBearing(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   QSize  size(QFontMetrics* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = nullptr) const;
   int  strikeOutPos(QFontMetrics* theWrappedObject) const;
   void swap(QFontMetrics* theWrappedObject, QFontMetrics&  other);
   QRect  tightBoundingRect(QFontMetrics* theWrappedObject, const QString&  text) const;
   int  underlinePos(QFontMetrics* theWrappedObject) const;
   int  width(QFontMetrics* theWrappedObject, QChar  arg__1) const;
   int  width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len = -1) const;
   int  width(QFontMetrics* theWrappedObject, const QString&  arg__1, int  len, int  flags) const;
   int  xHeight(QFontMetrics* theWrappedObject) const;
};





class PythonQtWrapper_QFontMetricsF : public QObject
{ Q_OBJECT
public:
public slots:
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1);
QFontMetricsF* new_QFontMetricsF(const QFont&  arg__1, QPaintDevice*  pd);
void delete_QFontMetricsF(QFontMetricsF* obj) { delete obj; } 
   qreal  ascent(QFontMetricsF* theWrappedObject) const;
   qreal  averageCharWidth(QFontMetricsF* theWrappedObject) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QRectF&  r, int  flags, const QString&  string, int  tabstops = 0, int*  tabarray = nullptr) const;
   QRectF  boundingRect(QFontMetricsF* theWrappedObject, const QString&  string) const;
   qreal  capHeight(QFontMetricsF* theWrappedObject) const;
   qreal  descent(QFontMetricsF* theWrappedObject) const;
   QString  elidedText(QFontMetricsF* theWrappedObject, const QString&  text, Qt::TextElideMode  mode, qreal  width, int  flags = 0) const;
   qreal  height(QFontMetricsF* theWrappedObject) const;
   qreal  horizontalAdvance(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  horizontalAdvance(QFontMetricsF* theWrappedObject, const QString&  string, int  length = -1) const;
   bool  inFont(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   bool  inFontUcs4(QFontMetricsF* theWrappedObject, uint  ucs4) const;
   qreal  leading(QFontMetricsF* theWrappedObject) const;
   qreal  leftBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  lineSpacing(QFontMetricsF* theWrappedObject) const;
   qreal  lineWidth(QFontMetricsF* theWrappedObject) const;
   qreal  maxWidth(QFontMetricsF* theWrappedObject) const;
   qreal  minLeftBearing(QFontMetricsF* theWrappedObject) const;
   qreal  minRightBearing(QFontMetricsF* theWrappedObject) const;
   qreal  overlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  rightBearing(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   QSizeF  size(QFontMetricsF* theWrappedObject, int  flags, const QString&  str, int  tabstops = 0, int*  tabarray = nullptr) const;
   qreal  strikeOutPos(QFontMetricsF* theWrappedObject) const;
   void swap(QFontMetricsF* theWrappedObject, QFontMetricsF&  other);
   QRectF  tightBoundingRect(QFontMetricsF* theWrappedObject, const QString&  text) const;
   qreal  underlinePos(QFontMetricsF* theWrappedObject) const;
   qreal  width(QFontMetricsF* theWrappedObject, QChar  arg__1) const;
   qreal  width(QFontMetricsF* theWrappedObject, const QString&  string) const;
   qreal  xHeight(QFontMetricsF* theWrappedObject) const;
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QFrame(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QFrame();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
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
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void paintEvent(QPaintEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFrame : public QFrame
{ public:
inline void promoted_drawFrame(QPainter*  arg__1) { this->drawFrame(arg__1); }
inline void promoted_initStyleOption(QStyleOptionFrame*  option) const { this->initStyleOption(option); }
};

class PythonQtWrapper_QFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleMask )
enum StyleMask{
  Shadow_Mask = QFrame::Shadow_Mask,   Shape_Mask = QFrame::Shape_Mask};
public slots:
QFrame* new_QFrame(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QFrame(QFrame* obj) { delete obj; } 
   void drawFrame(QFrame* theWrappedObject, QPainter*  arg__1);
   QRect  frameRect(QFrame* theWrappedObject) const;
   QFrame::Shadow  frameShadow(QFrame* theWrappedObject) const;
   QFrame::Shape  frameShape(QFrame* theWrappedObject) const;
   int  frameStyle(QFrame* theWrappedObject) const;
   int  frameWidth(QFrame* theWrappedObject) const;
   void initStyleOption(QFrame* theWrappedObject, QStyleOptionFrame*  option) const;
   int  lineWidth(QFrame* theWrappedObject) const;
   int  midLineWidth(QFrame* theWrappedObject) const;
   void setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1);
   void setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1);
   void setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1);
   void setFrameStyle(QFrame* theWrappedObject, int  arg__1);
   void setLineWidth(QFrame* theWrappedObject, int  arg__1);
   void setMidLineWidth(QFrame* theWrappedObject, int  arg__1);
};





class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CoordinateMode Spread Type )
enum CoordinateMode{
  LogicalMode = QGradient::LogicalMode,   StretchToDeviceMode = QGradient::StretchToDeviceMode,   ObjectBoundingMode = QGradient::ObjectBoundingMode,   ObjectMode = QGradient::ObjectMode};
enum Spread{
  PadSpread = QGradient::PadSpread,   ReflectSpread = QGradient::ReflectSpread,   RepeatSpread = QGradient::RepeatSpread};
enum Type{
  LinearGradient = QGradient::LinearGradient,   RadialGradient = QGradient::RadialGradient,   ConicalGradient = QGradient::ConicalGradient,   NoGradient = QGradient::NoGradient};
public slots:
QGradient* new_QGradient();
QGradient* new_QGradient(const QGradient& other) {
QGradient* a = new QGradient();
*((QGradient*)a) = other;
return a; }
void delete_QGradient(QGradient* obj) { delete obj; } 
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   bool  __ne__(QGradient* theWrappedObject, const QGradient&  other) const;
   bool  __eq__(QGradient* theWrappedObject, const QGradient&  gradient) const;
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
   void setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops);
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   QGradient::Type  type(QGradient* theWrappedObject) const;
};





class PythonQtShell_QGridLayout : public QGridLayout
{
public:
    PythonQtShell_QGridLayout():QGridLayout(),_wrapper(NULL) {};
    PythonQtShell_QGridLayout(QWidget*  parent):QGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGridLayout();

virtual void childEvent(QChildEvent*  event);
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGridLayout* new_QGridLayout();
QGridLayout* new_QGridLayout(QWidget*  parent);
void delete_QGridLayout(QGridLayout* obj) { delete obj; } 
   void addItem(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayoutItem* >  item, int  row, int  column, int  rowSpan = 1, int  columnSpan = 1, Qt::Alignment  arg__6 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addLayout(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, Qt::Alignment  arg__4 = Qt::Alignment());
   void addWidget(QGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6 = Qt::Alignment());
   QRect  cellRect(QGridLayout* theWrappedObject, int  row, int  column) const;
   int  columnCount(QGridLayout* theWrappedObject) const;
   int  columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const;
   int  columnStretch(QGridLayout* theWrappedObject, int  column) const;
   int  horizontalSpacing(QGridLayout* theWrappedObject) const;
   QLayoutItem*  itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const;
   Qt::Corner  originCorner(QGridLayout* theWrappedObject) const;
   int  rowCount(QGridLayout* theWrappedObject) const;
   int  rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const;
   int  rowStretch(QGridLayout* theWrappedObject, int  row) const;
   void setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize);
   void setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch);
   void setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient);
   void setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1);
   void setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize);
   void setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGridLayout* theWrappedObject, int  spacing);
   void setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing);
   int  spacing(QGridLayout* theWrappedObject) const;
   int  verticalSpacing(QGridLayout* theWrappedObject) const;
};





class PythonQtWrapper_QGuiApplication : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGuiApplication(QGuiApplication* obj) { delete obj; } 
   QList<QWindow* >  static_QGuiApplication_allWindows();
   QString  static_QGuiApplication_applicationDisplayName();
   Qt::ApplicationState  static_QGuiApplication_applicationState();
   void static_QGuiApplication_changeOverrideCursor(const QCursor&  arg__1);
   QClipboard*  static_QGuiApplication_clipboard();
   QString  static_QGuiApplication_desktopFileName();
   bool  static_QGuiApplication_desktopSettingsAware();
   qreal  devicePixelRatio(QGuiApplication* theWrappedObject) const;
   int  static_QGuiApplication_exec();
   QObject*  static_QGuiApplication_focusObject();
   QWindow*  static_QGuiApplication_focusWindow();
   QFont  static_QGuiApplication_font();
   QInputMethod*  static_QGuiApplication_inputMethod();
   bool  static_QGuiApplication_isFallbackSessionManagementEnabled();
   bool  static_QGuiApplication_isLeftToRight();
   bool  static_QGuiApplication_isRightToLeft();
   bool  isSavingSession(QGuiApplication* theWrappedObject) const;
   bool  isSessionRestored(QGuiApplication* theWrappedObject) const;
   Qt::KeyboardModifiers  static_QGuiApplication_keyboardModifiers();
   Qt::LayoutDirection  static_QGuiApplication_layoutDirection();
   QWindow*  static_QGuiApplication_modalWindow();
   Qt::MouseButtons  static_QGuiApplication_mouseButtons();
   QCursor*  static_QGuiApplication_overrideCursor();
   QPalette  static_QGuiApplication_palette();
   QString  static_QGuiApplication_platformName();
   QScreen*  static_QGuiApplication_primaryScreen();
   Qt::KeyboardModifiers  static_QGuiApplication_queryKeyboardModifiers();
   bool  static_QGuiApplication_quitOnLastWindowClosed();
   void static_QGuiApplication_restoreOverrideCursor();
   QScreen*  static_QGuiApplication_screenAt(const QPoint&  point);
   QList<QScreen* >  static_QGuiApplication_screens();
   QString  sessionId(QGuiApplication* theWrappedObject) const;
   QString  sessionKey(QGuiApplication* theWrappedObject) const;
   void static_QGuiApplication_setApplicationDisplayName(const QString&  name);
   void static_QGuiApplication_setDesktopFileName(const QString&  name);
   void static_QGuiApplication_setDesktopSettingsAware(bool  on);
   void static_QGuiApplication_setFallbackSessionManagementEnabled(bool  arg__1);
   void static_QGuiApplication_setFont(const QFont&  arg__1);
   void static_QGuiApplication_setLayoutDirection(Qt::LayoutDirection  direction);
   void static_QGuiApplication_setOverrideCursor(const QCursor&  arg__1);
   void static_QGuiApplication_setPalette(const QPalette&  pal);
   void static_QGuiApplication_setQuitOnLastWindowClosed(bool  quit);
   void static_QGuiApplication_setWindowIcon(const QIcon&  icon);
   QStyleHints*  static_QGuiApplication_styleHints();
   void static_QGuiApplication_sync();
   QWindow*  static_QGuiApplication_topLevelAt(const QPoint&  pos);
   QList<QWindow* >  static_QGuiApplication_topLevelWindows();
   QIcon  static_QGuiApplication_windowIcon();
};





class PythonQtShell_QHBoxLayout : public QHBoxLayout
{
public:
    PythonQtShell_QHBoxLayout():QHBoxLayout(),_wrapper(NULL) {};
    PythonQtShell_QHBoxLayout(QWidget*  parent):QHBoxLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHBoxLayout();

virtual void addItem(QLayoutItem*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual int  count() const;
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual int  indexOf(QWidget*  arg__1) const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayoutItem*  takeAt(int  index);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QHBoxLayout* new_QHBoxLayout();
QHBoxLayout* new_QHBoxLayout(QWidget*  parent);
void delete_QHBoxLayout(QHBoxLayout* obj) { delete obj; } 
};





class PythonQtWrapper_QHelpEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHelpEvent* new_QHelpEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos);
void delete_QHelpEvent(QHelpEvent* obj) { delete obj; } 
   const QPoint*  globalPos(QHelpEvent* theWrappedObject) const;
   int  globalX(QHelpEvent* theWrappedObject) const;
   int  globalY(QHelpEvent* theWrappedObject) const;
   const QPoint*  pos(QHelpEvent* theWrappedObject) const;
   int  x(QHelpEvent* theWrappedObject) const;
   int  y(QHelpEvent* theWrappedObject) const;
};





class PythonQtWrapper_QHideEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHideEvent* new_QHideEvent();
void delete_QHideEvent(QHideEvent* obj) { delete obj; } 
};





class PythonQtShell_QHoverEvent : public QHoverEvent
{
public:
    PythonQtShell_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QHoverEvent(type, pos, oldPos, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QHoverEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHoverEvent : public QObject
{ Q_OBJECT
public:
public slots:
QHoverEvent* new_QHoverEvent(QEvent::Type  type, const QPointF&  pos, const QPointF&  oldPos, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QHoverEvent(QHoverEvent* obj) { delete obj; } 
   QPoint  oldPos(QHoverEvent* theWrappedObject) const;
   const QPointF*  oldPosF(QHoverEvent* theWrappedObject) const;
   QPoint  pos(QHoverEvent* theWrappedObject) const;
   const QPointF*  posF(QHoverEvent* theWrappedObject) const;
};





class PythonQtWrapper_QIconDragEvent : public QObject
{ Q_OBJECT
public:
public slots:
QIconDragEvent* new_QIconDragEvent();
void delete_QIconDragEvent(QIconDragEvent* obj) { delete obj; } 
};





class PythonQtShell_QInputEvent : public QInputEvent
{
public:
    PythonQtShell_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier):QInputEvent(type, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QInputEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputEvent : public QObject
{ Q_OBJECT
public:
public slots:
QInputEvent* new_QInputEvent(QEvent::Type  type, Qt::KeyboardModifiers  modifiers = Qt::NoModifier);
void delete_QInputEvent(QInputEvent* obj) { delete obj; } 
   Qt::KeyboardModifiers  modifiers(QInputEvent* theWrappedObject) const;
   void setModifiers(QInputEvent* theWrappedObject, Qt::KeyboardModifiers  amodifiers);
   void setTimestamp(QInputEvent* theWrappedObject, ulong  atimestamp);
   ulong  timestamp(QInputEvent* theWrappedObject) const;
};





class PythonQtWrapper_QInputMethod : public QObject
{ Q_OBJECT
public:
public slots:
   QRectF  anchorRectangle(QInputMethod* theWrappedObject) const;
   QRectF  cursorRectangle(QInputMethod* theWrappedObject) const;
   Qt::LayoutDirection  inputDirection(QInputMethod* theWrappedObject) const;
   QRectF  inputItemClipRectangle(QInputMethod* theWrappedObject) const;
   QRectF  inputItemRectangle(QInputMethod* theWrappedObject) const;
   QTransform  inputItemTransform(QInputMethod* theWrappedObject) const;
   bool  isAnimating(QInputMethod* theWrappedObject) const;
   bool  isVisible(QInputMethod* theWrappedObject) const;
   QRectF  keyboardRectangle(QInputMethod* theWrappedObject) const;
   QLocale  locale(QInputMethod* theWrappedObject) const;
   QVariant  static_QInputMethod_queryFocusObject(Qt::InputMethodQuery  query, QVariant  argument);
   void setInputItemRectangle(QInputMethod* theWrappedObject, const QRectF&  rect);
   void setInputItemTransform(QInputMethod* theWrappedObject, const QTransform&  transform);
   void setVisible(QInputMethod* theWrappedObject, bool  visible);
};





class PythonQtWrapper_QInputMethodEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AttributeType )
enum AttributeType{
  TextFormat = QInputMethodEvent::TextFormat,   Cursor = QInputMethodEvent::Cursor,   Language = QInputMethodEvent::Language,   Ruby = QInputMethodEvent::Ruby,   Selection = QInputMethodEvent::Selection};
public slots:
QInputMethodEvent* new_QInputMethodEvent();
QInputMethodEvent* new_QInputMethodEvent(const QInputMethodEvent&  other);
QInputMethodEvent* new_QInputMethodEvent(const QString&  preeditText, const QList<QInputMethodEvent::Attribute >&  attributes);
void delete_QInputMethodEvent(QInputMethodEvent* obj) { delete obj; } 
   const QList<QInputMethodEvent::Attribute >*  attributes(QInputMethodEvent* theWrappedObject) const;
   const QString*  commitString(QInputMethodEvent* theWrappedObject) const;
   const QString*  preeditString(QInputMethodEvent* theWrappedObject) const;
   int  replacementLength(QInputMethodEvent* theWrappedObject) const;
   int  replacementStart(QInputMethodEvent* theWrappedObject) const;
   void setCommitString(QInputMethodEvent* theWrappedObject, const QString&  commitString, int  replaceFrom = 0, int  replaceLength = 0);
};





class PythonQtShell_QInputMethodEvent__Attribute : public QInputMethodEvent::Attribute
{
public:
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l):QInputMethodEvent::Attribute(typ, s, l),_wrapper(NULL) {};
    PythonQtShell_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val):QInputMethodEvent::Attribute(typ, s, l, val),_wrapper(NULL) {};

   ~PythonQtShell_QInputMethodEvent__Attribute();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QInputMethodEvent__Attribute : public QObject
{ Q_OBJECT
public:
public slots:
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l);
QInputMethodEvent::Attribute* new_QInputMethodEvent__Attribute(QInputMethodEvent::AttributeType  typ, int  s, int  l, QVariant  val);
void delete_QInputMethodEvent__Attribute(QInputMethodEvent::Attribute* obj) { delete obj; } 
void py_set_length(QInputMethodEvent::Attribute* theWrappedObject, int  length){ theWrappedObject->length = length; }
int  py_get_length(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->length; }
void py_set_start(QInputMethodEvent::Attribute* theWrappedObject, int  start){ theWrappedObject->start = start; }
int  py_get_start(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->start; }
void py_set_type(QInputMethodEvent::Attribute* theWrappedObject, QInputMethodEvent::AttributeType  type){ theWrappedObject->type = type; }
QInputMethodEvent::AttributeType  py_get_type(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->type; }
void py_set_value(QInputMethodEvent::Attribute* theWrappedObject, QVariant  value){ theWrappedObject->value = value; }
QVariant  py_get_value(QInputMethodEvent::Attribute* theWrappedObject){ return theWrappedObject->value; }
};


