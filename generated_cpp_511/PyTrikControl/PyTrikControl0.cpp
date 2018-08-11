#include "PyTrikControl0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>



trikControl::BrickFactory* PythonQtWrapper_trikControl__BrickFactory::new_trikControl__BrickFactory()
{ 
return new trikControl::BrickFactory(); }

trikControl::BrickInterface*  PythonQtWrapper_trikControl__BrickFactory::static_trikControl__BrickFactory_create(const QString&  configFilesPath, const QString&  mediaPath)
{
  return (trikControl::BrickFactory::create(configFilesPath, mediaPath));
}

trikControl::BrickInterface*  PythonQtWrapper_trikControl__BrickFactory::static_trikControl__BrickFactory_create(const QString&  systemConfig, const QString&  modelConfig, const QString&  mediaPath)
{
  return (trikControl::BrickFactory::create(systemConfig, modelConfig, mediaPath));
}


