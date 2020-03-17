#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_gui_builtin0.h"


void PythonQt_init_QtGuiBuiltin(PyObject* module) {
PythonQt::priv()->registerCPPClass("QBitmap", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QBitmap>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QImage", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QImage>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImage>, module, 0);
PythonQt::self()->addParentClass("QImage", "QPaintDevice",PythonQtUpcastingOffset<QImage,QPaintDevice>());
PythonQt::priv()->registerCPPClass("QTextFormat", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextFormat>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QTextLength", "", "QtGui", PythonQtCreateObject<PythonQtWrapper_QTextLength>, NULL, module, PythonQt::Type_RichCompare);


}
