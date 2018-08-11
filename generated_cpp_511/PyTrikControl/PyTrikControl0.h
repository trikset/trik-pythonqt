#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <brickFactory.h>



class PythonQtWrapper_trikControl : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtWrapper_trikControl__BrickFactory : public QObject
{ Q_OBJECT
public:
public slots:
trikControl::BrickFactory* new_trikControl__BrickFactory();
void delete_trikControl__BrickFactory(trikControl::BrickFactory* obj) { delete obj; } 
   trikControl::BrickInterface*  static_trikControl__BrickFactory_create(const QString&  configFilesPath = ".", const QString&  mediaPath = ".");
   trikControl::BrickInterface*  static_trikControl__BrickFactory_create(const QString&  systemConfig, const QString&  modelConfig, const QString&  mediaPath);
};


