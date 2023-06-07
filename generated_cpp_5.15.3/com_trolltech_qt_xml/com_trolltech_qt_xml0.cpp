#include "com_trolltech_qt_xml0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qxml.h>
#include <qxmlstream.h>

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr()
{ 
return new QDomAttr(); }

QDomAttr* PythonQtWrapper_QDomAttr::new_QDomAttr(const QDomAttr&  x)
{ 
return new QDomAttr(x); }

QString  PythonQtWrapper_QDomAttr::name(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDomElement  PythonQtWrapper_QDomAttr::ownerElement(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->ownerElement());
}

void PythonQtWrapper_QDomAttr::setValue(QDomAttr* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setValue(arg__1));
}

bool  PythonQtWrapper_QDomAttr::specified(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->specified());
}

QString  PythonQtWrapper_QDomAttr::value(QDomAttr* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QDomCDATASection* PythonQtWrapper_QDomCDATASection::new_QDomCDATASection()
{ 
return new QDomCDATASection(); }

QDomCDATASection* PythonQtWrapper_QDomCDATASection::new_QDomCDATASection(const QDomCDATASection&  x)
{ 
return new QDomCDATASection(x); }



QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData()
{ 
return new QDomCharacterData(); }

QDomCharacterData* PythonQtWrapper_QDomCharacterData::new_QDomCharacterData(const QDomCharacterData&  x)
{ 
return new QDomCharacterData(x); }

void PythonQtWrapper_QDomCharacterData::appendData(QDomCharacterData* theWrappedObject, const QString&  arg)
{
  ( theWrappedObject->appendData(arg));
}

QString  PythonQtWrapper_QDomCharacterData::data(QDomCharacterData* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QDomCharacterData::deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
  ( theWrappedObject->deleteData(offset, count));
}

void PythonQtWrapper_QDomCharacterData::insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg)
{
  ( theWrappedObject->insertData(offset, arg));
}

int  PythonQtWrapper_QDomCharacterData::length(QDomCharacterData* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

void PythonQtWrapper_QDomCharacterData::replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg)
{
  ( theWrappedObject->replaceData(offset, count, arg));
}

void PythonQtWrapper_QDomCharacterData::setData(QDomCharacterData* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setData(arg__1));
}

QString  PythonQtWrapper_QDomCharacterData::substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count)
{
  return ( theWrappedObject->substringData(offset, count));
}



QDomComment* PythonQtWrapper_QDomComment::new_QDomComment()
{ 
return new QDomComment(); }

QDomComment* PythonQtWrapper_QDomComment::new_QDomComment(const QDomComment&  x)
{ 
return new QDomComment(x); }



QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument()
{ 
return new QDomDocument(); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocument&  x)
{ 
return new QDomDocument(x); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QDomDocumentType&  doctype)
{ 
return new QDomDocument(doctype); }

QDomDocument* PythonQtWrapper_QDomDocument::new_QDomDocument(const QString&  name)
{ 
return new QDomDocument(name); }

QDomAttr  PythonQtWrapper_QDomDocument::createAttribute(QDomDocument* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->createAttribute(name));
}

QDomAttr  PythonQtWrapper_QDomDocument::createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
  return ( theWrappedObject->createAttributeNS(nsURI, qName));
}

QDomCDATASection  PythonQtWrapper_QDomDocument::createCDATASection(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createCDATASection(data));
}

QDomComment  PythonQtWrapper_QDomDocument::createComment(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createComment(data));
}

QDomDocumentFragment  PythonQtWrapper_QDomDocument::createDocumentFragment(QDomDocument* theWrappedObject)
{
  return ( theWrappedObject->createDocumentFragment());
}

QDomElement  PythonQtWrapper_QDomDocument::createElement(QDomDocument* theWrappedObject, const QString&  tagName)
{
  return ( theWrappedObject->createElement(tagName));
}

QDomElement  PythonQtWrapper_QDomDocument::createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName)
{
  return ( theWrappedObject->createElementNS(nsURI, qName));
}

QDomEntityReference  PythonQtWrapper_QDomDocument::createEntityReference(QDomDocument* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->createEntityReference(name));
}

QDomProcessingInstruction  PythonQtWrapper_QDomDocument::createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data)
{
  return ( theWrappedObject->createProcessingInstruction(target, data));
}

QDomText  PythonQtWrapper_QDomDocument::createTextNode(QDomDocument* theWrappedObject, const QString&  data)
{
  return ( theWrappedObject->createTextNode(data));
}

QDomDocumentType  PythonQtWrapper_QDomDocument::doctype(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->doctype());
}

QDomElement  PythonQtWrapper_QDomDocument::documentElement(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentElement());
}

QDomElement  PythonQtWrapper_QDomDocument::elementById(QDomDocument* theWrappedObject, const QString&  elementId)
{
  return ( theWrappedObject->elementById(elementId));
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const
{
  return ( theWrappedObject->elementsByTagName(tagname));
}

QDomNodeList  PythonQtWrapper_QDomDocument::elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->elementsByTagNameNS(nsURI, localName));
}

QDomImplementation  PythonQtWrapper_QDomDocument::implementation(QDomDocument* theWrappedObject) const
{
  return ( theWrappedObject->implementation());
}

QDomNode  PythonQtWrapper_QDomDocument::importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep)
{
  return ( theWrappedObject->importNode(importedNode, deep));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(dev, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(dev, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, QXmlReader*  reader, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(source, reader, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(source, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(reader, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, errorMsg, errorLine, errorColumn));
}

bool  PythonQtWrapper_QDomDocument::setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg, int*  errorLine, int*  errorColumn)
{
  return ( theWrappedObject->setContent(text, namespaceProcessing, errorMsg, errorLine, errorColumn));
}

QByteArray  PythonQtWrapper_QDomDocument::toByteArray(QDomDocument* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->toByteArray(arg__1));
}

QString  PythonQtWrapper_QDomDocument::toString(QDomDocument* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->toString(arg__1));
}

QString PythonQtWrapper_QDomDocument::py_toString(QDomDocument* obj) { return obj->toString(); }


QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment()
{ 
return new QDomDocumentFragment(); }

QDomDocumentFragment* PythonQtWrapper_QDomDocumentFragment::new_QDomDocumentFragment(const QDomDocumentFragment&  x)
{ 
return new QDomDocumentFragment(x); }



QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType()
{ 
return new QDomDocumentType(); }

QDomDocumentType* PythonQtWrapper_QDomDocumentType::new_QDomDocumentType(const QDomDocumentType&  x)
{ 
return new QDomDocumentType(x); }

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::entities(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->entities());
}

QString  PythonQtWrapper_QDomDocumentType::internalSubset(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->internalSubset());
}

QString  PythonQtWrapper_QDomDocumentType::name(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDomNamedNodeMap  PythonQtWrapper_QDomDocumentType::notations(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->notations());
}

QString  PythonQtWrapper_QDomDocumentType::publicId(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomDocumentType::systemId(QDomDocumentType* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QDomElement* PythonQtWrapper_QDomElement::new_QDomElement()
{ 
return new QDomElement(); }

QDomElement* PythonQtWrapper_QDomElement::new_QDomElement(const QDomElement&  x)
{ 
return new QDomElement(x); }

QString  PythonQtWrapper_QDomElement::attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue) const
{
  return ( theWrappedObject->attribute(name, defValue));
}

QString  PythonQtWrapper_QDomElement::attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue) const
{
  return ( theWrappedObject->attributeNS(nsURI, localName, defValue));
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNode(QDomElement* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->attributeNode(name));
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->attributeNodeNS(nsURI, localName));
}

QDomNamedNodeMap  PythonQtWrapper_QDomElement::attributes(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const
{
  return ( theWrappedObject->elementsByTagName(tagname));
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->elementsByTagNameNS(nsURI, localName));
}

bool  PythonQtWrapper_QDomElement::hasAttribute(QDomElement* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(name));
}

bool  PythonQtWrapper_QDomElement::hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->hasAttributeNS(nsURI, localName));
}

void PythonQtWrapper_QDomElement::removeAttribute(QDomElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->removeAttribute(name));
}

void PythonQtWrapper_QDomElement::removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  ( theWrappedObject->removeAttributeNS(nsURI, localName));
}

QDomAttr  PythonQtWrapper_QDomElement::removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr)
{
  return ( theWrappedObject->removeAttributeNode(oldAttr));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value)
{
  ( theWrappedObject->setAttribute(name, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value)
{
  ( theWrappedObject->setAttributeNS(nsURI, qName, value));
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
  return ( theWrappedObject->setAttributeNode(newAttr));
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
  return ( theWrappedObject->setAttributeNodeNS(newAttr));
}

void PythonQtWrapper_QDomElement::setTagName(QDomElement* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setTagName(name));
}

QString  PythonQtWrapper_QDomElement::tagName(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->tagName());
}

QString  PythonQtWrapper_QDomElement::text(QDomElement* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity()
{ 
return new QDomEntity(); }

QDomEntity* PythonQtWrapper_QDomEntity::new_QDomEntity(const QDomEntity&  x)
{ 
return new QDomEntity(x); }

QString  PythonQtWrapper_QDomEntity::notationName(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

QString  PythonQtWrapper_QDomEntity::publicId(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomEntity::systemId(QDomEntity* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference()
{ 
return new QDomEntityReference(); }

QDomEntityReference* PythonQtWrapper_QDomEntityReference::new_QDomEntityReference(const QDomEntityReference&  x)
{ 
return new QDomEntityReference(x); }



QDomImplementation* PythonQtWrapper_QDomImplementation::new_QDomImplementation()
{ 
return new QDomImplementation(); }

QDomImplementation* PythonQtWrapper_QDomImplementation::new_QDomImplementation(const QDomImplementation&  arg__1)
{ 
return new QDomImplementation(arg__1); }

QDomDocument  PythonQtWrapper_QDomImplementation::createDocument(QDomImplementation* theWrappedObject, const QString&  nsURI, const QString&  qName, const QDomDocumentType&  doctype)
{
  return ( theWrappedObject->createDocument(nsURI, qName, doctype));
}

QDomDocumentType  PythonQtWrapper_QDomImplementation::createDocumentType(QDomImplementation* theWrappedObject, const QString&  qName, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->createDocumentType(qName, publicId, systemId));
}

bool  PythonQtWrapper_QDomImplementation::hasFeature(QDomImplementation* theWrappedObject, const QString&  feature, const QString&  version) const
{
  return ( theWrappedObject->hasFeature(feature, version));
}

QDomImplementation::InvalidDataPolicy  PythonQtWrapper_QDomImplementation::static_QDomImplementation_invalidDataPolicy()
{
  return (QDomImplementation::invalidDataPolicy());
}

bool  PythonQtWrapper_QDomImplementation::isNull(QDomImplementation* theWrappedObject)
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDomImplementation::__ne__(QDomImplementation* theWrappedObject, const QDomImplementation&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

bool  PythonQtWrapper_QDomImplementation::__eq__(QDomImplementation* theWrappedObject, const QDomImplementation&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

void PythonQtWrapper_QDomImplementation::static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy  policy)
{
  (QDomImplementation::setInvalidDataPolicy(policy));
}



QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap()
{ 
return new QDomNamedNodeMap(); }

QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1)
{ 
return new QDomNamedNodeMap(arg__1); }

bool  PythonQtWrapper_QDomNamedNodeMap::contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

int  PythonQtWrapper_QDomNamedNodeMap::count(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QDomNamedNodeMap::isEmpty(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::item(QDomNamedNodeMap* theWrappedObject, int  index) const
{
  return ( theWrappedObject->item(index));
}

int  PythonQtWrapper_QDomNamedNodeMap::length(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->namedItem(name));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
  return ( theWrappedObject->namedItemNS(nsURI, localName));
}

bool  PythonQtWrapper_QDomNamedNodeMap::__ne__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

bool  PythonQtWrapper_QDomNamedNodeMap::__eq__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->removeNamedItem(name));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
  return ( theWrappedObject->removeNamedItemNS(nsURI, localName));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
  return ( theWrappedObject->setNamedItem(newNode));
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
  return ( theWrappedObject->setNamedItemNS(newNode));
}

int  PythonQtWrapper_QDomNamedNodeMap::size(QDomNamedNodeMap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QDomNode* PythonQtWrapper_QDomNode::new_QDomNode()
{ 
return new QDomNode(); }

QDomNode* PythonQtWrapper_QDomNode::new_QDomNode(const QDomNode&  arg__1)
{ 
return new QDomNode(arg__1); }

QDomNode  PythonQtWrapper_QDomNode::appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild)
{
  return ( theWrappedObject->appendChild(newChild));
}

QDomNodeList  PythonQtWrapper_QDomNode::childNodes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->childNodes());
}

void PythonQtWrapper_QDomNode::clear(QDomNode* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QDomNode  PythonQtWrapper_QDomNode::cloneNode(QDomNode* theWrappedObject, bool  deep) const
{
  return ( theWrappedObject->cloneNode(deep));
}

int  PythonQtWrapper_QDomNode::columnNumber(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QDomNode  PythonQtWrapper_QDomNode::firstChild(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->firstChild());
}

QDomElement  PythonQtWrapper_QDomNode::firstChildElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
  return ( theWrappedObject->firstChildElement(tagName));
}

bool  PythonQtWrapper_QDomNode::hasAttributes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->hasAttributes());
}

bool  PythonQtWrapper_QDomNode::hasChildNodes(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->hasChildNodes());
}

QDomNode  PythonQtWrapper_QDomNode::insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
  return ( theWrappedObject->insertAfter(newChild, refChild));
}

QDomNode  PythonQtWrapper_QDomNode::insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild)
{
  return ( theWrappedObject->insertBefore(newChild, refChild));
}

bool  PythonQtWrapper_QDomNode::isAttr(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isAttr());
}

bool  PythonQtWrapper_QDomNode::isCDATASection(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isCDATASection());
}

bool  PythonQtWrapper_QDomNode::isCharacterData(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isCharacterData());
}

bool  PythonQtWrapper_QDomNode::isComment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

bool  PythonQtWrapper_QDomNode::isDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocument());
}

bool  PythonQtWrapper_QDomNode::isDocumentFragment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocumentFragment());
}

bool  PythonQtWrapper_QDomNode::isDocumentType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isDocumentType());
}

bool  PythonQtWrapper_QDomNode::isElement(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isElement());
}

bool  PythonQtWrapper_QDomNode::isEntity(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isEntity());
}

bool  PythonQtWrapper_QDomNode::isEntityReference(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

bool  PythonQtWrapper_QDomNode::isNotation(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isNotation());
}

bool  PythonQtWrapper_QDomNode::isNull(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDomNode::isProcessingInstruction(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

bool  PythonQtWrapper_QDomNode::isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const
{
  return ( theWrappedObject->isSupported(feature, version));
}

bool  PythonQtWrapper_QDomNode::isText(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->isText());
}

QDomNode  PythonQtWrapper_QDomNode::lastChild(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->lastChild());
}

QDomElement  PythonQtWrapper_QDomNode::lastChildElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
  return ( theWrappedObject->lastChildElement(tagName));
}

int  PythonQtWrapper_QDomNode::lineNumber(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QString  PythonQtWrapper_QDomNode::localName(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->localName());
}

QDomNode  PythonQtWrapper_QDomNode::namedItem(QDomNode* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->namedItem(name));
}

QString  PythonQtWrapper_QDomNode::namespaceURI(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->namespaceURI());
}

QDomNode  PythonQtWrapper_QDomNode::nextSibling(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nextSibling());
}

QDomElement  PythonQtWrapper_QDomNode::nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName) const
{
  return ( theWrappedObject->nextSiblingElement(taName));
}

QString  PythonQtWrapper_QDomNode::nodeName(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeName());
}

QDomNode::NodeType  PythonQtWrapper_QDomNode::nodeType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeType());
}

QString  PythonQtWrapper_QDomNode::nodeValue(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->nodeValue());
}

void PythonQtWrapper_QDomNode::normalize(QDomNode* theWrappedObject)
{
  ( theWrappedObject->normalize());
}

bool  PythonQtWrapper_QDomNode::__ne__(QDomNode* theWrappedObject, const QDomNode&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

void PythonQtWrapper_QDomNode::writeTo(QDomNode* theWrappedObject, QTextStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QDomNode::__eq__(QDomNode* theWrappedObject, const QDomNode&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

QDomDocument  PythonQtWrapper_QDomNode::ownerDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->ownerDocument());
}

QDomNode  PythonQtWrapper_QDomNode::parentNode(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->parentNode());
}

QString  PythonQtWrapper_QDomNode::prefix(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QDomNode  PythonQtWrapper_QDomNode::previousSibling(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->previousSibling());
}

QDomElement  PythonQtWrapper_QDomNode::previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName) const
{
  return ( theWrappedObject->previousSiblingElement(tagName));
}

QDomNode  PythonQtWrapper_QDomNode::removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild)
{
  return ( theWrappedObject->removeChild(oldChild));
}

QDomNode  PythonQtWrapper_QDomNode::replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild)
{
  return ( theWrappedObject->replaceChild(newChild, oldChild));
}

void PythonQtWrapper_QDomNode::save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3) const
{
  ( theWrappedObject->save(arg__1, arg__2, arg__3));
}

void PythonQtWrapper_QDomNode::setNodeValue(QDomNode* theWrappedObject, const QString&  arg__1)
{
  ( theWrappedObject->setNodeValue(arg__1));
}

void PythonQtWrapper_QDomNode::setPrefix(QDomNode* theWrappedObject, const QString&  pre)
{
  ( theWrappedObject->setPrefix(pre));
}

QDomAttr  PythonQtWrapper_QDomNode::toAttr(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toAttr());
}

QDomCDATASection  PythonQtWrapper_QDomNode::toCDATASection(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toCDATASection());
}

QDomCharacterData  PythonQtWrapper_QDomNode::toCharacterData(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toCharacterData());
}

QDomComment  PythonQtWrapper_QDomNode::toComment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toComment());
}

QDomDocument  PythonQtWrapper_QDomNode::toDocument(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocument());
}

QDomDocumentFragment  PythonQtWrapper_QDomNode::toDocumentFragment(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocumentFragment());
}

QDomDocumentType  PythonQtWrapper_QDomNode::toDocumentType(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toDocumentType());
}

QDomElement  PythonQtWrapper_QDomNode::toElement(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toElement());
}

QDomEntity  PythonQtWrapper_QDomNode::toEntity(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toEntity());
}

QDomEntityReference  PythonQtWrapper_QDomNode::toEntityReference(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toEntityReference());
}

QDomNotation  PythonQtWrapper_QDomNode::toNotation(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toNotation());
}

QDomProcessingInstruction  PythonQtWrapper_QDomNode::toProcessingInstruction(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toProcessingInstruction());
}

QDomText  PythonQtWrapper_QDomNode::toText(QDomNode* theWrappedObject) const
{
  return ( theWrappedObject->toText());
}



QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList()
{ 
return new QDomNodeList(); }

QDomNodeList* PythonQtWrapper_QDomNodeList::new_QDomNodeList(const QDomNodeList&  arg__1)
{ 
return new QDomNodeList(arg__1); }

QDomNode  PythonQtWrapper_QDomNodeList::at(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->at(index));
}

int  PythonQtWrapper_QDomNodeList::count(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QDomNodeList::isEmpty(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QDomNode  PythonQtWrapper_QDomNodeList::item(QDomNodeList* theWrappedObject, int  index) const
{
  return ( theWrappedObject->item(index));
}

int  PythonQtWrapper_QDomNodeList::length(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QDomNodeList::__ne__(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const
{
  return ( (*theWrappedObject)!= arg__1);
}

bool  PythonQtWrapper_QDomNodeList::__eq__(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const
{
  return ( (*theWrappedObject)== arg__1);
}

int  PythonQtWrapper_QDomNodeList::size(QDomNodeList* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QDomNotation* PythonQtWrapper_QDomNotation::new_QDomNotation()
{ 
return new QDomNotation(); }

QDomNotation* PythonQtWrapper_QDomNotation::new_QDomNotation(const QDomNotation&  x)
{ 
return new QDomNotation(x); }

QString  PythonQtWrapper_QDomNotation::publicId(QDomNotation* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QDomNotation::systemId(QDomNotation* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction()
{ 
return new QDomProcessingInstruction(); }

QDomProcessingInstruction* PythonQtWrapper_QDomProcessingInstruction::new_QDomProcessingInstruction(const QDomProcessingInstruction&  x)
{ 
return new QDomProcessingInstruction(x); }

QString  PythonQtWrapper_QDomProcessingInstruction::data(QDomProcessingInstruction* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QDomProcessingInstruction::setData(QDomProcessingInstruction* theWrappedObject, const QString&  d)
{
  ( theWrappedObject->setData(d));
}

QString  PythonQtWrapper_QDomProcessingInstruction::target(QDomProcessingInstruction* theWrappedObject) const
{
  return ( theWrappedObject->target());
}



QDomText* PythonQtWrapper_QDomText::new_QDomText()
{ 
return new QDomText(); }

QDomText* PythonQtWrapper_QDomText::new_QDomText(const QDomText&  x)
{ 
return new QDomText(x); }

QDomText  PythonQtWrapper_QDomText::splitText(QDomText* theWrappedObject, int  offset)
{
  return ( theWrappedObject->splitText(offset));
}



PythonQtShell_QXmlContentHandler::~PythonQtShell_QXmlContentHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QXmlContentHandler::characters(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("characters");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("characters", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::endDocument()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endDocument");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endDocument", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endElement");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&namespaceURI0, (void*)&localName1, (void*)&qName2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endElement", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::endPrefixMapping(const QString&  prefix0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endPrefixMapping");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&prefix0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endPrefixMapping", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QString  PythonQtShell_QXmlContentHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlContentHandler::ignorableWhitespace(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("ignorableWhitespace");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("ignorableWhitespace", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::processingInstruction(const QString&  target0, const QString&  data1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("processingInstruction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&target0, (void*)&data1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("processingInstruction", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
void PythonQtShell_QXmlContentHandler::setDocumentLocator(QXmlLocator*  locator0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setDocumentLocator");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QXmlLocator*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&locator0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
bool  PythonQtShell_QXmlContentHandler::skippedEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("skippedEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skippedEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::startDocument()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startDocument");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startDocument", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startElement");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QXmlAttributes&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {NULL, (void*)&namespaceURI0, (void*)&localName1, (void*)&qName2, (void*)&atts3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startElement", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlContentHandler::startPrefixMapping(const QString&  prefix0, const QString&  uri1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startPrefixMapping");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&prefix0, (void*)&uri1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startPrefixMapping", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlContentHandler* PythonQtWrapper_QXmlContentHandler::new_QXmlContentHandler()
{ 
return new PythonQtShell_QXmlContentHandler(); }

bool  PythonQtWrapper_QXmlContentHandler::characters(QXmlContentHandler* theWrappedObject, const QString&  ch)
{
  return ( theWrappedObject->characters(ch));
}

bool  PythonQtWrapper_QXmlContentHandler::endDocument(QXmlContentHandler* theWrappedObject)
{
  return ( theWrappedObject->endDocument());
}

bool  PythonQtWrapper_QXmlContentHandler::endElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName)
{
  return ( theWrappedObject->endElement(namespaceURI, localName, qName));
}

bool  PythonQtWrapper_QXmlContentHandler::endPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix)
{
  return ( theWrappedObject->endPrefixMapping(prefix));
}

QString  PythonQtWrapper_QXmlContentHandler::errorString(QXmlContentHandler* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlContentHandler::ignorableWhitespace(QXmlContentHandler* theWrappedObject, const QString&  ch)
{
  return ( theWrappedObject->ignorableWhitespace(ch));
}

bool  PythonQtWrapper_QXmlContentHandler::processingInstruction(QXmlContentHandler* theWrappedObject, const QString&  target, const QString&  data)
{
  return ( theWrappedObject->processingInstruction(target, data));
}

void PythonQtWrapper_QXmlContentHandler::setDocumentLocator(QXmlContentHandler* theWrappedObject, QXmlLocator*  locator)
{
  ( theWrappedObject->setDocumentLocator(locator));
}

bool  PythonQtWrapper_QXmlContentHandler::skippedEntity(QXmlContentHandler* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->skippedEntity(name));
}

bool  PythonQtWrapper_QXmlContentHandler::startDocument(QXmlContentHandler* theWrappedObject)
{
  return ( theWrappedObject->startDocument());
}

bool  PythonQtWrapper_QXmlContentHandler::startElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts)
{
  return ( theWrappedObject->startElement(namespaceURI, localName, qName, atts));
}

bool  PythonQtWrapper_QXmlContentHandler::startPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix, const QString&  uri)
{
  return ( theWrappedObject->startPrefixMapping(prefix, uri));
}



PythonQtShell_QXmlDTDHandler::~PythonQtShell_QXmlDTDHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlDTDHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlDTDHandler::notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("notationDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("notationDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlDTDHandler::unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("unparsedEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2, (void*)&notationName3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("unparsedEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlDTDHandler* PythonQtWrapper_QXmlDTDHandler::new_QXmlDTDHandler()
{ 
return new PythonQtShell_QXmlDTDHandler(); }

QString  PythonQtWrapper_QXmlDTDHandler::errorString(QXmlDTDHandler* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlDTDHandler::notationDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->notationDecl(name, publicId, systemId));
}

bool  PythonQtWrapper_QXmlDTDHandler::unparsedEntityDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName)
{
  return ( theWrappedObject->unparsedEntityDecl(name, publicId, systemId, notationName));
}



PythonQtShell_QXmlDeclHandler::~PythonQtShell_QXmlDeclHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QXmlDeclHandler::attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("attributeDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {NULL, (void*)&eName0, (void*)&aName1, (void*)&type2, (void*)&valueDefault3, (void*)&value4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("attributeDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QString  PythonQtShell_QXmlDeclHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlDeclHandler::externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("externalEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("externalEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlDeclHandler::internalEntityDecl(const QString&  name0, const QString&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("internalEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&name0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("internalEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlDeclHandler* PythonQtWrapper_QXmlDeclHandler::new_QXmlDeclHandler()
{ 
return new PythonQtShell_QXmlDeclHandler(); }

bool  PythonQtWrapper_QXmlDeclHandler::attributeDecl(QXmlDeclHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value)
{
  return ( theWrappedObject->attributeDecl(eName, aName, type, valueDefault, value));
}

QString  PythonQtWrapper_QXmlDeclHandler::errorString(QXmlDeclHandler* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlDeclHandler::externalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->externalEntityDecl(name, publicId, systemId));
}

bool  PythonQtWrapper_QXmlDeclHandler::internalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  value)
{
  return ( theWrappedObject->internalEntityDecl(name, value));
}



PythonQtShell_QXmlDefaultHandler::~PythonQtShell_QXmlDefaultHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QXmlDefaultHandler::attributeDecl(const QString&  eName0, const QString&  aName1, const QString&  type2, const QString&  valueDefault3, const QString&  value4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("attributeDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {NULL, (void*)&eName0, (void*)&aName1, (void*)&type2, (void*)&valueDefault3, (void*)&value4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("attributeDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::attributeDecl(eName0, aName1, type2, valueDefault3, value4);
}
bool  PythonQtShell_QXmlDefaultHandler::characters(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("characters");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("characters", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::characters(ch0);
}
bool  PythonQtShell_QXmlDefaultHandler::comment(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("comment");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("comment", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::comment(ch0);
}
bool  PythonQtShell_QXmlDefaultHandler::endCDATA()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endCDATA");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endCDATA", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endCDATA();
}
bool  PythonQtShell_QXmlDefaultHandler::endDTD()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endDTD");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endDTD", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endDTD();
}
bool  PythonQtShell_QXmlDefaultHandler::endDocument()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endDocument");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endDocument", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endDocument();
}
bool  PythonQtShell_QXmlDefaultHandler::endElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endElement");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&namespaceURI0, (void*)&localName1, (void*)&qName2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endElement", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endElement(namespaceURI0, localName1, qName2);
}
bool  PythonQtShell_QXmlDefaultHandler::endEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endEntity(name0);
}
bool  PythonQtShell_QXmlDefaultHandler::endPrefixMapping(const QString&  prefix0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endPrefixMapping");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&prefix0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endPrefixMapping", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::endPrefixMapping(prefix0);
}
bool  PythonQtShell_QXmlDefaultHandler::error(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::error(exception0);
}
QString  PythonQtShell_QXmlDefaultHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::errorString();
}
bool  PythonQtShell_QXmlDefaultHandler::externalEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("externalEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("externalEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::externalEntityDecl(name0, publicId1, systemId2);
}
bool  PythonQtShell_QXmlDefaultHandler::fatalError(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fatalError");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fatalError", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::fatalError(exception0);
}
bool  PythonQtShell_QXmlDefaultHandler::ignorableWhitespace(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("ignorableWhitespace");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("ignorableWhitespace", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::ignorableWhitespace(ch0);
}
bool  PythonQtShell_QXmlDefaultHandler::internalEntityDecl(const QString&  name0, const QString&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("internalEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&name0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("internalEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::internalEntityDecl(name0, value1);
}
bool  PythonQtShell_QXmlDefaultHandler::notationDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("notationDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("notationDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::notationDecl(name0, publicId1, systemId2);
}
bool  PythonQtShell_QXmlDefaultHandler::processingInstruction(const QString&  target0, const QString&  data1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("processingInstruction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&target0, (void*)&data1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("processingInstruction", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::processingInstruction(target0, data1);
}
bool  PythonQtShell_QXmlDefaultHandler::resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "QXmlInputSource*&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&publicId0, (void*)&systemId1, (void*)&ret2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::resolveEntity(publicId0, systemId1, ret2);
}
void PythonQtShell_QXmlDefaultHandler::setDocumentLocator(QXmlLocator*  locator0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setDocumentLocator");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QXmlLocator*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&locator0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QXmlDefaultHandler::setDocumentLocator(locator0);
}
bool  PythonQtShell_QXmlDefaultHandler::skippedEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("skippedEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("skippedEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::skippedEntity(name0);
}
bool  PythonQtShell_QXmlDefaultHandler::startCDATA()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startCDATA");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startCDATA", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startCDATA();
}
bool  PythonQtShell_QXmlDefaultHandler::startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startDTD");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startDTD", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startDTD(name0, publicId1, systemId2);
}
bool  PythonQtShell_QXmlDefaultHandler::startDocument()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startDocument");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startDocument", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startDocument();
}
bool  PythonQtShell_QXmlDefaultHandler::startElement(const QString&  namespaceURI0, const QString&  localName1, const QString&  qName2, const QXmlAttributes&  atts3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startElement");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QXmlAttributes&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {NULL, (void*)&namespaceURI0, (void*)&localName1, (void*)&qName2, (void*)&atts3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startElement", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startElement(namespaceURI0, localName1, qName2, atts3);
}
bool  PythonQtShell_QXmlDefaultHandler::startEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startEntity(name0);
}
bool  PythonQtShell_QXmlDefaultHandler::startPrefixMapping(const QString&  prefix0, const QString&  uri1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startPrefixMapping");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {NULL, (void*)&prefix0, (void*)&uri1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startPrefixMapping", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::startPrefixMapping(prefix0, uri1);
}
bool  PythonQtShell_QXmlDefaultHandler::unparsedEntityDecl(const QString&  name0, const QString&  publicId1, const QString&  systemId2, const QString&  notationName3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("unparsedEntityDecl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2, (void*)&notationName3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("unparsedEntityDecl", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::unparsedEntityDecl(name0, publicId1, systemId2, notationName3);
}
bool  PythonQtShell_QXmlDefaultHandler::warning(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("warning");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("warning", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlDefaultHandler::warning(exception0);
}
QXmlDefaultHandler* PythonQtWrapper_QXmlDefaultHandler::new_QXmlDefaultHandler()
{ 
return new PythonQtShell_QXmlDefaultHandler(); }



PythonQtShell_QXmlEntityResolver::~PythonQtShell_QXmlEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlEntityResolver::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1, QXmlInputSource*&  ret2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "QXmlInputSource*&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&publicId0, (void*)&systemId1, (void*)&ret2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlEntityResolver* PythonQtWrapper_QXmlEntityResolver::new_QXmlEntityResolver()
{ 
return new PythonQtShell_QXmlEntityResolver(); }

QString  PythonQtWrapper_QXmlEntityResolver::errorString(QXmlEntityResolver* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlEntityResolver::resolveEntity(QXmlEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId, ret));
}



PythonQtShell_QXmlErrorHandler::~PythonQtShell_QXmlErrorHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QXmlErrorHandler::error(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("error");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("error", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QString  PythonQtShell_QXmlErrorHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlErrorHandler::fatalError(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fatalError");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fatalError", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlErrorHandler::warning(const QXmlParseException&  exception0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("warning");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QXmlParseException&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&exception0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("warning", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlErrorHandler* PythonQtWrapper_QXmlErrorHandler::new_QXmlErrorHandler()
{ 
return new PythonQtShell_QXmlErrorHandler(); }

bool  PythonQtWrapper_QXmlErrorHandler::error(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
  return ( theWrappedObject->error(exception));
}

QString  PythonQtWrapper_QXmlErrorHandler::errorString(QXmlErrorHandler* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlErrorHandler::fatalError(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
  return ( theWrappedObject->fatalError(exception));
}

bool  PythonQtWrapper_QXmlErrorHandler::warning(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception)
{
  return ( theWrappedObject->warning(exception));
}



PythonQtShell_QXmlInputSource::~PythonQtShell_QXmlInputSource() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlInputSource::data() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlInputSource::data();
}
void PythonQtShell_QXmlInputSource::fetchData()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fetchData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QXmlInputSource::fetchData();
}
QString  PythonQtShell_QXmlInputSource::fromRawData(const QByteArray&  data0, bool  beginning1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fromRawData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QByteArray&" , "bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {NULL, (void*)&data0, (void*)&beginning1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("fromRawData", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlInputSource::fromRawData(data0, beginning1);
}
QChar  PythonQtShell_QXmlInputSource::next()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("next");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QChar"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QChar returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("next", methodInfo, result);
          } else {
            returnValue = *((QChar*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QXmlInputSource::next();
}
void PythonQtShell_QXmlInputSource::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QXmlInputSource::reset();
}
void PythonQtShell_QXmlInputSource::setData(const QByteArray&  dat0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QByteArray&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&dat0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QXmlInputSource::setData(dat0);
}
void PythonQtShell_QXmlInputSource::setData(const QString&  dat0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&dat0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QXmlInputSource::setData(dat0);
}
QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource()
{ 
return new PythonQtShell_QXmlInputSource(); }

QXmlInputSource* PythonQtWrapper_QXmlInputSource::new_QXmlInputSource(QIODevice*  dev)
{ 
return new PythonQtShell_QXmlInputSource(dev); }

QString  PythonQtWrapper_QXmlInputSource::data(QXmlInputSource* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

void PythonQtWrapper_QXmlInputSource::fetchData(QXmlInputSource* theWrappedObject)
{
  ( theWrappedObject->fetchData());
}

QString  PythonQtWrapper_QXmlInputSource::fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning)
{
  return ( ((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->promoted_fromRawData(data, beginning));
}

QChar  PythonQtWrapper_QXmlInputSource::next(QXmlInputSource* theWrappedObject)
{
  return ( theWrappedObject->next());
}

void PythonQtWrapper_QXmlInputSource::reset(QXmlInputSource* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat)
{
  ( theWrappedObject->setData(dat));
}

void PythonQtWrapper_QXmlInputSource::setData(QXmlInputSource* theWrappedObject, const QString&  dat)
{
  ( theWrappedObject->setData(dat));
}



PythonQtShell_QXmlLexicalHandler::~PythonQtShell_QXmlLexicalHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QXmlLexicalHandler::comment(const QString&  ch0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("comment");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&ch0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("comment", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlLexicalHandler::endCDATA()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endCDATA");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endCDATA", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlLexicalHandler::endDTD()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endDTD");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endDTD", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlLexicalHandler::endEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("endEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("endEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QString  PythonQtShell_QXmlLexicalHandler::errorString() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("errorString");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("errorString", methodInfo, result);
          } else {
            returnValue = *((QString*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QString();
}
bool  PythonQtShell_QXmlLexicalHandler::startCDATA()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startCDATA");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startCDATA", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlLexicalHandler::startDTD(const QString&  name0, const QString&  publicId1, const QString&  systemId2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startDTD");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {NULL, (void*)&name0, (void*)&publicId1, (void*)&systemId2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startDTD", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
bool  PythonQtShell_QXmlLexicalHandler::startEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("startEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {NULL, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("startEntity", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return bool();
}
QXmlLexicalHandler* PythonQtWrapper_QXmlLexicalHandler::new_QXmlLexicalHandler()
{ 
return new PythonQtShell_QXmlLexicalHandler(); }

bool  PythonQtWrapper_QXmlLexicalHandler::comment(QXmlLexicalHandler* theWrappedObject, const QString&  ch)
{
  return ( theWrappedObject->comment(ch));
}

bool  PythonQtWrapper_QXmlLexicalHandler::endCDATA(QXmlLexicalHandler* theWrappedObject)
{
  return ( theWrappedObject->endCDATA());
}

bool  PythonQtWrapper_QXmlLexicalHandler::endDTD(QXmlLexicalHandler* theWrappedObject)
{
  return ( theWrappedObject->endDTD());
}

bool  PythonQtWrapper_QXmlLexicalHandler::endEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->endEntity(name));
}

QString  PythonQtWrapper_QXmlLexicalHandler::errorString(QXmlLexicalHandler* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlLexicalHandler::startCDATA(QXmlLexicalHandler* theWrappedObject)
{
  return ( theWrappedObject->startCDATA());
}

bool  PythonQtWrapper_QXmlLexicalHandler::startDTD(QXmlLexicalHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->startDTD(name, publicId, systemId));
}

bool  PythonQtWrapper_QXmlLexicalHandler::startEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->startEntity(name));
}



PythonQtShell_QXmlLocator::~PythonQtShell_QXmlLocator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QXmlLocator::columnNumber() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("columnNumber");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("columnNumber", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return int();
}
int  PythonQtShell_QXmlLocator::lineNumber() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("lineNumber");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("lineNumber", methodInfo, result);
          } else {
            returnValue = *((int*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return int();
}
QXmlLocator* PythonQtWrapper_QXmlLocator::new_QXmlLocator()
{ 
return new PythonQtShell_QXmlLocator(); }

int  PythonQtWrapper_QXmlLocator::columnNumber(QXmlLocator* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

int  PythonQtWrapper_QXmlLocator::lineNumber(QXmlLocator* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}



QXmlParseException* PythonQtWrapper_QXmlParseException::new_QXmlParseException(const QString&  name, int  c, int  l, const QString&  p, const QString&  s)
{ 
return new QXmlParseException(name, c, l, p, s); }

QXmlParseException* PythonQtWrapper_QXmlParseException::new_QXmlParseException(const QXmlParseException&  other)
{ 
return new QXmlParseException(other); }

int  PythonQtWrapper_QXmlParseException::columnNumber(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

int  PythonQtWrapper_QXmlParseException::lineNumber(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QString  PythonQtWrapper_QXmlParseException::message(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->message());
}

QString  PythonQtWrapper_QXmlParseException::publicId(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QXmlParseException::systemId(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QXmlStreamAttributes* PythonQtWrapper_QXmlStreamAttributes::new_QXmlStreamAttributes()
{ 
return new QXmlStreamAttributes(); }

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->append(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->append(qualifiedName, value));
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->hasAttribute(namespaceUri, name));
}

bool  PythonQtWrapper_QXmlStreamAttributes::hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
  return ( theWrappedObject->hasAttribute(qualifiedName));
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->value(namespaceUri, name));
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
  return ( theWrappedObject->value(qualifiedName));
}



void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QString&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
  ( theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
  ( theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions));
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->characterOffset());
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentEncoding());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentVersion());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdName());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdPublicId());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdSystemId());
}

QVector<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityDeclarations());
}

int  PythonQtWrapper_QXmlStreamReader::entityExpansionLimit(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityExpansionLimit());
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityResolver());
}

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCDATA());
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCharacters());
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isDTD());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStandaloneDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartDocument());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartElement());
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isWhitespace());
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QVector<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceDeclarations());
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceProcessing());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QVector<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->notationDeclarations());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionData());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionTarget());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
  ( theWrappedObject->raiseError(message));
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour)
{
  return ( theWrappedObject->readElementText(behaviour));
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNext());
}

bool  PythonQtWrapper_QXmlStreamReader::readNextStartElement(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNextStartElement());
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamReader::setEntityExpansionLimit(QXmlStreamReader* theWrappedObject, int  limit)
{
  ( theWrappedObject->setEntityExpansionLimit(limit));
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
  ( theWrappedObject->setEntityResolver(resolver));
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setNamespaceProcessing(arg__1));
}

void PythonQtWrapper_QXmlStreamReader::skipCurrentElement(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->skipCurrentElement());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenString());
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenType());
}



bool  PythonQtWrapper_QXmlStreamWriter::autoFormatting(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

int  PythonQtWrapper_QXmlStreamWriter::autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormattingIndent());
}

QTextCodec*  PythonQtWrapper_QXmlStreamWriter::codec(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QXmlStreamWriter::device(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QXmlStreamWriter::hasError(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoFormatting(arg__1));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs)
{
  ( theWrappedObject->setAutoFormattingIndent(spacesOrTabs));
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

void PythonQtWrapper_QXmlStreamWriter::setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->writeAttribute(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->writeAttribute(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->writeAttribute(attribute));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes)
{
  ( theWrappedObject->writeAttributes(attributes));
}

void PythonQtWrapper_QXmlStreamWriter::writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCDATA(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCharacters(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeComment(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader)
{
  ( theWrappedObject->writeCurrentToken(reader));
}

void PythonQtWrapper_QXmlStreamWriter::writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd)
{
  ( theWrappedObject->writeDTD(dtd));
}

void PythonQtWrapper_QXmlStreamWriter::writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri)
{
  ( theWrappedObject->writeDefaultNamespace(namespaceUri));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeEmptyElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeEmptyElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeEndDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeEndElement(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndElement());
}

void PythonQtWrapper_QXmlStreamWriter::writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->writeEntityReference(name));
}

void PythonQtWrapper_QXmlStreamWriter::writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix)
{
  ( theWrappedObject->writeNamespace(namespaceUri, prefix));
}

void PythonQtWrapper_QXmlStreamWriter::writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data)
{
  ( theWrappedObject->writeProcessingInstruction(target, data));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeStartDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version)
{
  ( theWrappedObject->writeStartDocument(version));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone)
{
  ( theWrappedObject->writeStartDocument(version, standalone));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeStartElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeStartElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text)
{
  ( theWrappedObject->writeTextElement(namespaceUri, name, text));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text)
{
  ( theWrappedObject->writeTextElement(qualifiedName, text));
}


