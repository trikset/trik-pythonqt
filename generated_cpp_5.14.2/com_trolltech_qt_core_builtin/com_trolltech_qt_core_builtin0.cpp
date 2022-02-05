#include "com_trolltech_qt_core_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QMatrix>
#include <QStringList>
#include <QTextDocument>
#include <QTransform>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qtextcodec.h>
#include <qurl.h>

QDate* PythonQtWrapper_QDate::new_QDate()
{ 
return new QDate(); }

QDate* PythonQtWrapper_QDate::new_QDate(int  y, int  m, int  d)
{ 
return new QDate(y, m, d); }

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, qint64  days) const
{
  return ( theWrappedObject->addDays(days));
}

QDate  PythonQtWrapper_QDate::addMonths(QDate* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QDate  PythonQtWrapper_QDate::addYears(QDate* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

int  PythonQtWrapper_QDate::day(QDate* theWrappedObject) const
{
  return ( theWrappedObject->day());
}

int  PythonQtWrapper_QDate::dayOfWeek(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfWeek());
}

int  PythonQtWrapper_QDate::dayOfYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfYear());
}

int  PythonQtWrapper_QDate::daysInMonth(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInMonth());
}

int  PythonQtWrapper_QDate::daysInYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInYear());
}

qint64  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, const QDate&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

QDateTime  PythonQtWrapper_QDate::endOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds) const
{
  return ( theWrappedObject->endOfDay(spec, offsetSeconds));
}

QDateTime  PythonQtWrapper_QDate::endOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->endOfDay(zone));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromJulianDay(qint64  jd_)
{
  return (QDate::fromJulianDay(jd_));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDate::fromString(s, f));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, const QString&  format)
{
  return (QDate::fromString(s, format));
}

void PythonQtWrapper_QDate::getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day)
{
  ( theWrappedObject->getDate(year, month, day));
}

void PythonQtWrapper_QDate::getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day) const
{
  ( theWrappedObject->getDate(year, month, day));
}

bool  PythonQtWrapper_QDate::static_QDate_isLeapYear(int  year)
{
  return (QDate::isLeapYear(year));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QDate::static_QDate_isValid(int  y, int  m, int  d)
{
  return (QDate::isValid(y, m, d));
}

QString  PythonQtWrapper_QDate::static_QDate_longDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::longDayName(weekday, type));
}

QString  PythonQtWrapper_QDate::static_QDate_longMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::longMonthName(month, type));
}

int  PythonQtWrapper_QDate::month(QDate* theWrappedObject) const
{
  return ( theWrappedObject->month());
}

bool  PythonQtWrapper_QDate::__ne__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QDate::__lt__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QDate::__le__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)<= other);
}

bool  PythonQtWrapper_QDate::__eq__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QDate::__gt__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QDate::__ge__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)>= other);
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QDate::setDate(QDate* theWrappedObject, int  year, int  month, int  day)
{
  return ( theWrappedObject->setDate(year, month, day));
}

QString  PythonQtWrapper_QDate::static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::shortDayName(weekday, type));
}

QString  PythonQtWrapper_QDate::static_QDate_shortMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::shortMonthName(month, type));
}

QDateTime  PythonQtWrapper_QDate::startOfDay(QDate* theWrappedObject, Qt::TimeSpec  spec, int  offsetSeconds) const
{
  return ( theWrappedObject->startOfDay(spec, offsetSeconds));
}

QDateTime  PythonQtWrapper_QDate::startOfDay(QDate* theWrappedObject, const QTimeZone&  zone) const
{
  return ( theWrappedObject->startOfDay(zone));
}

qint64  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

int  PythonQtWrapper_QDate::weekNumber(QDate* theWrappedObject, int*  yearNum) const
{
  return ( theWrappedObject->weekNumber(yearNum));
}

int  PythonQtWrapper_QDate::year(QDate* theWrappedObject) const
{
  return ( theWrappedObject->year());
}

QString PythonQtWrapper_QDate::py_toString(QDate* obj) { return obj->toString(); }


QLine* PythonQtWrapper_QLine::new_QLine()
{ 
return new QLine(); }

QLine* PythonQtWrapper_QLine::new_QLine(const QPoint&  pt1, const QPoint&  pt2)
{ 
return new QLine(pt1, pt2); }

QLine* PythonQtWrapper_QLine::new_QLine(int  x1, int  y1, int  x2, int  y2)
{ 
return new QLine(x1, y1, x2, y2); }

QPoint  PythonQtWrapper_QLine::center(QLine* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

int  PythonQtWrapper_QLine::dx(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

int  PythonQtWrapper_QLine::dy(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

bool  PythonQtWrapper_QLine::isNull(QLine* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QLine::__ne__(QLine* theWrappedObject, const QLine&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLine::writeTo(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLine::__eq__(QLine* theWrappedObject, const QLine&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLine::readFrom(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPoint  PythonQtWrapper_QLine::p1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPoint  PythonQtWrapper_QLine::p2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

void PythonQtWrapper_QLine::setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QLine::setP1(QLine* theWrappedObject, const QPoint&  p1)
{
  ( theWrappedObject->setP1(p1));
}

void PythonQtWrapper_QLine::setP2(QLine* theWrappedObject, const QPoint&  p2)
{
  ( theWrappedObject->setP2(p2));
}

void PythonQtWrapper_QLine::setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

int  PythonQtWrapper_QLine::x1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

int  PythonQtWrapper_QLine::x2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

int  PythonQtWrapper_QLine::y1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

int  PythonQtWrapper_QLine::y2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLine::py_toString(QLine* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QLineF* PythonQtWrapper_QLineF::new_QLineF()
{ 
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QLine&  line)
{ 
return new QLineF(line); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{ 
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{ 
return new QLineF(x1, y1, x2, y2); }

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angle(l));
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angleTo(l));
}

QPointF  PythonQtWrapper_QLineF::center(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QLineF  PythonQtWrapper_QLineF::static_QLineF_fromPolar(qreal  length, qreal  angle)
{
  return (QLineF::fromPolar(length, angle));
}

QLineF::IntersectType  PythonQtWrapper_QLineF::intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const
{
  return ( theWrappedObject->intersect(l, intersectionPoint));
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->normalVector());
}

bool  PythonQtWrapper_QLineF::__ne__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLineF::__eq__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAt(t));
}

void PythonQtWrapper_QLineF::setAngle(QLineF* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setAngle(angle));
}

void PythonQtWrapper_QLineF::setLength(QLineF* theWrappedObject, qreal  len)
{
  ( theWrappedObject->setLength(len));
}

void PythonQtWrapper_QLineF::setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QLineF::setP1(QLineF* theWrappedObject, const QPointF&  p1)
{
  ( theWrappedObject->setP1(p1));
}

void PythonQtWrapper_QLineF::setP2(QLineF* theWrappedObject, const QPointF&  p2)
{
  ( theWrappedObject->setP2(p2));
}

void PythonQtWrapper_QLineF::setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

QLine  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->toLine());
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->unitVector());
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLineF::py_toString(QLineF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QRect::~PythonQtShell_QRect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QRect* PythonQtWrapper_QRect::new_QRect()
{ 
return new PythonQtShell_QRect(); }

void PythonQtWrapper_QRect::writeTo(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QRect::readFrom(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QRect::py_toString(QRect* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTime* PythonQtWrapper_QTime::new_QTime()
{ 
return new QTime(); }

QTime* PythonQtWrapper_QTime::new_QTime(int  h, int  m, int  s, int  ms)
{ 
return new QTime(h, m, s, ms); }

QTime  PythonQtWrapper_QTime::addMSecs(QTime* theWrappedObject, int  ms) const
{
  return ( theWrappedObject->addMSecs(ms));
}

QTime  PythonQtWrapper_QTime::addSecs(QTime* theWrappedObject, int  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
  return (QTime::currentTime());
}

int  PythonQtWrapper_QTime::elapsed(QTime* theWrappedObject) const
{
  return ( theWrappedObject->elapsed());
}

QTime  PythonQtWrapper_QTime::static_QTime_fromMSecsSinceStartOfDay(int  msecs)
{
  return (QTime::fromMSecsSinceStartOfDay(msecs));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QTime::fromString(s, f));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, const QString&  format)
{
  return (QTime::fromString(s, format));
}

int  PythonQtWrapper_QTime::hour(QTime* theWrappedObject) const
{
  return ( theWrappedObject->hour());
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTime::static_QTime_isValid(int  h, int  m, int  s, int  ms)
{
  return (QTime::isValid(h, m, s, ms));
}

int  PythonQtWrapper_QTime::minute(QTime* theWrappedObject) const
{
  return ( theWrappedObject->minute());
}

int  PythonQtWrapper_QTime::msec(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msec());
}

int  PythonQtWrapper_QTime::msecsSinceStartOfDay(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msecsSinceStartOfDay());
}

int  PythonQtWrapper_QTime::msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->msecsTo(arg__1));
}

bool  PythonQtWrapper_QTime::__ne__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTime::__lt__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTime::__le__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)<= other);
}

bool  PythonQtWrapper_QTime::__eq__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QTime::__gt__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QTime::__ge__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)>= other);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTime::restart(QTime* theWrappedObject)
{
  return ( theWrappedObject->restart());
}

int  PythonQtWrapper_QTime::second(QTime* theWrappedObject) const
{
  return ( theWrappedObject->second());
}

int  PythonQtWrapper_QTime::secsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->secsTo(arg__1));
}

bool  PythonQtWrapper_QTime::setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms)
{
  return ( theWrappedObject->setHMS(h, m, s, ms));
}

void PythonQtWrapper_QTime::start(QTime* theWrappedObject)
{
  ( theWrappedObject->start());
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString PythonQtWrapper_QTime::py_toString(QTime* obj) { return obj->toString(); }


QUrl* PythonQtWrapper_QUrl::new_QUrl()
{ 
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{ 
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{ 
return new QUrl(copy); }

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QUrl::py_toString(QUrl* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTextCodec*  PythonQtWrapper_Qt::static_Qt_codecForHtml(const QByteArray&  ba)
{
  return (Qt::codecForHtml(ba));
}

QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return (Qt::convertFromPlainText(plain, mode));
}

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return (Qt::mightBeRichText(arg__1));
}


