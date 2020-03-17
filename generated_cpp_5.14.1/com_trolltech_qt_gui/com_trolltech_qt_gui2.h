#include <PythonQt.h>
#include <QObject>
#include <QPair>
#include <QStringList>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfontdatabase.h>
#include <qfontdialog.h>
#include <qfontinfo.h>
#include <qformlayout.h>
#include <qframe.h>
#include <qgesture.h>
#include <qgesturerecognizer.h>
#include <qgraphicsanchorlayout.h>
#include <qgraphicseffect.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qline.h>
#include <qmargins.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qrect.h>
#include <qscreen.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtimeline.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtWrapper_QFontDatabase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SystemFont WritingSystem )
enum SystemFont{
  GeneralFont = QFontDatabase::GeneralFont,   FixedFont = QFontDatabase::FixedFont,   TitleFont = QFontDatabase::TitleFont,   SmallestReadableFont = QFontDatabase::SmallestReadableFont};
enum WritingSystem{
  Any = QFontDatabase::Any,   Latin = QFontDatabase::Latin,   Greek = QFontDatabase::Greek,   Cyrillic = QFontDatabase::Cyrillic,   Armenian = QFontDatabase::Armenian,   Hebrew = QFontDatabase::Hebrew,   Arabic = QFontDatabase::Arabic,   Syriac = QFontDatabase::Syriac,   Thaana = QFontDatabase::Thaana,   Devanagari = QFontDatabase::Devanagari,   Bengali = QFontDatabase::Bengali,   Gurmukhi = QFontDatabase::Gurmukhi,   Gujarati = QFontDatabase::Gujarati,   Oriya = QFontDatabase::Oriya,   Tamil = QFontDatabase::Tamil,   Telugu = QFontDatabase::Telugu,   Kannada = QFontDatabase::Kannada,   Malayalam = QFontDatabase::Malayalam,   Sinhala = QFontDatabase::Sinhala,   Thai = QFontDatabase::Thai,   Lao = QFontDatabase::Lao,   Tibetan = QFontDatabase::Tibetan,   Myanmar = QFontDatabase::Myanmar,   Georgian = QFontDatabase::Georgian,   Khmer = QFontDatabase::Khmer,   SimplifiedChinese = QFontDatabase::SimplifiedChinese,   TraditionalChinese = QFontDatabase::TraditionalChinese,   Japanese = QFontDatabase::Japanese,   Korean = QFontDatabase::Korean,   Vietnamese = QFontDatabase::Vietnamese,   Symbol = QFontDatabase::Symbol,   Other = QFontDatabase::Other,   Ogham = QFontDatabase::Ogham,   Runic = QFontDatabase::Runic,   Nko = QFontDatabase::Nko,   WritingSystemsCount = QFontDatabase::WritingSystemsCount};
public slots:
QFontDatabase* new_QFontDatabase();
QFontDatabase* new_QFontDatabase(const QFontDatabase& other) {
QFontDatabase* a = new QFontDatabase();
*((QFontDatabase*)a) = other;
return a; }
void delete_QFontDatabase(QFontDatabase* obj) { delete obj; } 
   int  static_QFontDatabase_addApplicationFont(const QString&  fileName);
   int  static_QFontDatabase_addApplicationFontFromData(const QByteArray&  fontData);
   QStringList  static_QFontDatabase_applicationFontFamilies(int  id);
   bool  bold(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const;
   QStringList  families(QFontDatabase* theWrappedObject, QFontDatabase::WritingSystem  writingSystem = QFontDatabase::Any) const;
   QFont  font(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style, int  pointSize) const;
   bool  hasFamily(QFontDatabase* theWrappedObject, const QString&  family) const;
   bool  isBitmapScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style = QString()) const;
   bool  isFixedPitch(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style = QString()) const;
   bool  isPrivateFamily(QFontDatabase* theWrappedObject, const QString&  family) const;
   bool  isScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style = QString()) const;
   bool  isSmoothlyScalable(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style = QString()) const;
   bool  italic(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const;
   QList<int >  pointSizes(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style = QString());
   bool  static_QFontDatabase_removeAllApplicationFonts();
   bool  static_QFontDatabase_removeApplicationFont(int  id);
   QList<int >  smoothSizes(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style);
   QList<int >  static_QFontDatabase_standardSizes();
   QString  styleString(QFontDatabase* theWrappedObject, const QFont&  font);
   QString  styleString(QFontDatabase* theWrappedObject, const QFontInfo&  fontInfo);
   QStringList  styles(QFontDatabase* theWrappedObject, const QString&  family) const;
   bool  static_QFontDatabase_supportsThreadedFontRendering();
   QFont  static_QFontDatabase_systemFont(QFontDatabase::SystemFont  type);
   int  weight(QFontDatabase* theWrappedObject, const QString&  family, const QString&  style) const;
   QString  static_QFontDatabase_writingSystemName(QFontDatabase::WritingSystem  writingSystem);
   QString  static_QFontDatabase_writingSystemSample(QFontDatabase::WritingSystem  writingSystem);
   QList<QFontDatabase::WritingSystem >  writingSystems(QFontDatabase* theWrappedObject) const;
   QList<QFontDatabase::WritingSystem >  writingSystems(QFontDatabase* theWrappedObject, const QString&  family) const;
};





class PythonQtShell_QFontDialog : public QFontDialog
{
public:
    PythonQtShell_QFontDialog(QWidget*  parent = nullptr):QFontDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QFontDialog(const QFont&  initial, QWidget*  parent = nullptr):QFontDialog(initial, parent),_wrapper(NULL) {};

   ~PythonQtShell_QFontDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
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
virtual bool  eventFilter(QObject*  object, QEvent*  event);
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

class PythonQtPublicPromoter_QFontDialog : public QFontDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_done(int  result) { this->done(result); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void py_q_changeEvent(QEvent*  event) { QFontDialog::changeEvent(event); }
inline void py_q_done(int  result) { QFontDialog::done(result); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QFontDialog::eventFilter(object, event); }
inline void py_q_setVisible(bool  visible) { QFontDialog::setVisible(visible); }
};

class PythonQtWrapper_QFontDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontDialogOption )
Q_FLAGS(FontDialogOptions )
enum FontDialogOption{
  NoButtons = QFontDialog::NoButtons,   DontUseNativeDialog = QFontDialog::DontUseNativeDialog,   ScalableFonts = QFontDialog::ScalableFonts,   NonScalableFonts = QFontDialog::NonScalableFonts,   MonospacedFonts = QFontDialog::MonospacedFonts,   ProportionalFonts = QFontDialog::ProportionalFonts};
Q_DECLARE_FLAGS(FontDialogOptions, FontDialogOption)
public slots:
QFontDialog* new_QFontDialog(QWidget*  parent = nullptr);
QFontDialog* new_QFontDialog(const QFont&  initial, QWidget*  parent = nullptr);
void delete_QFontDialog(QFontDialog* obj) { delete obj; } 
   void py_q_changeEvent(QFontDialog* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_changeEvent(event));}
   QFont  currentFont(QFontDialog* theWrappedObject) const;
   void py_q_done(QFontDialog* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_done(result));}
   bool  py_q_eventFilter(QFontDialog* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_eventFilter(object, event));}
   QFont  static_QFontDialog_getFont(bool*  ok, QWidget*  parent = nullptr);
   QFont  static_QFontDialog_getFont(bool*  ok, const QFont&  initial, QWidget*  parent = nullptr, const QString&  title = QString(), QFontDialog::FontDialogOptions  options = QFontDialog::FontDialogOptions());
   void open(QFontDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QFontDialog::FontDialogOptions  options(QFontDialog* theWrappedObject) const;
   QFont  selectedFont(QFontDialog* theWrappedObject) const;
   void setCurrentFont(QFontDialog* theWrappedObject, const QFont&  font);
   void setOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option, bool  on = true);
   void setOptions(QFontDialog* theWrappedObject, QFontDialog::FontDialogOptions  options);
   void py_q_setVisible(QFontDialog* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QFontDialog*)theWrappedObject)->py_q_setVisible(visible));}
   bool  testOption(QFontDialog* theWrappedObject, QFontDialog::FontDialogOption  option) const;
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





class PythonQtShell_QFormLayout : public QFormLayout
{
public:
    PythonQtShell_QFormLayout(QWidget*  parent = nullptr):QFormLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QFormLayout();

virtual void addItem(QLayoutItem*  item);
virtual void childEvent(QChildEvent*  e);
virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual int  count() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  width) const;
virtual int  indexOf(QWidget*  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayoutItem*  itemAt(int  index) const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  rect);
virtual QSize  sizeHint() const;
virtual QLayoutItem*  takeAt(int  index);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFormLayout : public QFormLayout
{ public:
inline void py_q_addItem(QLayoutItem*  item) { QFormLayout::addItem(item); }
inline int  py_q_count() const { return QFormLayout::count(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QFormLayout::expandingDirections(); }
inline bool  py_q_hasHeightForWidth() const { return QFormLayout::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  width) const { return QFormLayout::heightForWidth(width); }
inline void py_q_invalidate() { QFormLayout::invalidate(); }
inline QLayoutItem*  py_q_itemAt(int  index) const { return QFormLayout::itemAt(index); }
inline QSize  py_q_minimumSize() const { return QFormLayout::minimumSize(); }
inline void py_q_setGeometry(const QRect&  rect) { QFormLayout::setGeometry(rect); }
inline QSize  py_q_sizeHint() const { return QFormLayout::sizeHint(); }
inline QLayoutItem*  py_q_takeAt(int  index) { return QFormLayout::takeAt(index); }
};

class PythonQtWrapper_QFormLayout : public QObject
{ Q_OBJECT
public:
public slots:
QFormLayout* new_QFormLayout(QWidget*  parent = nullptr);
void delete_QFormLayout(QFormLayout* obj) { delete obj; } 
   void py_q_addItem(QFormLayout* theWrappedObject, QLayoutItem*  item){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_addItem(item));}
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void addRow(QFormLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void addRow(QFormLayout* theWrappedObject, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field);
   int  py_q_count(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_count());}
   Qt::Orientations  py_q_expandingDirections(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_expandingDirections());}
   QFormLayout::FieldGrowthPolicy  fieldGrowthPolicy(QFormLayout* theWrappedObject) const;
   Qt::Alignment  formAlignment(QFormLayout* theWrappedObject) const;
   void getItemPosition(QFormLayout* theWrappedObject, int  index, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void getLayoutPosition(QFormLayout* theWrappedObject, QLayout*  layout, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   void getWidgetPosition(QFormLayout* theWrappedObject, QWidget*  widget, int*  rowPtr, QFormLayout::ItemRole*  rolePtr) const;
   bool  hasHeightForWidth(QFormLayout* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  heightForWidth(QFormLayout* theWrappedObject, int  width) const;
   int  py_q_heightForWidth(QFormLayout* theWrappedObject, int  width) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_heightForWidth(width));}
   int  horizontalSpacing(QFormLayout* theWrappedObject) const;
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  label, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QLayout* >  field);
   void insertRow(QFormLayout* theWrappedObject, int  row, const QString&  labelText, PythonQtPassOwnershipToCPP<QWidget* >  field);
   void py_q_invalidate(QFormLayout* theWrappedObject){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_invalidate());}
   QLayoutItem*  py_q_itemAt(QFormLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_itemAt(index));}
   QLayoutItem*  itemAt(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role) const;
   Qt::Alignment  labelAlignment(QFormLayout* theWrappedObject) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QLayout*  field) const;
   QWidget*  labelForField(QFormLayout* theWrappedObject, QWidget*  field) const;
   QSize  py_q_minimumSize(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_minimumSize());}
   void removeRow(QFormLayout* theWrappedObject, QLayout*  layout);
   void removeRow(QFormLayout* theWrappedObject, QWidget*  widget);
   void removeRow(QFormLayout* theWrappedObject, int  row);
   int  rowCount(QFormLayout* theWrappedObject) const;
   QFormLayout::RowWrapPolicy  rowWrapPolicy(QFormLayout* theWrappedObject) const;
   void setFieldGrowthPolicy(QFormLayout* theWrappedObject, QFormLayout::FieldGrowthPolicy  policy);
   void setFormAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void py_q_setGeometry(QFormLayout* theWrappedObject, const QRect&  rect){  (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setItem(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayoutItem* >  item);
   void setLabelAlignment(QFormLayout* theWrappedObject, Qt::Alignment  alignment);
   void setLayout(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QLayout* >  layout);
   void setRowWrapPolicy(QFormLayout* theWrappedObject, QFormLayout::RowWrapPolicy  policy);
   void setSpacing(QFormLayout* theWrappedObject, int  arg__1);
   void setVerticalSpacing(QFormLayout* theWrappedObject, int  spacing);
   void setWidget(QFormLayout* theWrappedObject, int  row, QFormLayout::ItemRole  role, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   QSize  sizeHint(QFormLayout* theWrappedObject) const;
   QSize  py_q_sizeHint(QFormLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_sizeHint());}
   int  spacing(QFormLayout* theWrappedObject) const;
   QLayoutItem*  py_q_takeAt(QFormLayout* theWrappedObject, int  index){  return (((PythonQtPublicPromoter_QFormLayout*)theWrappedObject)->py_q_takeAt(index));}
   int  verticalSpacing(QFormLayout* theWrappedObject) const;
    bool __nonzero__(QFormLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QFrame : public QFrame
{
public:
    PythonQtShell_QFrame(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QFrame(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QFrame();

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
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
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

class PythonQtPublicPromoter_QFrame : public QFrame
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_drawFrame(QPainter*  arg__1) { this->drawFrame(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initStyleOption(QStyleOptionFrame*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QFrame::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QFrame::event(e); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QFrame::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QFrame::sizeHint(); }
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
   void py_q_changeEvent(QFrame* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void drawFrame(QFrame* theWrappedObject, QPainter*  arg__1);
   bool  py_q_event(QFrame* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_event(e));}
   QRect  frameRect(QFrame* theWrappedObject) const;
   QFrame::Shadow  frameShadow(QFrame* theWrappedObject) const;
   QFrame::Shape  frameShape(QFrame* theWrappedObject) const;
   int  frameStyle(QFrame* theWrappedObject) const;
   int  frameWidth(QFrame* theWrappedObject) const;
   void initStyleOption(QFrame* theWrappedObject, QStyleOptionFrame*  option) const;
   int  lineWidth(QFrame* theWrappedObject) const;
   int  midLineWidth(QFrame* theWrappedObject) const;
   void py_q_paintEvent(QFrame* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1);
   void setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1);
   void setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1);
   void setFrameStyle(QFrame* theWrappedObject, int  arg__1);
   void setLineWidth(QFrame* theWrappedObject, int  arg__1);
   void setMidLineWidth(QFrame* theWrappedObject, int  arg__1);
   QSize  sizeHint(QFrame* theWrappedObject) const;
   QSize  py_q_sizeHint(QFrame* theWrappedObject) const{  return (((PythonQtPublicPromoter_QFrame*)theWrappedObject)->py_q_sizeHint());}
};





class PythonQtWrapper_QGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GestureCancelPolicy )
enum GestureCancelPolicy{
  CancelNone = QGesture::CancelNone,   CancelAllInContext = QGesture::CancelAllInContext};
public slots:
QGesture* new_QGesture(QObject*  parent = nullptr);
void delete_QGesture(QGesture* obj) { delete obj; } 
   QGesture::GestureCancelPolicy  gestureCancelPolicy(QGesture* theWrappedObject) const;
   Qt::GestureType  gestureType(QGesture* theWrappedObject) const;
   bool  hasHotSpot(QGesture* theWrappedObject) const;
   QPointF  hotSpot(QGesture* theWrappedObject) const;
   void setGestureCancelPolicy(QGesture* theWrappedObject, QGesture::GestureCancelPolicy  policy);
   void setHotSpot(QGesture* theWrappedObject, const QPointF&  value);
   Qt::GestureState  state(QGesture* theWrappedObject) const;
   void unsetHotSpot(QGesture* theWrappedObject);
    QString py_toString(QGesture*);
};





class PythonQtWrapper_QGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QGestureEvent* new_QGestureEvent(const QList<QGesture* >&  gestures);
void delete_QGestureEvent(QGestureEvent* obj) { delete obj; } 
   void accept(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void accept(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   QList<QGesture* >  activeGestures(QGestureEvent* theWrappedObject) const;
   QList<QGesture* >  canceledGestures(QGestureEvent* theWrappedObject) const;
   QGesture*  gesture(QGestureEvent* theWrappedObject, Qt::GestureType  type) const;
   QList<QGesture* >  gestures(QGestureEvent* theWrappedObject) const;
   void ignore(QGestureEvent* theWrappedObject, QGesture*  arg__1);
   void ignore(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1);
   bool  isAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1) const;
   bool  isAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1) const;
   QPointF  mapToGraphicsScene(QGestureEvent* theWrappedObject, const QPointF&  gesturePoint) const;
   void setAccepted(QGestureEvent* theWrappedObject, QGesture*  arg__1, bool  arg__2);
   void setAccepted(QGestureEvent* theWrappedObject, Qt::GestureType  arg__1, bool  arg__2);
   void setWidget(QGestureEvent* theWrappedObject, QWidget*  widget);
   QWidget*  widget(QGestureEvent* theWrappedObject) const;
    QString py_toString(QGestureEvent*);
};





class PythonQtShell_QGestureRecognizer : public QGestureRecognizer
{
public:
    PythonQtShell_QGestureRecognizer():QGestureRecognizer(),_wrapper(NULL) {};

   ~PythonQtShell_QGestureRecognizer();

virtual QGesture*  create(QObject*  target);
virtual QGestureRecognizer::Result  recognize(QGesture*  state, QObject*  watched, QEvent*  event);
virtual void reset(QGesture*  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGestureRecognizer : public QGestureRecognizer
{ public:
inline QGesture*  py_q_create(QObject*  target) { return QGestureRecognizer::create(target); }
inline QGestureRecognizer::Result  py_q_recognize(QGesture*  state, QObject*  watched, QEvent*  event) { return this->recognize(state, watched, event); }
inline void py_q_reset(QGesture*  state) { QGestureRecognizer::reset(state); }
};

class PythonQtWrapper_QGestureRecognizer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ResultFlag )
Q_FLAGS(Result )
enum ResultFlag{
  Ignore = QGestureRecognizer::Ignore,   MayBeGesture = QGestureRecognizer::MayBeGesture,   TriggerGesture = QGestureRecognizer::TriggerGesture,   FinishGesture = QGestureRecognizer::FinishGesture,   CancelGesture = QGestureRecognizer::CancelGesture,   ResultState_Mask = QGestureRecognizer::ResultState_Mask,   ConsumeEventHint = QGestureRecognizer::ConsumeEventHint,   ResultHint_Mask = QGestureRecognizer::ResultHint_Mask};
Q_DECLARE_FLAGS(Result, ResultFlag)
public slots:
QGestureRecognizer* new_QGestureRecognizer();
void delete_QGestureRecognizer(QGestureRecognizer* obj) { delete obj; } 
   QGesture*  create(QGestureRecognizer* theWrappedObject, QObject*  target);
   QGesture*  py_q_create(QGestureRecognizer* theWrappedObject, QObject*  target){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_create(target));}
   QGestureRecognizer::Result  recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event);
   QGestureRecognizer::Result  py_q_recognize(QGestureRecognizer* theWrappedObject, QGesture*  state, QObject*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_recognize(state, watched, event));}
   Qt::GestureType  static_QGestureRecognizer_registerRecognizer(QGestureRecognizer*  recognizer);
   void reset(QGestureRecognizer* theWrappedObject, QGesture*  state);
   void py_q_reset(QGestureRecognizer* theWrappedObject, QGesture*  state){  (((PythonQtPublicPromoter_QGestureRecognizer*)theWrappedObject)->py_q_reset(state));}
   void static_QGestureRecognizer_unregisterRecognizer(Qt::GestureType  type);
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





class PythonQtWrapper_QGraphicsAnchor : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QGraphicsAnchor(QGraphicsAnchor* obj) { delete obj; } 
   void setSizePolicy(QGraphicsAnchor* theWrappedObject, QSizePolicy::Policy  policy);
   void setSpacing(QGraphicsAnchor* theWrappedObject, qreal  spacing);
   QSizePolicy::Policy  sizePolicy(QGraphicsAnchor* theWrappedObject) const;
   qreal  spacing(QGraphicsAnchor* theWrappedObject) const;
   void unsetSpacing(QGraphicsAnchor* theWrappedObject);
};





class PythonQtShell_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{
public:
    PythonQtShell_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsAnchorLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsAnchorLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsAnchorLayout : public QGraphicsAnchorLayout
{ public:
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline int  py_q_count() const { return QGraphicsAnchorLayout::count(); }
inline void py_q_invalidate() { QGraphicsAnchorLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsAnchorLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsAnchorLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsAnchorLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsAnchorLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsAnchorLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsAnchorLayout* new_QGraphicsAnchorLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsAnchorLayout(QGraphicsAnchorLayout* obj) { delete obj; } 
   QGraphicsAnchor*  addAnchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   void addAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, QGraphicsLayoutItem*  secondItem, Qt::Orientations  orientations = Qt::Horizontal | Qt::Vertical);
   void addCornerAnchors(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::Corner  firstCorner, QGraphicsLayoutItem*  secondItem, Qt::Corner  secondCorner);
   QGraphicsAnchor*  anchor(QGraphicsAnchorLayout* theWrappedObject, QGraphicsLayoutItem*  firstItem, Qt::AnchorPoint  firstEdge, QGraphicsLayoutItem*  secondItem, Qt::AnchorPoint  secondEdge);
   int  py_q_count(QGraphicsAnchorLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_count());}
   qreal  horizontalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
   void py_q_invalidate(QGraphicsAnchorLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsAnchorLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_itemAt(index));}
   void py_q_removeAt(QGraphicsAnchorLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_removeAt(index));}
   void setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect);
   void py_q_setGeometry(QGraphicsAnchorLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   void setVerticalSpacing(QGraphicsAnchorLayout* theWrappedObject, qreal  spacing);
   QSizeF  sizeHint(QGraphicsAnchorLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  py_q_sizeHint(QGraphicsAnchorLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsAnchorLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  verticalSpacing(QGraphicsAnchorLayout* theWrappedObject) const;
};





class PythonQtShell_QGraphicsBlurEffect : public QGraphicsBlurEffect
{
public:
    PythonQtShell_QGraphicsBlurEffect(QObject*  parent = nullptr):QGraphicsBlurEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsBlurEffect();

virtual QRectF  boundingRectFor(const QRectF&  rect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsBlurEffect : public QGraphicsBlurEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline QRectF  py_q_boundingRectFor(const QRectF&  rect) const { return QGraphicsBlurEffect::boundingRectFor(rect); }
inline void py_q_draw(QPainter*  painter) { QGraphicsBlurEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsBlurEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BlurHint )
Q_FLAGS(BlurHints )
enum BlurHint{
  PerformanceHint = QGraphicsBlurEffect::PerformanceHint,   QualityHint = QGraphicsBlurEffect::QualityHint,   AnimationHint = QGraphicsBlurEffect::AnimationHint};
Q_DECLARE_FLAGS(BlurHints, BlurHint)
public slots:
QGraphicsBlurEffect* new_QGraphicsBlurEffect(QObject*  parent = nullptr);
void delete_QGraphicsBlurEffect(QGraphicsBlurEffect* obj) { delete obj; } 
   QGraphicsBlurEffect::BlurHints  blurHints(QGraphicsBlurEffect* theWrappedObject) const;
   qreal  blurRadius(QGraphicsBlurEffect* theWrappedObject) const;
   QRectF  py_q_boundingRectFor(QGraphicsBlurEffect* theWrappedObject, const QRectF&  rect) const{  return (((PythonQtPublicPromoter_QGraphicsBlurEffect*)theWrappedObject)->py_q_boundingRectFor(rect));}
   void py_q_draw(QGraphicsBlurEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsBlurEffect*)theWrappedObject)->py_q_draw(painter));}
};





class PythonQtShell_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{
public:
    PythonQtShell_QGraphicsColorizeEffect(QObject*  parent = nullptr):QGraphicsColorizeEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsColorizeEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsColorizeEffect : public QGraphicsColorizeEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_draw(QPainter*  painter) { QGraphicsColorizeEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsColorizeEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsColorizeEffect* new_QGraphicsColorizeEffect(QObject*  parent = nullptr);
void delete_QGraphicsColorizeEffect(QGraphicsColorizeEffect* obj) { delete obj; } 
   QColor  color(QGraphicsColorizeEffect* theWrappedObject) const;
   void py_q_draw(QGraphicsColorizeEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsColorizeEffect*)theWrappedObject)->py_q_draw(painter));}
   qreal  strength(QGraphicsColorizeEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{
public:
    PythonQtShell_QGraphicsDropShadowEffect(QObject*  parent = nullptr):QGraphicsDropShadowEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsDropShadowEffect();

virtual QRectF  boundingRectFor(const QRectF&  rect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsDropShadowEffect : public QGraphicsDropShadowEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline QRectF  py_q_boundingRectFor(const QRectF&  rect) const { return QGraphicsDropShadowEffect::boundingRectFor(rect); }
inline void py_q_draw(QPainter*  painter) { QGraphicsDropShadowEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsDropShadowEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsDropShadowEffect* new_QGraphicsDropShadowEffect(QObject*  parent = nullptr);
void delete_QGraphicsDropShadowEffect(QGraphicsDropShadowEffect* obj) { delete obj; } 
   qreal  blurRadius(QGraphicsDropShadowEffect* theWrappedObject) const;
   QRectF  py_q_boundingRectFor(QGraphicsDropShadowEffect* theWrappedObject, const QRectF&  rect) const{  return (((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->py_q_boundingRectFor(rect));}
   QColor  color(QGraphicsDropShadowEffect* theWrappedObject) const;
   void py_q_draw(QGraphicsDropShadowEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsDropShadowEffect*)theWrappedObject)->py_q_draw(painter));}
   QPointF  offset(QGraphicsDropShadowEffect* theWrappedObject) const;
   qreal  xOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
   qreal  yOffset(QGraphicsDropShadowEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsEffect : public QGraphicsEffect
{
public:
    PythonQtShell_QGraphicsEffect(QObject*  parent = nullptr):QGraphicsEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEffect : public QGraphicsEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void promoted_drawSource(QPainter*  painter) { this->drawSource(painter); }
inline QRectF  promoted_sourceBoundingRect(Qt::CoordinateSystem  system = Qt::LogicalCoordinates) const { return this->sourceBoundingRect(system); }
inline void promoted_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { this->sourceChanged(flags); }
inline bool  promoted_sourceIsPixmap() const { return this->sourceIsPixmap(); }
inline QPixmap  promoted_sourcePixmap(Qt::CoordinateSystem  system = Qt::LogicalCoordinates, QPoint*  offset = nullptr, QGraphicsEffect::PixmapPadMode  mode = QGraphicsEffect::PadToEffectiveBoundingRect) const { return this->sourcePixmap(system, offset, mode); }
inline void promoted_updateBoundingRect() { this->updateBoundingRect(); }
inline QRectF  py_q_boundingRectFor(const QRectF&  sourceRect) const { return QGraphicsEffect::boundingRectFor(sourceRect); }
inline void py_q_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_sourceChanged(QGraphicsEffect::ChangeFlags  flags) { QGraphicsEffect::sourceChanged(flags); }
};

class PythonQtWrapper_QGraphicsEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag PixmapPadMode )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  SourceAttached = QGraphicsEffect::SourceAttached,   SourceDetached = QGraphicsEffect::SourceDetached,   SourceBoundingRectChanged = QGraphicsEffect::SourceBoundingRectChanged,   SourceInvalidated = QGraphicsEffect::SourceInvalidated};
enum PixmapPadMode{
  NoPad = QGraphicsEffect::NoPad,   PadToTransparentBorder = QGraphicsEffect::PadToTransparentBorder,   PadToEffectiveBoundingRect = QGraphicsEffect::PadToEffectiveBoundingRect};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QGraphicsEffect* new_QGraphicsEffect(QObject*  parent = nullptr);
void delete_QGraphicsEffect(QGraphicsEffect* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsEffect* theWrappedObject) const;
   QRectF  boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const;
   QRectF  py_q_boundingRectFor(QGraphicsEffect* theWrappedObject, const QRectF&  sourceRect) const{  return (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_boundingRectFor(sourceRect));}
   void draw(QGraphicsEffect* theWrappedObject, QPainter*  painter);
   void py_q_draw(QGraphicsEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_draw(painter));}
   void drawSource(QGraphicsEffect* theWrappedObject, QPainter*  painter);
   bool  isEnabled(QGraphicsEffect* theWrappedObject) const;
   QRectF  sourceBoundingRect(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system = Qt::LogicalCoordinates) const;
   void sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags);
   void py_q_sourceChanged(QGraphicsEffect* theWrappedObject, QGraphicsEffect::ChangeFlags  flags){  (((PythonQtPublicPromoter_QGraphicsEffect*)theWrappedObject)->py_q_sourceChanged(flags));}
   bool  sourceIsPixmap(QGraphicsEffect* theWrappedObject) const;
   QPixmap  sourcePixmap(QGraphicsEffect* theWrappedObject, Qt::CoordinateSystem  system = Qt::LogicalCoordinates, QPoint*  offset = nullptr, QGraphicsEffect::PixmapPadMode  mode = QGraphicsEffect::PadToEffectiveBoundingRect) const;
   void updateBoundingRect(QGraphicsEffect* theWrappedObject);
};





class PythonQtShell_QGraphicsEllipseItem : public QGraphicsEllipseItem
{
public:
    PythonQtShell_QGraphicsEllipseItem(QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(rect, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr):QGraphicsEllipseItem(x, y, w, h, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsEllipseItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEllipseItem : public QGraphicsEllipseItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsEllipseItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsEllipseItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsEllipseItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsEllipseItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsEllipseItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsEllipseItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsEllipseItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsEllipseItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsEllipseItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsEllipseItem::type(); }
};

class PythonQtWrapper_QGraphicsEllipseItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsEllipseItem::Type};
public slots:
QGraphicsEllipseItem* new_QGraphicsEllipseItem(QGraphicsItem*  parent = nullptr);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = nullptr);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsEllipseItem(QGraphicsEllipseItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsEllipseItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsEllipseItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsEllipseItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   void setExtension(QGraphicsEllipseItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsEllipseItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_shape());}
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   bool  supportsExtension(QGraphicsEllipseItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsEllipseItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  type(QGraphicsEllipseItem* theWrappedObject) const;
   int  py_q_type(QGraphicsEllipseItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsEllipseItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsGridLayout : public QGraphicsGridLayout
{
public:
    PythonQtShell_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsGridLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsGridLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsGridLayout : public QGraphicsGridLayout
{ public:
inline int  py_q_count() const { return QGraphicsGridLayout::count(); }
inline void py_q_invalidate() { QGraphicsGridLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsGridLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsGridLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsGridLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsGridLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsGridLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsGridLayout* new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsGridLayout(QGraphicsGridLayout* obj) { delete obj; } 
   void addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, Qt::Alignment  alignment = Qt::Alignment());
   void addItem(QGraphicsGridLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment = Qt::Alignment());
   Qt::Alignment  alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   Qt::Alignment  columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnCount(QGraphicsGridLayout* theWrappedObject) const;
   qreal  columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const;
   qreal  columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const;
   int  py_q_count(QGraphicsGridLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_count());}
   qreal  horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const;
   void py_q_invalidate(QGraphicsGridLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_itemAt(index));}
   QGraphicsLayoutItem*  itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const;
   void py_q_removeAt(QGraphicsGridLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_removeAt(index));}
   void removeItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item);
   Qt::Alignment  rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  rowCount(QGraphicsGridLayout* theWrappedObject) const;
   qreal  rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const;
   qreal  rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const;
   int  rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const;
   void setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment);
   void setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width);
   void setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing);
   void setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch);
   void setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect);
   void py_q_setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment);
   void setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height);
   void setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing);
   void setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch);
   void setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   void setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing);
   QSizeF  sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  py_q_sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsGridLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  verticalSpacing(QGraphicsGridLayout* theWrappedObject) const;
};





class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = nullptr):QGraphicsItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
enum Extension{
  UserExtension = QGraphicsItem::UserExtension};
inline void promoted_addToIndex() { this->addToIndex(); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_prepareGeometryChange() { this->prepareGeometryChange(); }
inline void promoted_removeFromIndex() { this->removeFromIndex(); }
inline bool  promoted_sceneEvent(QEvent*  event) { return this->sceneEvent(event); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return this->sceneEventFilter(watched, event); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_advance(int  phase) { QGraphicsItem::advance(phase); }
inline QRectF  py_q_boundingRect() const { return this->boundingRect(); }
inline bool  py_q_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline bool  py_q_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { this->paint(painter, option, widget); }
inline bool  py_q_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline bool  py_q_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsItem::type(); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode Extension GraphicsItemChange GraphicsItemFlag PanelModality enum_1 )
Q_FLAGS(GraphicsItemFlags )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum Extension{
  UserExtension = PythonQtPublicPromoter_QGraphicsItem::UserExtension};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged,   ItemOpacityChange = QGraphicsItem::ItemOpacityChange,   ItemOpacityHasChanged = QGraphicsItem::ItemOpacityHasChanged,   ItemScenePositionHasChanged = QGraphicsItem::ItemScenePositionHasChanged,   ItemRotationChange = QGraphicsItem::ItemRotationChange,   ItemRotationHasChanged = QGraphicsItem::ItemRotationHasChanged,   ItemScaleChange = QGraphicsItem::ItemScaleChange,   ItemScaleHasChanged = QGraphicsItem::ItemScaleHasChanged,   ItemTransformOriginPointChange = QGraphicsItem::ItemTransformOriginPointChange,   ItemTransformOriginPointHasChanged = QGraphicsItem::ItemTransformOriginPointHasChanged};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations,   ItemIgnoresParentOpacity = QGraphicsItem::ItemIgnoresParentOpacity,   ItemDoesntPropagateOpacityToChildren = QGraphicsItem::ItemDoesntPropagateOpacityToChildren,   ItemStacksBehindParent = QGraphicsItem::ItemStacksBehindParent,   ItemUsesExtendedStyleOption = QGraphicsItem::ItemUsesExtendedStyleOption,   ItemHasNoContents = QGraphicsItem::ItemHasNoContents,   ItemSendsGeometryChanges = QGraphicsItem::ItemSendsGeometryChanges,   ItemAcceptsInputMethod = QGraphicsItem::ItemAcceptsInputMethod,   ItemNegativeZStacksBehindParent = QGraphicsItem::ItemNegativeZStacksBehindParent,   ItemIsPanel = QGraphicsItem::ItemIsPanel,   ItemIsFocusScope = QGraphicsItem::ItemIsFocusScope,   ItemSendsScenePositionChanges = QGraphicsItem::ItemSendsScenePositionChanges,   ItemStopsClickFocusPropagation = QGraphicsItem::ItemStopsClickFocusPropagation,   ItemStopsFocusHandling = QGraphicsItem::ItemStopsFocusHandling,   ItemContainsChildrenInShape = QGraphicsItem::ItemContainsChildrenInShape};
enum PanelModality{
  NonModal = QGraphicsItem::NonModal,   PanelModal = QGraphicsItem::PanelModal,   SceneModal = QGraphicsItem::SceneModal};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
Q_DECLARE_FLAGS(GraphicsItemFlags, GraphicsItemFlag)
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   bool  acceptTouchEvents(QGraphicsItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   void addToIndex(QGraphicsItem* theWrappedObject);
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   void py_q_advance(QGraphicsItem* theWrappedObject, int  phase){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_advance(phase));}
   QRectF  boundingRect(QGraphicsItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_boundingRect());}
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   void clearFocus(QGraphicsItem* theWrappedObject);
   QPainterPath  clipPath(QGraphicsItem* theWrappedObject) const;
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  py_q_collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_collidesWithItem(other, mode));}
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  py_q_collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_collidesWithPath(path, mode));}
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_contains(point));}
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_dropEvent(event));}
   qreal  effectiveOpacity(QGraphicsItem* theWrappedObject) const;
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_extension(variant));}
   bool  filtersChildEvents(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_focusInEvent(event));}
   QGraphicsItem*  focusItem(QGraphicsItem* theWrappedObject) const;
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_focusOutEvent(event));}
   QGraphicsItem*  focusProxy(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  focusScopeItem(QGraphicsItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   void grabMouse(QGraphicsItem* theWrappedObject);
   QGraphicsEffect*  graphicsEffect(QGraphicsItem* theWrappedObject) const;
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   void hide(QGraphicsItem* theWrappedObject);
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_inputMethodEvent(event));}
   Qt::InputMethodHints  inputMethodHints(QGraphicsItem* theWrappedObject) const;
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_inputMethodQuery(query));}
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isActive(QGraphicsItem* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isBlockedByModalPanel(QGraphicsItem* theWrappedObject, QGraphicsItem**  blockingPanel = nullptr) const;
   bool  isClipped(QGraphicsItem* theWrappedObject) const;
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF()) const;
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  py_q_isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   bool  isPanel(QGraphicsItem* theWrappedObject) const;
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QVariant  py_q_itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_itemChange(change, value));}
   QTransform  itemTransform(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, bool*  ok = nullptr) const;
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QRectF  mapRectFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QRectF  mapRectToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QRectF  mapRectToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   qreal  opacity(QGraphicsItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QGraphicsItem*  panel(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem::PanelModality  panelModality(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   QGraphicsObject*  parentObject(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   void prepareGeometryChange(QGraphicsItem* theWrappedObject);
   void removeFromIndex(QGraphicsItem* theWrappedObject);
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsItem* theWrappedObject);
   qreal  rotation(QGraphicsItem* theWrappedObject) const;
   qreal  scale(QGraphicsItem* theWrappedObject) const;
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   bool  py_q_sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_sceneEvent(event));}
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
   bool  py_q_sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_sceneEventFilter(watched, event));}
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setAcceptTouchEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setActive(QGraphicsItem* theWrappedObject, bool  active);
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   void setExtension(QGraphicsItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFiltersChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   void setFocusProxy(QGraphicsItem* theWrappedObject, QGraphicsItem*  item);
   void setGraphicsEffect(QGraphicsItem* theWrappedObject, QGraphicsEffect*  effect);
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setInputMethodHints(QGraphicsItem* theWrappedObject, Qt::InputMethodHints  hints);
   void setOpacity(QGraphicsItem* theWrappedObject, qreal  opacity);
   void setPanelModality(QGraphicsItem* theWrappedObject, QGraphicsItem::PanelModality  panelModality);
   void setParentItem(QGraphicsItem* theWrappedObject, PythonQtNewOwnerOfThis<QGraphicsItem* >  parent);
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   void setRotation(QGraphicsItem* theWrappedObject, qreal  angle);
   void setScale(QGraphicsItem* theWrappedObject, qreal  scale);
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, const QPointF&  origin);
   void setTransformOriginPoint(QGraphicsItem* theWrappedObject, qreal  ax, qreal  ay);
   void setTransformations(QGraphicsItem* theWrappedObject, const QList<QGraphicsTransform* >&  transformations);
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   void setX(QGraphicsItem* theWrappedObject, qreal  x);
   void setY(QGraphicsItem* theWrappedObject, qreal  y);
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_shape());}
   void show(QGraphicsItem* theWrappedObject);
   void stackBefore(QGraphicsItem* theWrappedObject, const QGraphicsItem*  sibling);
   bool  supportsExtension(QGraphicsItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   QGraphicsObject*  toGraphicsObject(QGraphicsItem* theWrappedObject);
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   QPointF  transformOriginPoint(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsTransform* >  transformations(QGraphicsItem* theWrappedObject) const;
   int  type(QGraphicsItem* theWrappedObject) const;
   int  py_q_type(QGraphicsItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_type());}
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   void unsetCursor(QGraphicsItem* theWrappedObject);
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   void updateMicroFocus(QGraphicsItem* theWrappedObject);
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsItem*)theWrappedObject)->py_q_wheelEvent(event));}
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   qreal  x(QGraphicsItem* theWrappedObject) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
    QString py_toString(QGraphicsItem*);
};





class PythonQtShell_QGraphicsItemAnimation : public QGraphicsItemAnimation
{
public:
    PythonQtShell_QGraphicsItemAnimation(QObject*  parent = nullptr):QGraphicsItemAnimation(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemAnimation();

virtual void afterAnimationStep(qreal  step);
virtual void beforeAnimationStep(qreal  step);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemAnimation : public QGraphicsItemAnimation
{ public:
inline void promoted_afterAnimationStep(qreal  step) { this->afterAnimationStep(step); }
inline void promoted_beforeAnimationStep(qreal  step) { this->beforeAnimationStep(step); }
inline void py_q_afterAnimationStep(qreal  step) { QGraphicsItemAnimation::afterAnimationStep(step); }
inline void py_q_beforeAnimationStep(qreal  step) { QGraphicsItemAnimation::beforeAnimationStep(step); }
};

class PythonQtWrapper_QGraphicsItemAnimation : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsItemAnimation* new_QGraphicsItemAnimation(QObject*  parent = nullptr);
void delete_QGraphicsItemAnimation(QGraphicsItemAnimation* obj) { delete obj; } 
   void afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_afterAnimationStep(step));}
   void beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step);
   void py_q_beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step){  (((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->py_q_beforeAnimationStep(step));}
   void clear(QGraphicsItemAnimation* theWrappedObject);
   qreal  horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QGraphicsItem*  item(QGraphicsItemAnimation* theWrappedObject) const;
   QMatrix  matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QPointF  posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  posList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , qreal >  >  rotationList(QGraphicsItemAnimation* theWrappedObject) const;
   QList<QPair<qreal , QPointF >  >  scaleList(QGraphicsItemAnimation* theWrappedObject) const;
   void setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item);
   void setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos);
   void setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle);
   void setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy);
   void setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv);
   void setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine);
   void setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy);
   QList<QPair<qreal , QPointF >  >  shearList(QGraphicsItemAnimation* theWrappedObject) const;
   QTimeLine*  timeLine(QGraphicsItemAnimation* theWrappedObject) const;
   QTransform  transformAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   QList<QPair<qreal , QPointF >  >  translationList(QGraphicsItemAnimation* theWrappedObject) const;
   qreal  verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
   qreal  yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const;
};





class PythonQtShell_QGraphicsItemGroup : public QGraphicsItemGroup
{
public:
    PythonQtShell_QGraphicsItemGroup(QGraphicsItem*  parent = nullptr):QGraphicsItemGroup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsItemGroup();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItemGroup : public QGraphicsItemGroup
{ public:
inline QRectF  py_q_boundingRect() const { return QGraphicsItemGroup::boundingRect(); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItemGroup::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsItemGroup::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsItemGroup::paint(painter, option, widget); }
inline int  py_q_type() const { return QGraphicsItemGroup::type(); }
};

class PythonQtWrapper_QGraphicsItemGroup : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsItemGroup::Type};
public slots:
QGraphicsItemGroup* new_QGraphicsItemGroup(QGraphicsItem*  parent = nullptr);
void delete_QGraphicsItemGroup(QGraphicsItemGroup* obj) { delete obj; } 
   void addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   QRectF  py_q_boundingRect(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   int  py_q_type(QGraphicsItemGroup* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsItemGroup*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsLayout : public QGraphicsLayout
{
public:
    PythonQtShell_QGraphicsLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsLayout(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  i) const;
virtual void removeAt(int  index);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayout : public QGraphicsLayout
{ public:
inline void promoted_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem) { this->addChildLayoutItem(layoutItem); }
inline int  py_q_count() const { return this->count(); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayout::getContentsMargins(left, top, right, bottom); }
inline void py_q_invalidate() { QGraphicsLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  i) const { return this->itemAt(i); }
inline void py_q_removeAt(int  index) { this->removeAt(index); }
inline void py_q_updateGeometry() { QGraphicsLayout::updateGeometry(); }
inline void py_q_widgetEvent(QEvent*  e) { QGraphicsLayout::widgetEvent(e); }
};

class PythonQtWrapper_QGraphicsLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayout* new_QGraphicsLayout(QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsLayout(QGraphicsLayout* obj) { delete obj; } 
   void activate(QGraphicsLayout* theWrappedObject);
   void addChildLayoutItem(QGraphicsLayout* theWrappedObject, QGraphicsLayoutItem*  layoutItem);
   int  count(QGraphicsLayout* theWrappedObject) const;
   int  py_q_count(QGraphicsLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_count());}
   void py_q_getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   bool  static_QGraphicsLayout_instantInvalidatePropagation();
   void invalidate(QGraphicsLayout* theWrappedObject);
   void py_q_invalidate(QGraphicsLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_invalidate());}
   bool  isActivated(QGraphicsLayout* theWrappedObject) const;
   QGraphicsLayoutItem*  itemAt(QGraphicsLayout* theWrappedObject, int  i) const;
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsLayout* theWrappedObject, int  i) const{  return (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_itemAt(i));}
   void removeAt(QGraphicsLayout* theWrappedObject, int  index);
   void py_q_removeAt(QGraphicsLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_removeAt(index));}
   void setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void static_QGraphicsLayout_setInstantInvalidatePropagation(bool  enable);
   void py_q_updateGeometry(QGraphicsLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_updateGeometry());}
   void widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e);
   void py_q_widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e){  (((PythonQtPublicPromoter_QGraphicsLayout*)theWrappedObject)->py_q_widgetEvent(e));}
};





class PythonQtShell_QGraphicsLayoutItem : public QGraphicsLayoutItem
{
public:
    PythonQtShell_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = nullptr, bool  isLayout = false):QGraphicsLayoutItem(parent, isLayout),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLayoutItem();

virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLayoutItem : public QGraphicsLayoutItem
{ public:
inline void promoted_setGraphicsItem(QGraphicsItem*  item) { this->setGraphicsItem(item); }
inline void promoted_setOwnedByLayout(bool  ownedByLayout) { this->setOwnedByLayout(ownedByLayout); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void py_q_getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const { QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsLayoutItem::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void py_q_updateGeometry() { QGraphicsLayoutItem::updateGeometry(); }
};

class PythonQtWrapper_QGraphicsLayoutItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLayoutItem* new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent = nullptr, bool  isLayout = false);
void delete_QGraphicsLayoutItem(QGraphicsLayoutItem* obj) { delete obj; } 
   QRectF  contentsRect(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QRectF  geometry(QGraphicsLayoutItem* theWrappedObject) const;
   void getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void py_q_getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const{  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_getContentsMargins(left, top, right, bottom));}
   QGraphicsItem*  graphicsItem(QGraphicsLayoutItem* theWrappedObject) const;
   bool  isLayout(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsLayoutItem* theWrappedObject) const;
   bool  ownedByLayout(QGraphicsLayoutItem* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsLayoutItem* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsLayoutItem* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsLayoutItem* theWrappedObject) const;
   void setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect);
   void py_q_setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_setGeometry(rect));}
   void setGraphicsItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsItem*  item);
   void setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setOwnedByLayout(QGraphicsLayoutItem* theWrappedObject, bool  ownedByLayout);
   void setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h);
   void setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType = QSizePolicy::DefaultType);
   void setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy);
   QSizeF  sizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  py_q_sizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QSizePolicy  sizePolicy(QGraphicsLayoutItem* theWrappedObject) const;
   void updateGeometry(QGraphicsLayoutItem* theWrappedObject);
   void py_q_updateGeometry(QGraphicsLayoutItem* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLayoutItem*)theWrappedObject)->py_q_updateGeometry());}
};





class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = nullptr):QGraphicsLineItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = nullptr):QGraphicsLineItem(line, parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = nullptr):QGraphicsLineItem(x1, y1, x2, y2, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLineItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsLineItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsLineItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsLineItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsLineItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsLineItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsLineItem::type(); }
};

class PythonQtWrapper_QGraphicsLineItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsLineItem::Type};
public slots:
QGraphicsLineItem* new_QGraphicsLineItem(QGraphicsItem*  parent = nullptr);
QGraphicsLineItem* new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = nullptr);
QGraphicsLineItem* new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsLineItem(QGraphicsLineItem* obj) { delete obj; } 
   QRectF  py_q_boundingRect(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsLineItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
   void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
   QPainterPath  py_q_shape(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_shape());}
   bool  py_q_supportsExtension(QGraphicsLineItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  py_q_type(QGraphicsLineItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLineItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsLinearLayout : public QGraphicsLinearLayout
{
public:
    PythonQtShell_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = nullptr):QGraphicsLinearLayout(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = nullptr):QGraphicsLinearLayout(orientation, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsLinearLayout();

virtual int  count() const;
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void invalidate();
virtual QGraphicsLayoutItem*  itemAt(int  index) const;
virtual void removeAt(int  index);
virtual void setGeometry(const QRectF&  rect);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual void updateGeometry();
virtual void widgetEvent(QEvent*  e);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLinearLayout : public QGraphicsLinearLayout
{ public:
inline int  py_q_count() const { return QGraphicsLinearLayout::count(); }
inline void py_q_invalidate() { QGraphicsLinearLayout::invalidate(); }
inline QGraphicsLayoutItem*  py_q_itemAt(int  index) const { return QGraphicsLinearLayout::itemAt(index); }
inline void py_q_removeAt(int  index) { QGraphicsLinearLayout::removeAt(index); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsLinearLayout::setGeometry(rect); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsLinearLayout::sizeHint(which, constraint); }
};

class PythonQtWrapper_QGraphicsLinearLayout : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsLinearLayout* new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent = nullptr);
QGraphicsLinearLayout* new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent = nullptr);
void delete_QGraphicsLinearLayout(QGraphicsLinearLayout* obj) { delete obj; } 
   void addItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item);
   void addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch = 1);
   Qt::Alignment  alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
   int  py_q_count(QGraphicsLinearLayout* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_count());}
   void dump(QGraphicsLinearLayout* theWrappedObject, int  indent = 0) const;
   void insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QGraphicsLayoutItem* >  item);
   void insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch = 1);
   void py_q_invalidate(QGraphicsLinearLayout* theWrappedObject){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_invalidate());}
   QGraphicsLayoutItem*  py_q_itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_itemAt(index));}
   qreal  itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const;
   Qt::Orientation  orientation(QGraphicsLinearLayout* theWrappedObject) const;
   void py_q_removeAt(QGraphicsLinearLayout* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_removeAt(index));}
   void removeItem(QGraphicsLinearLayout* theWrappedObject, PythonQtPassOwnershipToPython<QGraphicsLayoutItem* >  item);
   void setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment);
   void setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect);
   void py_q_setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_setGeometry(rect));}
   void setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing);
   void setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation);
   void setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing);
   void setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch);
   QSizeF  sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
   QSizeF  py_q_sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsLinearLayout*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   qreal  spacing(QGraphicsLinearLayout* theWrappedObject) const;
   int  stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const;
};

class PythonQtShell_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{
public:
    PythonQtShell_QGraphicsOpacityEffect(QObject*  parent = nullptr):QGraphicsOpacityEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsOpacityEffect();

virtual QRectF  boundingRectFor(const QRectF&  sourceRect) const;
virtual void draw(QPainter*  painter);
virtual void sourceChanged(QGraphicsEffect::ChangeFlags  flags);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsOpacityEffect : public QGraphicsOpacityEffect
{ public:
inline void promoted_draw(QPainter*  painter) { this->draw(painter); }
inline void py_q_draw(QPainter*  painter) { QGraphicsOpacityEffect::draw(painter); }
};

class PythonQtWrapper_QGraphicsOpacityEffect : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsOpacityEffect* new_QGraphicsOpacityEffect(QObject*  parent = nullptr);
void delete_QGraphicsOpacityEffect(QGraphicsOpacityEffect* obj) { delete obj; } 
   void py_q_draw(QGraphicsOpacityEffect* theWrappedObject, QPainter*  painter){  (((PythonQtPublicPromoter_QGraphicsOpacityEffect*)theWrappedObject)->py_q_draw(painter));}
   qreal  opacity(QGraphicsOpacityEffect* theWrappedObject) const;
   QBrush  opacityMask(QGraphicsOpacityEffect* theWrappedObject) const;
};





class PythonQtShell_QGraphicsPathItem : public QGraphicsPathItem
{
public:
    PythonQtShell_QGraphicsPathItem(QGraphicsItem*  parent = nullptr):QGraphicsPathItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = nullptr):QGraphicsPathItem(path, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPathItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPathItem : public QGraphicsPathItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPathItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPathItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPathItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPathItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPathItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsPathItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPathItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPathItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPathItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPathItem::type(); }
};

class PythonQtWrapper_QGraphicsPathItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPathItem::Type};
public slots:
QGraphicsPathItem* new_QGraphicsPathItem(QGraphicsItem*  parent = nullptr);
QGraphicsPathItem* new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPathItem(QGraphicsPathItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsPathItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsPathItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsPathItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
   void setExtension(QGraphicsPathItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsPathItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
   QPainterPath  shape(QGraphicsPathItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsPathItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsPathItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  type(QGraphicsPathItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPathItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPathItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = nullptr):QGraphicsPixmapItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = nullptr):QGraphicsPixmapItem(pixmap, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPixmapItem();

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPixmapItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPixmapItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPixmapItem::type(); }
};

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShapeMode enum_1 )
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
public slots:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = nullptr);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
   QRectF  py_q_boundingRect(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_boundingRect());}
   bool  py_q_contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  py_q_extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_extension(variant));}
   bool  py_q_isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  py_q_opaqueArea(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_opaqueArea());}
   void py_q_paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   void py_q_setExtension(QGraphicsPixmapItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   QPainterPath  py_q_shape(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_shape());}
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   bool  py_q_supportsExtension(QGraphicsPixmapItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPixmapItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPixmapItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsPolygonItem : public QGraphicsPolygonItem
{
public:
    PythonQtShell_QGraphicsPolygonItem(QGraphicsItem*  parent = nullptr):QGraphicsPolygonItem(parent),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = nullptr):QGraphicsPolygonItem(polygon, parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsPolygonItem();

virtual QRectF  boundingRect() const;
virtual bool  contains(const QPointF&  point) const;
virtual QVariant  extension(const QVariant&  variant) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPolygonItem : public QGraphicsPolygonItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return this->extension(variant); }
inline void promoted_setExtension(int  extension, const QVariant&  variant) { this->setExtension((QGraphicsItem::Extension)extension, variant); }
inline bool  promoted_supportsExtension(int  extension) const { return this->supportsExtension((QGraphicsItem::Extension)extension); }
inline QRectF  py_q_boundingRect() const { return QGraphicsPolygonItem::boundingRect(); }
inline bool  py_q_contains(const QPointF&  point) const { return QGraphicsPolygonItem::contains(point); }
inline QVariant  py_q_extension(const QVariant&  variant) const { return QGraphicsPolygonItem::extension(variant); }
inline bool  py_q_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPolygonItem::isObscuredBy(item); }
inline QPainterPath  py_q_opaqueArea() const { return QGraphicsPolygonItem::opaqueArea(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsPolygonItem::paint(painter, option, widget); }
inline void py_q_setExtension(int  extension, const QVariant&  variant) { QGraphicsPolygonItem::setExtension((QGraphicsItem::Extension)extension, variant); }
inline QPainterPath  py_q_shape() const { return QGraphicsPolygonItem::shape(); }
inline bool  py_q_supportsExtension(int  extension) const { return QGraphicsPolygonItem::supportsExtension((QGraphicsItem::Extension)extension); }
inline int  py_q_type() const { return QGraphicsPolygonItem::type(); }
};

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = nullptr);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = nullptr);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_boundingRect());}
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   bool  py_q_contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_contains(point));}
   QVariant  extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const;
   QVariant  py_q_extension(QGraphicsPolygonItem* theWrappedObject, const QVariant&  variant) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_extension(variant));}
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   bool  py_q_isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_isObscuredBy(item));}
   QPainterPath  py_q_opaqueArea(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_opaqueArea());}
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   void setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant);
   void py_q_setExtension(QGraphicsPolygonItem* theWrappedObject, int  extension, const QVariant&  variant){  (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_setExtension(extension, variant));}
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   QPainterPath  py_q_shape(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_shape());}
   bool  supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const;
   bool  py_q_supportsExtension(QGraphicsPolygonItem* theWrappedObject, int  extension) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_supportsExtension(extension));}
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
   int  py_q_type(QGraphicsPolygonItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsPolygonItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QGraphicsProxyWidget : public QGraphicsProxyWidget
{
public:
    PythonQtShell_QGraphicsProxyWidget(QGraphicsItem*  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags()):QGraphicsProxyWidget(parent, wFlags),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsProxyWidget();

virtual QRectF  boundingRect() const;
virtual void changeEvent(QEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void initStyleOption(QStyleOption*  option) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual void polishEvent();
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual bool  sceneEvent(QEvent*  event);
virtual void setGeometry(const QRectF&  rect);
virtual QPainterPath  shape() const;
virtual void showEvent(QShowEvent*  event);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const;
virtual int  type() const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void ungrabMouseEvent(QEvent*  event);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);
virtual bool  windowFrameEvent(QEvent*  e);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsProxyWidget : public QGraphicsProxyWidget
{ public:
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline void promoted_grabMouseEvent(QEvent*  event) { this->grabMouseEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { this->hoverEnterEvent(event); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverLeaveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { this->hoverMoveEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { this->inputMethodEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return this->inputMethodQuery(query); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QGraphicsProxyWidget*  promoted_newProxyWidget(const QWidget*  arg__1) { return this->newProxyWidget(arg__1); }
inline void promoted_resizeEvent(QGraphicsSceneResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return this->sizeHint(which, constraint); }
inline void promoted_ungrabMouseEvent(QEvent*  event) { this->ungrabMouseEvent(event); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsProxyWidget::contextMenuEvent(event); }
inline void py_q_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dragMoveEvent(event); }
inline void py_q_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsProxyWidget::dropEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QGraphicsProxyWidget::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QGraphicsProxyWidget::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QGraphicsProxyWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QGraphicsProxyWidget::focusOutEvent(event); }
inline void py_q_grabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::grabMouseEvent(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QGraphicsProxyWidget::hideEvent(event); }
inline void py_q_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverEnterEvent(event); }
inline void py_q_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverLeaveEvent(event); }
inline void py_q_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsProxyWidget::hoverMoveEvent(event); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsProxyWidget::inputMethodEvent(event); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsProxyWidget::inputMethodQuery(query); }
inline QVariant  py_q_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsProxyWidget::itemChange(change, value); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QGraphicsProxyWidget::keyReleaseEvent(event); }
inline void py_q_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsProxyWidget::mouseReleaseEvent(event); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsProxyWidget::paint(painter, option, widget); }
inline void py_q_resizeEvent(QGraphicsSceneResizeEvent*  event) { QGraphicsProxyWidget::resizeEvent(event); }
inline void py_q_setGeometry(const QRectF&  rect) { QGraphicsProxyWidget::setGeometry(rect); }
inline void py_q_showEvent(QShowEvent*  event) { QGraphicsProxyWidget::showEvent(event); }
inline QSizeF  py_q_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const { return QGraphicsProxyWidget::sizeHint(which, constraint); }
inline int  py_q_type() const { return QGraphicsProxyWidget::type(); }
inline void py_q_ungrabMouseEvent(QEvent*  event) { QGraphicsProxyWidget::ungrabMouseEvent(event); }
inline void py_q_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsProxyWidget::wheelEvent(event); }
};

class PythonQtWrapper_QGraphicsProxyWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsProxyWidget::Type};
public slots:
QGraphicsProxyWidget* new_QGraphicsProxyWidget(PythonQtNewOwnerOfThis<QGraphicsItem* >  parent = nullptr, Qt::WindowFlags  wFlags = Qt::WindowFlags());
void delete_QGraphicsProxyWidget(QGraphicsProxyWidget* obj) { delete obj; } 
   void contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   void py_q_contextMenuEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneContextMenuEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_contextMenuEvent(event));}
   QGraphicsProxyWidget*  createProxyForChildWidget(QGraphicsProxyWidget* theWrappedObject, QWidget*  child);
   void dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dragMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void py_q_dropEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneDragDropEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  py_q_event(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_event(event));}
   bool  eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event);
   bool  py_q_eventFilter(QGraphicsProxyWidget* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_eventFilter(object, event));}
   void py_q_focusInEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  py_q_focusNextPrevChild(QGraphicsProxyWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_focusOutEvent(QGraphicsProxyWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   void py_q_grabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_grabMouseEvent(event));}
   void py_q_hideEvent(QGraphicsProxyWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void py_q_hoverEnterEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverEnterEvent(event));}
   void py_q_hoverLeaveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverLeaveEvent(event));}
   void py_q_hoverMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneHoverEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_hoverMoveEvent(event));}
   void inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event);
   void py_q_inputMethodEvent(QGraphicsProxyWidget* theWrappedObject, QInputMethodEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodEvent(event));}
   QVariant  inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const;
   QVariant  py_q_inputMethodQuery(QGraphicsProxyWidget* theWrappedObject, Qt::InputMethodQuery  query) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_inputMethodQuery(query));}
   QVariant  py_q_itemChange(QGraphicsProxyWidget* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value){  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_itemChange(change, value));}
   void keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   void mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseMoveEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mousePressEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   void py_q_mouseReleaseEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneMouseEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void py_q_paint(QGraphicsProxyWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_paint(painter, option, widget));}
   void py_q_resizeEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneResizeEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   void py_q_setGeometry(QGraphicsProxyWidget* theWrappedObject, const QRectF&  rect){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_setGeometry(rect));}
   void setWidget(QGraphicsProxyWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget);
   void py_q_showEvent(QGraphicsProxyWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSizeF  py_q_sizeHint(QGraphicsProxyWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint = QSizeF()) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_sizeHint(which, constraint));}
   QRectF  subWidgetRect(QGraphicsProxyWidget* theWrappedObject, const QWidget*  widget) const;
   int  py_q_type(QGraphicsProxyWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_type());}
   void py_q_ungrabMouseEvent(QGraphicsProxyWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_ungrabMouseEvent(event));}
   void wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   void py_q_wheelEvent(QGraphicsProxyWidget* theWrappedObject, QGraphicsSceneWheelEvent*  event){  (((PythonQtPublicPromoter_QGraphicsProxyWidget*)theWrappedObject)->py_q_wheelEvent(event));}
   QWidget*  widget(QGraphicsProxyWidget* theWrappedObject) const;
};


