#include <PythonQt.h>
#include <QMatrix>
#include <QObject>
#include <QStringList>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qtextcodec.h>
#include <qurl.h>



class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MonthNameType )
enum MonthNameType{
  DateFormat = QDate::DateFormat,   StandaloneFormat = QDate::StandaloneFormat};
public slots:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; } 
   QDate  addDays(QDate* theWrappedObject, qint64  days) const;
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  static_QDate_currentDate();
   int  day(QDate* theWrappedObject) const;
   int  dayOfWeek(QDate* theWrappedObject) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   int  daysInMonth(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject) const;
   qint64  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   QDateTime  endOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec = Qt::LocalTime, int  offsetSeconds = 0) const;
   QDateTime  endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   QDate  static_QDate_fromJulianDay(qint64  jd_);
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   void getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day);
   void getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day) const;
   bool  static_QDate_isLeapYear(int  year);
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   QString  static_QDate_longDayName(int  weekday, QDate::MonthNameType  type = QDate::DateFormat);
   QString  static_QDate_longMonthName(int  month, QDate::MonthNameType  type = QDate::DateFormat);
   int  month(QDate* theWrappedObject) const;
   bool  __ne__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __lt__(QDate* theWrappedObject, const QDate&  other) const;
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __eq__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __gt__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __ge__(QDate* theWrappedObject, const QDate&  other) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  day);
   QString  static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type = QDate::DateFormat);
   QString  static_QDate_shortMonthName(int  month, QDate::MonthNameType  type = QDate::DateFormat);
   QDateTime  startOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec = Qt::LocalTime, int  offsetSeconds = 0) const;
   QDateTime  startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const;
   qint64  toJulianDay(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = nullptr) const;
   int  year(QDate* theWrappedObject) const;
    QString py_toString(QDate*);
    bool __nonzero__(QDate* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QLine : public QObject
{ Q_OBJECT
public:
public slots:
QLine* new_QLine();
QLine* new_QLine(const QPoint&  pt1, const QPoint&  pt2);
QLine* new_QLine(int  x1, int  y1, int  x2, int  y2);
QLine* new_QLine(const QLine& other) {
QLine* a = new QLine();
*((QLine*)a) = other;
return a; }
void delete_QLine(QLine* obj) { delete obj; } 
   QPoint  center(QLine* theWrappedObject) const;
   int  dx(QLine* theWrappedObject) const;
   int  dy(QLine* theWrappedObject) const;
   bool  isNull(QLine* theWrappedObject) const;
   bool  __ne__(QLine* theWrappedObject, const QLine&  d) const;
   QLine  __mul__(QLine* theWrappedObject, const QMatrix&  m);
   QLine  __mul__(QLine* theWrappedObject, const QTransform&  m);
   void writeTo(QLine* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLine* theWrappedObject, const QLine&  d) const;
   void readFrom(QLine* theWrappedObject, QDataStream&  arg__1);
   QPoint  p1(QLine* theWrappedObject) const;
   QPoint  p2(QLine* theWrappedObject) const;
   void setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setP1(QLine* theWrappedObject, const QPoint&  p1);
   void setP2(QLine* theWrappedObject, const QPoint&  p2);
   void setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void translate(QLine* theWrappedObject, const QPoint&  p);
   void translate(QLine* theWrappedObject, int  dx, int  dy);
   QLine  translated(QLine* theWrappedObject, const QPoint&  p) const;
   QLine  translated(QLine* theWrappedObject, int  dx, int  dy) const;
   int  x1(QLine* theWrappedObject) const;
   int  x2(QLine* theWrappedObject) const;
   int  y1(QLine* theWrappedObject) const;
   int  y2(QLine* theWrappedObject) const;
    QString py_toString(QLine*);
    bool __nonzero__(QLine* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QLineF : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IntersectType )
enum IntersectType{
  NoIntersection = QLineF::NoIntersection,   BoundedIntersection = QLineF::BoundedIntersection,   UnboundedIntersection = QLineF::UnboundedIntersection};
public slots:
QLineF* new_QLineF();
QLineF* new_QLineF(const QLine&  line);
QLineF* new_QLineF(const QPointF&  pt1, const QPointF&  pt2);
QLineF* new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2);
QLineF* new_QLineF(const QLineF& other) {
QLineF* a = new QLineF();
*((QLineF*)a) = other;
return a; }
void delete_QLineF(QLineF* obj) { delete obj; } 
   qreal  angle(QLineF* theWrappedObject) const;
   qreal  angle(QLineF* theWrappedObject, const QLineF&  l) const;
   qreal  angleTo(QLineF* theWrappedObject, const QLineF&  l) const;
   QPointF  center(QLineF* theWrappedObject) const;
   qreal  dx(QLineF* theWrappedObject) const;
   qreal  dy(QLineF* theWrappedObject) const;
   QLineF  static_QLineF_fromPolar(qreal  length, qreal  angle);
   QLineF::IntersectType  intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const;
   bool  isNull(QLineF* theWrappedObject) const;
   qreal  length(QLineF* theWrappedObject) const;
   QLineF  normalVector(QLineF* theWrappedObject) const;
   bool  __ne__(QLineF* theWrappedObject, const QLineF&  d) const;
   QLineF  __mul__(QLineF* theWrappedObject, const QMatrix&  m);
   QLineF  __mul__(QLineF* theWrappedObject, const QTransform&  m);
   void writeTo(QLineF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLineF* theWrappedObject, const QLineF&  d) const;
   void readFrom(QLineF* theWrappedObject, QDataStream&  arg__1);
   QPointF  p1(QLineF* theWrappedObject) const;
   QPointF  p2(QLineF* theWrappedObject) const;
   QPointF  pointAt(QLineF* theWrappedObject, qreal  t) const;
   void setAngle(QLineF* theWrappedObject, qreal  angle);
   void setLength(QLineF* theWrappedObject, qreal  len);
   void setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setP1(QLineF* theWrappedObject, const QPointF&  p1);
   void setP2(QLineF* theWrappedObject, const QPointF&  p2);
   void setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   QLine  toLine(QLineF* theWrappedObject) const;
   void translate(QLineF* theWrappedObject, const QPointF&  p);
   void translate(QLineF* theWrappedObject, qreal  dx, qreal  dy);
   QLineF  translated(QLineF* theWrappedObject, const QPointF&  p) const;
   QLineF  translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const;
   QLineF  unitVector(QLineF* theWrappedObject) const;
   qreal  x1(QLineF* theWrappedObject) const;
   qreal  x2(QLineF* theWrappedObject) const;
   qreal  y1(QLineF* theWrappedObject) const;
   qreal  y2(QLineF* theWrappedObject) const;
    QString py_toString(QLineF*);
    bool __nonzero__(QLineF* obj) { return !obj->isNull(); }
};





class PythonQtShell_QRect : public QRect
{
public:
    PythonQtShell_QRect():QRect(),_wrapper(NULL) {};

   ~PythonQtShell_QRect();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRect : public QObject
{ Q_OBJECT
public:
public slots:
QRect* new_QRect();
QRect* new_QRect(const QRect& other) {
PythonQtShell_QRect* a = new PythonQtShell_QRect();
*((QRect*)a) = other;
return a; }
void delete_QRect(QRect* obj) { delete obj; } 
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QRect*);
};





class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public slots:
QTime* new_QTime();
QTime* new_QTime(int  h, int  m, int  s = 0, int  ms = 0);
QTime* new_QTime(const QTime& other) {
QTime* a = new QTime();
*((QTime*)a) = other;
return a; }
void delete_QTime(QTime* obj) { delete obj; } 
   QTime  addMSecs(QTime* theWrappedObject, int  ms) const;
   QTime  addSecs(QTime* theWrappedObject, int  secs) const;
   QTime  static_QTime_currentTime();
   int  elapsed(QTime* theWrappedObject) const;
   QTime  static_QTime_fromMSecsSinceStartOfDay(int  msecs);
   QTime  static_QTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QTime  static_QTime_fromString(const QString&  s, const QString&  format);
   int  hour(QTime* theWrappedObject) const;
   bool  isNull(QTime* theWrappedObject) const;
   bool  isValid(QTime* theWrappedObject) const;
   bool  static_QTime_isValid(int  h, int  m, int  s, int  ms = 0);
   int  minute(QTime* theWrappedObject) const;
   int  msec(QTime* theWrappedObject) const;
   int  msecsSinceStartOfDay(QTime* theWrappedObject) const;
   int  msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  __ne__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __lt__(QTime* theWrappedObject, const QTime&  other) const;
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __eq__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __gt__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __ge__(QTime* theWrappedObject, const QTime&  other) const;
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   int  restart(QTime* theWrappedObject);
   int  second(QTime* theWrappedObject) const;
   int  secsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms = 0);
   void start(QTime* theWrappedObject);
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
    QString py_toString(QTime*);
    bool __nonzero__(QTime* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ComponentFormattingOption ParsingMode UrlFormattingOption )
Q_FLAGS(ComponentFormattingOptions )
enum ComponentFormattingOption{
  PrettyDecoded = QUrl::PrettyDecoded,   EncodeSpaces = QUrl::EncodeSpaces,   EncodeUnicode = QUrl::EncodeUnicode,   EncodeDelimiters = QUrl::EncodeDelimiters,   EncodeReserved = QUrl::EncodeReserved,   DecodeReserved = QUrl::DecodeReserved,   FullyEncoded = QUrl::FullyEncoded,   FullyDecoded = QUrl::FullyDecoded};
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode,   DecodedMode = QUrl::DecodedMode};
enum UrlFormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   PreferLocalFile = QUrl::PreferLocalFile,   StripTrailingSlash = QUrl::StripTrailingSlash,   RemoveFilename = QUrl::RemoveFilename,   NormalizePathSegments = QUrl::NormalizePathSegments};
Q_DECLARE_FLAGS(ComponentFormattingOptions, ComponentFormattingOption)
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; } 
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QUrl*);
};





class PythonQtWrapper_Qt : public QObject
{ Q_OBJECT
public:
Q_ENUMS(GlobalColor KeyboardModifier )
Q_FLAGS(KeyboardModifiers )
enum GlobalColor{
  color0 = Qt::color0,   color1 = Qt::color1,   black = Qt::black,   white = Qt::white,   darkGray = Qt::darkGray,   gray = Qt::gray,   lightGray = Qt::lightGray,   red = Qt::red,   green = Qt::green,   blue = Qt::blue,   cyan = Qt::cyan,   magenta = Qt::magenta,   yellow = Qt::yellow,   darkRed = Qt::darkRed,   darkGreen = Qt::darkGreen,   darkBlue = Qt::darkBlue,   darkCyan = Qt::darkCyan,   darkMagenta = Qt::darkMagenta,   darkYellow = Qt::darkYellow,   transparent = Qt::transparent};
enum KeyboardModifier{
  NoModifier = Qt::NoModifier,   ShiftModifier = Qt::ShiftModifier,   ControlModifier = Qt::ControlModifier,   AltModifier = Qt::AltModifier,   MetaModifier = Qt::MetaModifier,   KeypadModifier = Qt::KeypadModifier,   GroupSwitchModifier = Qt::GroupSwitchModifier,   KeyboardModifierMask = Qt::KeyboardModifierMask};
Q_DECLARE_FLAGS(KeyboardModifiers, KeyboardModifier)
public slots:
   QTextCodec*  static_Qt_codecForHtml(const QByteArray&  ba);
   QString  static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode = Qt::WhiteSpacePre);
   bool  static_Qt_mightBeRichText(const QString&  arg__1);
};


