#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui0.h"
#include "com_trolltech_qt_gui1.h"
#include "com_trolltech_qt_gui2.h"

static void* polymorphichandler_QEvent(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QEvent *object = (QEvent *)ptr;
    if (object->type() == QEvent::ActionAdded || object->type() == QEvent::ActionRemoved || object->type() == QEvent::ActionChanged) {
        *class_name = "QActionEvent";
        return (QActionEvent*)object;
    }
    if (object->type() == QEvent::Close) {
        *class_name = "QCloseEvent";
        return (QCloseEvent*)object;
    }
    if (object->type() == QEvent::ContextMenu) {
        *class_name = "QContextMenuEvent";
        return (QContextMenuEvent*)object;
    }
    if (object->type() == QEvent::DragEnter) {
        *class_name = "QDragEnterEvent";
        return (QDragEnterEvent*)object;
    }
    if (object->type() == QEvent::DragLeave) {
        *class_name = "QDragLeaveEvent";
        return (QDragLeaveEvent*)object;
    }
    if (object->type() == QEvent::DragMove) {
        *class_name = "QDragMoveEvent";
        return (QDragMoveEvent*)object;
    }
    if (object->type() == QEvent::Drop) {
        *class_name = "QDropEvent";
        return (QDropEvent*)object;
    }
    if (object->type() == QEvent::Enter) {
        *class_name = "QEnterEvent";
        return (QEnterEvent*)object;
    }
    if (object->type() == QEvent::Expose) {
        *class_name = "QExposeEvent";
        return (QExposeEvent*)object;
    }
    if (object->type() == QEvent::FileOpen) {
        *class_name = "QFileOpenEvent";
        return (QFileOpenEvent*)object;
    }
    if (object->type() == QEvent::FocusIn || object->type() == QEvent::FocusOut) {
        *class_name = "QFocusEvent";
        return (QFocusEvent*)object;
    }
    if (object->type() == QEvent::ToolTip || object->type() == QEvent::WhatsThis) {
        *class_name = "QHelpEvent";
        return (QHelpEvent*)object;
    }
    if (object->type() == QEvent::Hide) {
        *class_name = "QHideEvent";
        return (QHideEvent*)object;
    }
    if (object->type() == QEvent::HoverEnter || object->type() == QEvent::HoverLeave || object->type() == QEvent::HoverMove) {
        *class_name = "QHoverEvent";
        return (QHoverEvent*)object;
    }
    if (object->type() == QEvent::IconDrag) {
        *class_name = "QIconDragEvent";
        return (QIconDragEvent*)object;
    }
    if (object->type() == QEvent::InputMethod) {
        *class_name = "QInputMethodEvent";
        return (QInputMethodEvent*)object;
    }
    if (object->type() == QEvent::InputMethodQuery) {
        *class_name = "QInputMethodQueryEvent";
        return (QInputMethodQueryEvent*)object;
    }
    if (object->type() == QEvent::KeyPress || object->type() == QEvent::KeyRelease) {
        *class_name = "QKeyEvent";
        return (QKeyEvent*)object;
    }
    if (object->type() == QEvent::MouseButtonDblClick || object->type() == QEvent::MouseButtonPress || object->type() == QEvent::MouseButtonRelease || object->type() == QEvent::MouseMove) {
        *class_name = "QMouseEvent";
        return (QMouseEvent*)object;
    }
    if (object->type() == QEvent::Move) {
        *class_name = "QMoveEvent";
        return (QMoveEvent*)object;
    }
    if (object->type() == QEvent::NativeGesture) {
        *class_name = "QNativeGestureEvent";
        return (QNativeGestureEvent*)object;
    }
    if (object->type() == QEvent::Paint) {
        *class_name = "QPaintEvent";
        return (QPaintEvent*)object;
    }
    if (object->type() == QEvent::PlatformSurface) {
        *class_name = "QPlatformSurfaceEvent";
        return (QPlatformSurfaceEvent*)object;
    }
    if (object->type() == QEvent::Resize) {
        *class_name = "QResizeEvent";
        return (QResizeEvent*)object;
    }
    if (object->type() == QEvent::OrientationChange) {
        *class_name = "QScreenOrientationChangeEvent";
        return (QScreenOrientationChangeEvent*)object;
    }
    if (object->type() == QEvent::Scroll) {
        *class_name = "QScrollEvent";
        return (QScrollEvent*)object;
    }
    if (object->type() == QEvent::ScrollPrepare) {
        *class_name = "QScrollPrepareEvent";
        return (QScrollPrepareEvent*)object;
    }
    if (object->type() == QEvent::Shortcut) {
        *class_name = "QShortcutEvent";
        return (QShortcutEvent*)object;
    }
    if (object->type() == QEvent::Show) {
        *class_name = "QShowEvent";
        return (QShowEvent*)object;
    }
    if (object->type() == QEvent::StatusTip) {
        *class_name = "QStatusTipEvent";
        return (QStatusTipEvent*)object;
    }
    if (object->type() == QEvent::TabletMove || object->type() == QEvent::TabletPress || object->type() == QEvent::TabletRelease || object->type() == QEvent::TabletEnterProximity || object->type() == QEvent::TabletLeaveProximity) {
        *class_name = "QTabletEvent";
        return (QTabletEvent*)object;
    }
    if (object->type() == QEvent::ToolBarChange) {
        *class_name = "QToolBarChangeEvent";
        return (QToolBarChangeEvent*)object;
    }
    if (object->type() == QEvent::TouchBegin || object->type() == QEvent::TouchUpdate || object->type() == QEvent::TouchEnd) {
        *class_name = "QTouchEvent";
        return (QTouchEvent*)object;
    }
    if (object->type() == QEvent::WhatsThisClicked) {
        *class_name = "QWhatsThisClickedEvent";
        return (QWhatsThisClickedEvent*)object;
    }
    if (object->type() == QEvent::Wheel) {
        *class_name = "QWheelEvent";
        return (QWheelEvent*)object;
    }
    if (object->type() == QEvent::WindowStateChange) {
        *class_name = "QWindowStateChangeEvent";
        return (QWindowStateChangeEvent*)object;
    }
    return NULL;
}
static void* polymorphichandler_QGradient(const void *ptr, const char **class_name)
{
    Q_ASSERT(ptr != 0);
    QGradient *object = (QGradient *)ptr;
    if (object->type() == QGradient::ConicalGradient) {
        *class_name = "QConicalGradient";
        return (QConicalGradient*)object;
    }
    if (object->type() == QGradient::NoGradient) {
        *class_name = "QGradient";
        return (QGradient*)object;
    }
    if (object->type() == QGradient::LinearGradient) {
        *class_name = "QLinearGradient";
        return (QLinearGradient*)object;
    }
    if (object->type() == QGradient::RadialGradient) {
        *class_name = "QRadialGradient";
        return (QRadialGradient*)object;
    }
    return NULL;
}


void PythonQt_init_QtGui(PyObject* module) {
PythonQt::priv()->registerCPPClass("QActionEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QActionEvent>, NULL, module, 0);
PythonQt::priv()->registerClass(&QApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QApplication>, NULL, module, 0);
PythonQt::priv()->registerClass(&QBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QBoxLayout>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QCloseEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QCloseEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QConicalGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QConicalGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QContextMenuEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QContextMenuEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QContextMenuEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDragEnterEvent", "QDragMoveEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragEnterEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDragLeaveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragLeaveEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QDragMoveEvent", "QDropEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDragMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDragMoveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QDropEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QDropEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDropEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QEnterEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QEnterEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QEnterEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QExposeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QExposeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QExposeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QFileOpenEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFileOpenEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QFocusEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFocusEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QFontInfo", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QFontMetrics", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetrics>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QFontMetricsF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QFontMetricsF>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QFrame::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QFrame>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QFrame>, module, 0);
PythonQt::priv()->registerCPPClass("QGradient", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QGridLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGridLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGridLayout>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QGuiApplication::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QGuiApplication>, NULL, module, 0);
PythonQt::priv()->registerClass(&QHBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QHBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHBoxLayout>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QHelpEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHelpEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHideEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHideEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHoverEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QHoverEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHoverEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QIconDragEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QIconDragEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputEvent>, module, 0);
PythonQt::priv()->registerClass(&QInputMethod::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethod>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodEvent::Attribute", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodEvent__Attribute>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QInputMethodEvent__Attribute>, module, 0);
PythonQt::priv()->registerCPPClass("QInputMethodQueryEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QInputMethodQueryEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QKeyEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QKeyEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QKeyEvent>, module, 0);
PythonQt::priv()->registerClass(&QLabel::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLabel>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLabel>, module, 0);
PythonQt::priv()->registerClass(&QLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayout>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QLayout", "QLayoutItem",PythonQtUpcastingOffset<QLayout,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QLayoutItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLayoutItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLayoutItem>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QLinearGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QLinearGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMargins", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMargins>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMouseEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMouseEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMouseEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QMoveEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QMoveEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMoveEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QNativeGestureEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QNativeGestureEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNativeGestureEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintDevice>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintDevice>, module, 0);
PythonQt::priv()->registerCPPClass("QPaintEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPaintEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPaintEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPainterPath", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath>, NULL, module, PythonQt::Type_Add|PythonQt::Type_And|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceAnd|PythonQt::Type_InplaceOr|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_Or|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QPainterPathStroker", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPathStroker>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPainterPath::Element", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPainterPath__Element>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPainterPath__Element>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QPixelFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPixelFormat>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QPlatformSurfaceEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPlatformSurfaceEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QPlatformSurfaceEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QPolygonF", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QPolygonF>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QRadialGradient", "QGradient", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRadialGradient>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QResizeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QResizeEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QResizeEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QRgba64", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QRgba64>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRgba64>, module, 0);
PythonQt::priv()->registerCPPClass("QScreenOrientationChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScreenOrientationChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QScrollEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QScrollPrepareEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QScrollPrepareEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QShortcutEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShortcutEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QShortcutEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QShowEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QShowEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QSpacerItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QSpacerItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSpacerItem>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QSpacerItem", "QLayoutItem",PythonQtUpcastingOffset<QSpacerItem,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QStatusTipEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QStatusTipEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTabletEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTabletEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTabletEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QToolBarChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QToolBarChangeEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTouchDevice", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchDevice>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTouchEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTouchEvent>, module, 0);
PythonQt::priv()->registerCPPClass("QTouchEvent::TouchPoint", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTouchEvent__TouchPoint>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QTransform", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTransform>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerClass(&QVBoxLayout::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QVBoxLayout>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVBoxLayout>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QVector2D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector2D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QVector3D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector3D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QVector4D", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QVector4D>, NULL, module, PythonQt::Type_Add|PythonQt::Type_Divide|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceDivide|PythonQt::Type_InplaceMultiply|PythonQt::Type_InplaceSubtract|PythonQt::Type_Multiply|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QWhatsThisClickedEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWhatsThisClickedEvent>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QWheelEvent", "QInputEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWheelEvent>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWheelEvent>, module, 0);
PythonQt::priv()->registerClass(&QWidget::staticMetaObject, "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidget>, module, 0);
PythonQt::self()->addParentClass("QWidget", "QPaintDevice",PythonQtUpcastingOffset<QWidget,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QWidgetItem", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWidgetItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QWidgetItem>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QWidgetItem", "QLayoutItem",PythonQtUpcastingOffset<QWidgetItem,QLayoutItem>());
PythonQt::priv()->registerCPPClass("QWindowStateChangeEvent", "QEvent", "QtGui", PythonQtCreateObject<PythonQtWrapper_QWindowStateChangeEvent>, NULL, module, 0);

PythonQt::self()->addPolymorphicHandler("QEvent", polymorphichandler_QEvent);
PythonQt::self()->addPolymorphicHandler("QGradient", polymorphichandler_QGradient);

PythonQtRegisterListTemplateConverterForKnownClass(QList, QInputMethodEvent::Attribute);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QPolygonF);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QTouchEvent::TouchPoint);
}
