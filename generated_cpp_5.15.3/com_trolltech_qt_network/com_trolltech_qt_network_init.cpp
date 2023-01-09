#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_network0.h"



void PythonQt_init_QtNetwork(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractNetworkCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractNetworkCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractNetworkCache>, module, 0);
PythonQt::priv()->registerClass(&QAbstractSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerCPPClass("QAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAuthenticator>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QDnsLookup::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QDnsLookup>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QDnsLookup>, module, 0);
PythonQt::priv()->registerCPPClass("QHostInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostInfo>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QHstsPolicy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHstsPolicy>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QHttpMultiPart::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpMultiPart>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QIPv6Address", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QIPv6Address>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIPv6Address>, module, 0);
PythonQt::priv()->registerClass(&QLocalServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalServer>, module, 0);
PythonQt::priv()->registerClass(&QLocalSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QNetworkAccessManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAccessManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkAccessManager>, module, 0);
PythonQt::priv()->registerClass(&QNetworkConfigurationManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkConfigurationManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkConfigurationManager>, module, 0);
PythonQt::priv()->registerClass(&QNetworkCookieJar::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookieJar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkCookieJar>, module, 0);
PythonQt::priv()->registerClass(&QNetworkDiskCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkDiskCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkDiskCache>, module, 0);
PythonQt::priv()->registerClass(&QNetworkReply::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkReply>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkReply>, module, 0);
PythonQt::priv()->registerClass(&QNetworkSession::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkSession>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkSession>, module, 0);
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSsl", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSsl>, NULL, module, 0);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerCPPClass("QSslError", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslError>, NULL, module, 0);
#endif
#ifndef QT_NO_SSL
PythonQt::priv()->registerClass(&QSslSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSslSocket>, module, PythonQt::Type_NonZero);
#endif
PythonQt::priv()->registerClass(&QTcpServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpServer>, module, 0);
PythonQt::priv()->registerClass(&QTcpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpSocket>, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QUdpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QUdpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUdpSocket>, module, PythonQt::Type_NonZero);


PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsDomainNameRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsHostAddressRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsMailExchangeRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsServiceRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QDnsTextRecord);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkConfiguration);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkCookie);
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCertificate);
#endif
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslCipher);
#endif
#ifndef QT_NO_SSL
PythonQtRegisterListTemplateConverterForKnownClass(QList, QSslError);
#endif
PythonQtRegisterListTemplateConverterForKnownClass(QVector, QHstsPolicy);
}
