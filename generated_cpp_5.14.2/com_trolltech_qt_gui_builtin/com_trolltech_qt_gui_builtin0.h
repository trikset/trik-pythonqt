#include <PythonQt.h>
#include <QMatrix>
#include <QObject>
#include <QStringList>
#include <QVariant>
#include <qbitmap.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qtextformat.h>



class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public slots:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QBitmap&  other);
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = nullptr);
QBitmap* new_QBitmap(int  w, int  h);
void delete_QBitmap(QBitmap* obj) { delete obj; } 
   QBitmap*  operator_assign(QBitmap* theWrappedObject, const QBitmap&  other);
};





class PythonQtShell_QImage : public QImage
{
public:
    PythonQtShell_QImage(const QImage&  arg__1):QImage(arg__1),_wrapper(NULL) {};
    PythonQtShell_QImage(const QSize&  size, QImage::Format  format):QImage(size, format),_wrapper(NULL) {};
    PythonQtShell_QImage(const QString&  fileName, const char*  format = nullptr):QImage(fileName, format),_wrapper(NULL) {};
    PythonQtShell_QImage(int  width, int  height, QImage::Format  format):QImage(width, height, format),_wrapper(NULL) {};

   ~PythonQtShell_QImage();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QImage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format InvertMode )
enum Format{
  Format_Invalid = QImage::Format_Invalid,   Format_Mono = QImage::Format_Mono,   Format_MonoLSB = QImage::Format_MonoLSB,   Format_Indexed8 = QImage::Format_Indexed8,   Format_RGB32 = QImage::Format_RGB32,   Format_ARGB32 = QImage::Format_ARGB32,   Format_ARGB32_Premultiplied = QImage::Format_ARGB32_Premultiplied,   Format_RGB16 = QImage::Format_RGB16,   Format_ARGB8565_Premultiplied = QImage::Format_ARGB8565_Premultiplied,   Format_RGB666 = QImage::Format_RGB666,   Format_ARGB6666_Premultiplied = QImage::Format_ARGB6666_Premultiplied,   Format_RGB555 = QImage::Format_RGB555,   Format_ARGB8555_Premultiplied = QImage::Format_ARGB8555_Premultiplied,   Format_RGB888 = QImage::Format_RGB888,   Format_RGB444 = QImage::Format_RGB444,   Format_ARGB4444_Premultiplied = QImage::Format_ARGB4444_Premultiplied,   Format_RGBX8888 = QImage::Format_RGBX8888,   Format_RGBA8888 = QImage::Format_RGBA8888,   Format_RGBA8888_Premultiplied = QImage::Format_RGBA8888_Premultiplied,   Format_BGR30 = QImage::Format_BGR30,   Format_A2BGR30_Premultiplied = QImage::Format_A2BGR30_Premultiplied,   Format_RGB30 = QImage::Format_RGB30,   Format_A2RGB30_Premultiplied = QImage::Format_A2RGB30_Premultiplied,   Format_Alpha8 = QImage::Format_Alpha8,   Format_Grayscale8 = QImage::Format_Grayscale8,   Format_RGBX64 = QImage::Format_RGBX64,   Format_RGBA64 = QImage::Format_RGBA64,   Format_RGBA64_Premultiplied = QImage::Format_RGBA64_Premultiplied,   Format_Grayscale16 = QImage::Format_Grayscale16,   Format_BGR888 = QImage::Format_BGR888,   NImageFormats = QImage::NImageFormats};
enum InvertMode{
  InvertRgb = QImage::InvertRgb,   InvertRgba = QImage::InvertRgba};
public slots:
QImage* new_QImage(const QImage&  arg__1);
QImage* new_QImage(const QSize&  size, QImage::Format  format);
QImage* new_QImage(const QString&  fileName, const char*  format = nullptr);
QImage* new_QImage(int  width, int  height, QImage::Format  format);
void delete_QImage(QImage* obj) { delete obj; } 
   void writeTo(QImage* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QImage* theWrappedObject, QDataStream&  arg__1);
   unsigned int  pixel(QImage* theWrappedObject, const QPoint&  pt) const;
   QColor  pixelColor(QImage* theWrappedObject, const QPoint&  pt) const;
   int  pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const;
   void setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb);
   void setPixelColor(QImage* theWrappedObject, const QPoint&  pt, const QColor&  c);
   bool  valid(QImage* theWrappedObject, const QPoint&  pt) const;
    QString py_toString(QImage*);

QImage* new_QImage( const uchar * data, int width, int height, QImage::Format format )
{
  QImage* image = new QImage(width, height, format);
  memcpy(image->bits(), data, image->byteCount());
  return image;
}

PyObject* bits(QImage* image) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->bits(), image->bytesPerLine()* image->height());
}

#if QT_VERSION >= QT_VERSION_CHECK(4,7,0)
PyObject* constBits(QImage* image) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->constBits(), image->byteCount());
}
#endif

PyObject* scanLine(QImage* image, int line) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->scanLine(line), image->bytesPerLine());
}

#if QT_VERSION >= QT_VERSION_CHECK(4,7,0)
PyObject* constScanLine(QImage* image, int line) {
  return PythonQtPrivate::wrapMemoryAsBuffer(image->constScanLine(line), image->bytesPerLine());
}
#endif


};





class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FormatType ObjectTypes PageBreakFlag Property )
Q_FLAGS(PageBreakFlags )
enum FormatType{
  InvalidFormat = QTextFormat::InvalidFormat,   BlockFormat = QTextFormat::BlockFormat,   CharFormat = QTextFormat::CharFormat,   ListFormat = QTextFormat::ListFormat,   TableFormat = QTextFormat::TableFormat,   FrameFormat = QTextFormat::FrameFormat,   UserFormat = QTextFormat::UserFormat};
enum ObjectTypes{
  NoObject = QTextFormat::NoObject,   ImageObject = QTextFormat::ImageObject,   TableObject = QTextFormat::TableObject,   TableCellObject = QTextFormat::TableCellObject,   UserObject = QTextFormat::UserObject};
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
enum Property{
  ObjectIndex = QTextFormat::ObjectIndex,   CssFloat = QTextFormat::CssFloat,   LayoutDirection = QTextFormat::LayoutDirection,   OutlinePen = QTextFormat::OutlinePen,   BackgroundBrush = QTextFormat::BackgroundBrush,   ForegroundBrush = QTextFormat::ForegroundBrush,   BackgroundImageUrl = QTextFormat::BackgroundImageUrl,   BlockAlignment = QTextFormat::BlockAlignment,   BlockTopMargin = QTextFormat::BlockTopMargin,   BlockBottomMargin = QTextFormat::BlockBottomMargin,   BlockLeftMargin = QTextFormat::BlockLeftMargin,   BlockRightMargin = QTextFormat::BlockRightMargin,   TextIndent = QTextFormat::TextIndent,   TabPositions = QTextFormat::TabPositions,   BlockIndent = QTextFormat::BlockIndent,   LineHeight = QTextFormat::LineHeight,   LineHeightType = QTextFormat::LineHeightType,   BlockNonBreakableLines = QTextFormat::BlockNonBreakableLines,   BlockTrailingHorizontalRulerWidth = QTextFormat::BlockTrailingHorizontalRulerWidth,   HeadingLevel = QTextFormat::HeadingLevel,   BlockQuoteLevel = QTextFormat::BlockQuoteLevel,   BlockCodeLanguage = QTextFormat::BlockCodeLanguage,   BlockCodeFence = QTextFormat::BlockCodeFence,   BlockMarker = QTextFormat::BlockMarker,   FirstFontProperty = QTextFormat::FirstFontProperty,   FontCapitalization = QTextFormat::FontCapitalization,   FontLetterSpacingType = QTextFormat::FontLetterSpacingType,   FontLetterSpacing = QTextFormat::FontLetterSpacing,   FontWordSpacing = QTextFormat::FontWordSpacing,   FontStretch = QTextFormat::FontStretch,   FontStyleHint = QTextFormat::FontStyleHint,   FontStyleStrategy = QTextFormat::FontStyleStrategy,   FontKerning = QTextFormat::FontKerning,   FontHintingPreference = QTextFormat::FontHintingPreference,   FontFamilies = QTextFormat::FontFamilies,   FontStyleName = QTextFormat::FontStyleName,   FontFamily = QTextFormat::FontFamily,   FontPointSize = QTextFormat::FontPointSize,   FontSizeAdjustment = QTextFormat::FontSizeAdjustment,   FontSizeIncrement = QTextFormat::FontSizeIncrement,   FontWeight = QTextFormat::FontWeight,   FontItalic = QTextFormat::FontItalic,   FontUnderline = QTextFormat::FontUnderline,   FontOverline = QTextFormat::FontOverline,   FontStrikeOut = QTextFormat::FontStrikeOut,   FontFixedPitch = QTextFormat::FontFixedPitch,   FontPixelSize = QTextFormat::FontPixelSize,   LastFontProperty = QTextFormat::LastFontProperty,   TextUnderlineColor = QTextFormat::TextUnderlineColor,   TextVerticalAlignment = QTextFormat::TextVerticalAlignment,   TextOutline = QTextFormat::TextOutline,   TextUnderlineStyle = QTextFormat::TextUnderlineStyle,   TextToolTip = QTextFormat::TextToolTip,   IsAnchor = QTextFormat::IsAnchor,   AnchorHref = QTextFormat::AnchorHref,   AnchorName = QTextFormat::AnchorName,   ObjectType = QTextFormat::ObjectType,   ListStyle = QTextFormat::ListStyle,   ListIndent = QTextFormat::ListIndent,   ListNumberPrefix = QTextFormat::ListNumberPrefix,   ListNumberSuffix = QTextFormat::ListNumberSuffix,   FrameBorder = QTextFormat::FrameBorder,   FrameMargin = QTextFormat::FrameMargin,   FramePadding = QTextFormat::FramePadding,   FrameWidth = QTextFormat::FrameWidth,   FrameHeight = QTextFormat::FrameHeight,   FrameTopMargin = QTextFormat::FrameTopMargin,   FrameBottomMargin = QTextFormat::FrameBottomMargin,   FrameLeftMargin = QTextFormat::FrameLeftMargin,   FrameRightMargin = QTextFormat::FrameRightMargin,   FrameBorderBrush = QTextFormat::FrameBorderBrush,   FrameBorderStyle = QTextFormat::FrameBorderStyle,   TableColumns = QTextFormat::TableColumns,   TableColumnWidthConstraints = QTextFormat::TableColumnWidthConstraints,   TableCellSpacing = QTextFormat::TableCellSpacing,   TableCellPadding = QTextFormat::TableCellPadding,   TableHeaderRowCount = QTextFormat::TableHeaderRowCount,   TableBorderCollapse = QTextFormat::TableBorderCollapse,   TableCellRowSpan = QTextFormat::TableCellRowSpan,   TableCellColumnSpan = QTextFormat::TableCellColumnSpan,   TableCellTopPadding = QTextFormat::TableCellTopPadding,   TableCellBottomPadding = QTextFormat::TableCellBottomPadding,   TableCellLeftPadding = QTextFormat::TableCellLeftPadding,   TableCellRightPadding = QTextFormat::TableCellRightPadding,   TableCellTopBorder = QTextFormat::TableCellTopBorder,   TableCellBottomBorder = QTextFormat::TableCellBottomBorder,   TableCellLeftBorder = QTextFormat::TableCellLeftBorder,   TableCellRightBorder = QTextFormat::TableCellRightBorder,   TableCellTopBorderStyle = QTextFormat::TableCellTopBorderStyle,   TableCellBottomBorderStyle = QTextFormat::TableCellBottomBorderStyle,   TableCellLeftBorderStyle = QTextFormat::TableCellLeftBorderStyle,   TableCellRightBorderStyle = QTextFormat::TableCellRightBorderStyle,   TableCellTopBorderBrush = QTextFormat::TableCellTopBorderBrush,   TableCellBottomBorderBrush = QTextFormat::TableCellBottomBorderBrush,   TableCellLeftBorderBrush = QTextFormat::TableCellLeftBorderBrush,   TableCellRightBorderBrush = QTextFormat::TableCellRightBorderBrush,   ImageName = QTextFormat::ImageName,   ImageTitle = QTextFormat::ImageTitle,   ImageAltText = QTextFormat::ImageAltText,   ImageWidth = QTextFormat::ImageWidth,   ImageHeight = QTextFormat::ImageHeight,   ImageQuality = QTextFormat::ImageQuality,   FullWidthSelection = QTextFormat::FullWidthSelection,   PageBreakPolicy = QTextFormat::PageBreakPolicy,   UserProperty = QTextFormat::UserProperty};
Q_DECLARE_FLAGS(PageBreakFlags, PageBreakFlag)
public slots:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; } 
   QBrush  background(QTextFormat* theWrappedObject) const;
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void clearBackground(QTextFormat* theWrappedObject);
   void clearForeground(QTextFormat* theWrappedObject);
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   bool  isEmpty(QTextFormat* theWrappedObject) const;
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   bool  isListFormat(QTextFormat* theWrappedObject) const;
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   bool  isValid(QTextFormat* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QVector<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   int  objectIndex(QTextFormat* theWrappedObject) const;
   int  objectType(QTextFormat* theWrappedObject) const;
   bool  __ne__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths);
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void swap(QTextFormat* theWrappedObject, QTextFormat&  other);
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   int  type(QTextFormat* theWrappedObject) const;
    QString py_toString(QTextFormat*);
    bool __nonzero__(QTextFormat* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QTextLength : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  VariableLength = QTextLength::VariableLength,   FixedLength = QTextLength::FixedLength,   PercentageLength = QTextLength::PercentageLength};
public slots:
QTextLength* new_QTextLength();
QTextLength* new_QTextLength(QTextLength::Type  type, qreal  value);
QTextLength* new_QTextLength(const QTextLength& other) {
QTextLength* a = new QTextLength();
*((QTextLength*)a) = other;
return a; }
void delete_QTextLength(QTextLength* obj) { delete obj; } 
   bool  __ne__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1);
   qreal  rawValue(QTextLength* theWrappedObject) const;
   QTextLength::Type  type(QTextLength* theWrappedObject) const;
   qreal  value(QTextLength* theWrappedObject, qreal  maximumLength) const;
    QString py_toString(QTextLength*);
};


