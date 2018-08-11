#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "PyTrikControl0.h"



void PythonQt_init_PyTrikControl(PyObject* module) {
PythonQt::priv()->registerCPPClass("trikControl", "", "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("trikControl::BrickFactory", "", "PyTrikControl", PythonQtCreateObject<PythonQtWrapper_trikControl__BrickFactory>, NULL, module, 0);


}
