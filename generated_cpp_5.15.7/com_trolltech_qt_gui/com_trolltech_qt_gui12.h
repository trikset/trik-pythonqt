#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qthread.h>
#include <qwidget.h>
#include <qwindow.h>
#include <qwizard.h>



class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride = false);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; }
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QWizard(parent, flags),_wrapper(nullptr) {};

   ~PythonQtShell_QWizard() override;

void accept() override;
void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void cleanupPage(int  id) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void done(int  result) override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
int  exec() override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initializePage(int  id) override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
int  nextId() const override;
void open() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reject() override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  validateCurrentPage() override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_cleanupPage(int  id) { this->cleanupPage(id); }
inline void promoted_done(int  result) { this->done(result); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initializePage(int  id) { this->initializePage(id); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void py_q_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void py_q_done(int  result) { QWizard::done(result); }
inline bool  py_q_event(QEvent*  event) { return QWizard::event(event); }
inline void py_q_initializePage(int  id) { QWizard::initializePage(id); }
inline int  py_q_nextId() const { return QWizard::nextId(); }
inline void py_q_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline void py_q_setVisible(bool  visible) { QWizard::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QWizard::sizeHint(); }
inline bool  py_q_validateCurrentPage() { return QWizard::validateCurrentPage(); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardOption WizardPixmap )
Q_FLAGS(WizardOptions )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardOption{
  IndependentPages = QWizard::IndependentPages,   IgnoreSubTitles = QWizard::IgnoreSubTitles,   ExtendedWatermarkPixmap = QWizard::ExtendedWatermarkPixmap,   NoDefaultButton = QWizard::NoDefaultButton,   NoBackButtonOnStartPage = QWizard::NoBackButtonOnStartPage,   NoBackButtonOnLastPage = QWizard::NoBackButtonOnLastPage,   DisabledBackButtonOnLastPage = QWizard::DisabledBackButtonOnLastPage,   HaveNextButtonOnLastPage = QWizard::HaveNextButtonOnLastPage,   HaveFinishButtonOnEarlyPages = QWizard::HaveFinishButtonOnEarlyPages,   NoCancelButton = QWizard::NoCancelButton,   CancelButtonOnLeft = QWizard::CancelButtonOnLeft,   HaveHelpButton = QWizard::HaveHelpButton,   HelpButtonOnRight = QWizard::HelpButtonOnRight,   HaveCustomButton1 = QWizard::HaveCustomButton1,   HaveCustomButton2 = QWizard::HaveCustomButton2,   HaveCustomButton3 = QWizard::HaveCustomButton3,   NoCancelButtonOnLastPage = QWizard::NoCancelButtonOnLastPage};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
Q_DECLARE_FLAGS(WizardOptions, WizardOption)
public slots:
QWizard* new_QWizard(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QWizard(QWizard* obj) { delete obj; }
   int  addPage(QWizard* theWrappedObject, PythonQtPassOwnershipToCPP<QWizardPage* >  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizard* theWrappedObject, int  id);
   void py_q_cleanupPage(QWizard* theWrappedObject, int  id){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_cleanupPage(id));}
   int  currentId(QWizard* theWrappedObject) const;
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   void py_q_done(QWizard* theWrappedObject, int  result){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_done(result));}
   bool  py_q_event(QWizard* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_event(event));}
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   void py_q_initializePage(QWizard* theWrappedObject, int  id){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_initializePage(id));}
   int  nextId(QWizard* theWrappedObject) const;
   int  py_q_nextId(QWizard* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_nextId());}
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   void py_q_paintEvent(QWizard* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_paintEvent(event));}
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void removePage(QWizard* theWrappedObject, int  id);
   void py_q_resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_resizeEvent(event));}
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, PythonQtPassOwnershipToCPP<QAbstractButton* >  button);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSideWidget(QWizard* theWrappedObject, QWidget*  widget);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void py_q_setVisible(QWizard* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_setVisible(visible));}
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QWidget*  sideWidget(QWizard* theWrappedObject) const;
   QSize  py_q_sizeHint(QWizard* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_sizeHint());}
   int  startId(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   bool  py_q_validateCurrentPage(QWizard* theWrappedObject){  return (((PythonQtPublicPromoter_QWizard*)theWrappedObject)->py_q_validateCurrentPage());}
   QList<int >  visitedIds(QWizard* theWrappedObject) const;
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = nullptr):QWizardPage(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWizardPage() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void cleanupPage() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void initializePage() override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
bool  isComplete() const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
int  nextId() const override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
bool  validatePage() override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline QVariant  promoted_field(const QString&  name) const { return this->field(name); }
inline void promoted_registerField(const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr) { this->registerField(name, widget, property, changedSignal); }
inline void promoted_setField(const QString&  name, const QVariant&  value) { this->setField(name, value); }
inline QWizard*  promoted_wizard() const { return this->wizard(); }
inline void py_q_cleanupPage() { QWizardPage::cleanupPage(); }
inline void py_q_initializePage() { QWizardPage::initializePage(); }
inline bool  py_q_isComplete() const { return QWizardPage::isComplete(); }
inline int  py_q_nextId() const { return QWizardPage::nextId(); }
inline bool  py_q_validatePage() { return QWizardPage::validatePage(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = nullptr);
void delete_QWizardPage(QWizardPage* obj) { delete obj; }
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   void py_q_cleanupPage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_cleanupPage());}
   QVariant  field(QWizardPage* theWrappedObject, const QString&  name) const;
   void initializePage(QWizardPage* theWrappedObject);
   void py_q_initializePage(QWizardPage* theWrappedObject){  (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_initializePage());}
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  isComplete(QWizardPage* theWrappedObject) const;
   bool  py_q_isComplete(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_isComplete());}
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   int  nextId(QWizardPage* theWrappedObject) const;
   int  py_q_nextId(QWizardPage* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_nextId());}
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   void registerField(QWizardPage* theWrappedObject, const QString&  name, QWidget*  widget, const char*  property = nullptr, const char*  changedSignal = nullptr);
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setField(QWizardPage* theWrappedObject, const QString&  name, const QVariant&  value);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  subTitle(QWizardPage* theWrappedObject) const;
   QString  title(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
   bool  py_q_validatePage(QWizardPage* theWrappedObject){  return (((PythonQtPublicPromoter_QWizardPage*)theWrappedObject)->py_q_validatePage());}
   QWizard*  wizard(QWizardPage* theWrappedObject) const;
};


