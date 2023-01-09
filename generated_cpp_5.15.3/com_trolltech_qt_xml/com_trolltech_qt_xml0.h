#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qdom.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qxml.h>
#include <qxmlstream.h>



class PythonQtWrapper_QDomAttr : public QObject
{ Q_OBJECT
public:
public slots:
QDomAttr* new_QDomAttr();
QDomAttr* new_QDomAttr(const QDomAttr&  x);
void delete_QDomAttr(QDomAttr* obj) { delete obj; } 
   QString  name(QDomAttr* theWrappedObject) const;
   QDomElement  ownerElement(QDomAttr* theWrappedObject) const;
   void setValue(QDomAttr* theWrappedObject, const QString&  arg__1);
   bool  specified(QDomAttr* theWrappedObject) const;
   QString  value(QDomAttr* theWrappedObject) const;
    bool __nonzero__(QDomAttr* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomCDATASection : public QObject
{ Q_OBJECT
public:
public slots:
QDomCDATASection* new_QDomCDATASection();
QDomCDATASection* new_QDomCDATASection(const QDomCDATASection&  x);
void delete_QDomCDATASection(QDomCDATASection* obj) { delete obj; } 
    bool __nonzero__(QDomCDATASection* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomCharacterData : public QObject
{ Q_OBJECT
public:
public slots:
QDomCharacterData* new_QDomCharacterData();
QDomCharacterData* new_QDomCharacterData(const QDomCharacterData&  x);
void delete_QDomCharacterData(QDomCharacterData* obj) { delete obj; } 
   void appendData(QDomCharacterData* theWrappedObject, const QString&  arg);
   QString  data(QDomCharacterData* theWrappedObject) const;
   void deleteData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
   void insertData(QDomCharacterData* theWrappedObject, unsigned long  offset, const QString&  arg);
   int  length(QDomCharacterData* theWrappedObject) const;
   void replaceData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count, const QString&  arg);
   void setData(QDomCharacterData* theWrappedObject, const QString&  arg__1);
   QString  substringData(QDomCharacterData* theWrappedObject, unsigned long  offset, unsigned long  count);
    bool __nonzero__(QDomCharacterData* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomComment : public QObject
{ Q_OBJECT
public:
public slots:
QDomComment* new_QDomComment();
QDomComment* new_QDomComment(const QDomComment&  x);
void delete_QDomComment(QDomComment* obj) { delete obj; } 
    bool __nonzero__(QDomComment* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocument : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocument* new_QDomDocument();
QDomDocument* new_QDomDocument(const QDomDocument&  x);
QDomDocument* new_QDomDocument(const QDomDocumentType&  doctype);
QDomDocument* new_QDomDocument(const QString&  name);
void delete_QDomDocument(QDomDocument* obj) { delete obj; } 
   QDomAttr  createAttribute(QDomDocument* theWrappedObject, const QString&  name);
   QDomAttr  createAttributeNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomCDATASection  createCDATASection(QDomDocument* theWrappedObject, const QString&  data);
   QDomComment  createComment(QDomDocument* theWrappedObject, const QString&  data);
   QDomDocumentFragment  createDocumentFragment(QDomDocument* theWrappedObject);
   QDomElement  createElement(QDomDocument* theWrappedObject, const QString&  tagName);
   QDomElement  createElementNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  qName);
   QDomEntityReference  createEntityReference(QDomDocument* theWrappedObject, const QString&  name);
   QDomProcessingInstruction  createProcessingInstruction(QDomDocument* theWrappedObject, const QString&  target, const QString&  data);
   QDomText  createTextNode(QDomDocument* theWrappedObject, const QString&  data);
   QDomDocumentType  doctype(QDomDocument* theWrappedObject) const;
   QDomElement  documentElement(QDomDocument* theWrappedObject) const;
   QDomElement  elementById(QDomDocument* theWrappedObject, const QString&  elementId);
   QDomNodeList  elementsByTagName(QDomDocument* theWrappedObject, const QString&  tagname) const;
   QDomNodeList  elementsByTagNameNS(QDomDocument* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomImplementation  implementation(QDomDocument* theWrappedObject) const;
   QDomNode  importNode(QDomDocument* theWrappedObject, const QDomNode&  importedNode, bool  deep);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, QIODevice*  dev, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, QXmlReader*  reader, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, QXmlInputSource*  source, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, QXmlStreamReader*  reader, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QByteArray&  text, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   bool  setContent(QDomDocument* theWrappedObject, const QString&  text, bool  namespaceProcessing, QString*  errorMsg = nullptr, int*  errorLine = nullptr, int*  errorColumn = nullptr);
   QByteArray  toByteArray(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
   QString  toString(QDomDocument* theWrappedObject, int  arg__1 = 1) const;
    QString py_toString(QDomDocument*);
    bool __nonzero__(QDomDocument* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocumentFragment : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocumentFragment* new_QDomDocumentFragment();
QDomDocumentFragment* new_QDomDocumentFragment(const QDomDocumentFragment&  x);
void delete_QDomDocumentFragment(QDomDocumentFragment* obj) { delete obj; } 
    bool __nonzero__(QDomDocumentFragment* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomDocumentType : public QObject
{ Q_OBJECT
public:
public slots:
QDomDocumentType* new_QDomDocumentType();
QDomDocumentType* new_QDomDocumentType(const QDomDocumentType&  x);
void delete_QDomDocumentType(QDomDocumentType* obj) { delete obj; } 
   QDomNamedNodeMap  entities(QDomDocumentType* theWrappedObject) const;
   QString  internalSubset(QDomDocumentType* theWrappedObject) const;
   QString  name(QDomDocumentType* theWrappedObject) const;
   QDomNamedNodeMap  notations(QDomDocumentType* theWrappedObject) const;
   QString  publicId(QDomDocumentType* theWrappedObject) const;
   QString  systemId(QDomDocumentType* theWrappedObject) const;
    bool __nonzero__(QDomDocumentType* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomElement : public QObject
{ Q_OBJECT
public:
public slots:
QDomElement* new_QDomElement();
QDomElement* new_QDomElement(const QDomElement&  x);
void delete_QDomElement(QDomElement* obj) { delete obj; } 
   QString  attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue = QString()) const;
   QString  attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue = QString()) const;
   QDomAttr  attributeNode(QDomElement* theWrappedObject, const QString&  name);
   QDomAttr  attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomNamedNodeMap  attributes(QDomElement* theWrappedObject) const;
   QDomNodeList  elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const;
   QDomNodeList  elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   bool  hasAttribute(QDomElement* theWrappedObject, const QString&  name) const;
   bool  hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   void removeAttribute(QDomElement* theWrappedObject, const QString&  name);
   void removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomAttr  removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value);
   void setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value);
   void setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value);
   QDomAttr  setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   QDomAttr  setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr);
   void setTagName(QDomElement* theWrappedObject, const QString&  name);
   QString  tagName(QDomElement* theWrappedObject) const;
   QString  text(QDomElement* theWrappedObject) const;
    bool __nonzero__(QDomElement* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomEntity : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntity* new_QDomEntity();
QDomEntity* new_QDomEntity(const QDomEntity&  x);
void delete_QDomEntity(QDomEntity* obj) { delete obj; } 
   QString  notationName(QDomEntity* theWrappedObject) const;
   QString  publicId(QDomEntity* theWrappedObject) const;
   QString  systemId(QDomEntity* theWrappedObject) const;
    bool __nonzero__(QDomEntity* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomEntityReference : public QObject
{ Q_OBJECT
public:
public slots:
QDomEntityReference* new_QDomEntityReference();
QDomEntityReference* new_QDomEntityReference(const QDomEntityReference&  x);
void delete_QDomEntityReference(QDomEntityReference* obj) { delete obj; } 
    bool __nonzero__(QDomEntityReference* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomImplementation : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InvalidDataPolicy )
enum InvalidDataPolicy{
  AcceptInvalidChars = QDomImplementation::AcceptInvalidChars,   DropInvalidChars = QDomImplementation::DropInvalidChars,   ReturnNullNode = QDomImplementation::ReturnNullNode};
public slots:
QDomImplementation* new_QDomImplementation();
QDomImplementation* new_QDomImplementation(const QDomImplementation&  arg__1);
void delete_QDomImplementation(QDomImplementation* obj) { delete obj; } 
   QDomDocument  createDocument(QDomImplementation* theWrappedObject, const QString&  nsURI, const QString&  qName, const QDomDocumentType&  doctype);
   QDomDocumentType  createDocumentType(QDomImplementation* theWrappedObject, const QString&  qName, const QString&  publicId, const QString&  systemId);
   bool  hasFeature(QDomImplementation* theWrappedObject, const QString&  feature, const QString&  version) const;
   QDomImplementation::InvalidDataPolicy  static_QDomImplementation_invalidDataPolicy();
   bool  isNull(QDomImplementation* theWrappedObject);
   bool  __ne__(QDomImplementation* theWrappedObject, const QDomImplementation&  arg__1) const;
   bool  __eq__(QDomImplementation* theWrappedObject, const QDomImplementation&  arg__1) const;
   void static_QDomImplementation_setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy  policy);
    bool __nonzero__(QDomImplementation* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomNamedNodeMap : public QObject
{ Q_OBJECT
public:
public slots:
QDomNamedNodeMap* new_QDomNamedNodeMap();
QDomNamedNodeMap* new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1);
void delete_QDomNamedNodeMap(QDomNamedNodeMap* obj) { delete obj; } 
   bool  contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   int  count(QDomNamedNodeMap* theWrappedObject) const;
   bool  isEmpty(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  item(QDomNamedNodeMap* theWrappedObject, int  index) const;
   int  length(QDomNamedNodeMap* theWrappedObject) const;
   QDomNode  namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const;
   QDomNode  namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const;
   bool  __ne__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const;
   bool  __eq__(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const;
   QDomNode  removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name);
   QDomNode  removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName);
   QDomNode  setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   QDomNode  setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode);
   int  size(QDomNamedNodeMap* theWrappedObject) const;
    bool __nonzero__(QDomNamedNodeMap* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDomNode : public QObject
{ Q_OBJECT
public:
Q_ENUMS(EncodingPolicy NodeType )
enum EncodingPolicy{
  EncodingFromDocument = QDomNode::EncodingFromDocument,   EncodingFromTextStream = QDomNode::EncodingFromTextStream};
enum NodeType{
  ElementNode = QDomNode::ElementNode,   AttributeNode = QDomNode::AttributeNode,   TextNode = QDomNode::TextNode,   CDATASectionNode = QDomNode::CDATASectionNode,   EntityReferenceNode = QDomNode::EntityReferenceNode,   EntityNode = QDomNode::EntityNode,   ProcessingInstructionNode = QDomNode::ProcessingInstructionNode,   CommentNode = QDomNode::CommentNode,   DocumentNode = QDomNode::DocumentNode,   DocumentTypeNode = QDomNode::DocumentTypeNode,   DocumentFragmentNode = QDomNode::DocumentFragmentNode,   NotationNode = QDomNode::NotationNode,   BaseNode = QDomNode::BaseNode,   CharacterDataNode = QDomNode::CharacterDataNode};
public slots:
QDomNode* new_QDomNode();
QDomNode* new_QDomNode(const QDomNode&  arg__1);
void delete_QDomNode(QDomNode* obj) { delete obj; } 
   QDomNode  appendChild(QDomNode* theWrappedObject, const QDomNode&  newChild);
   QDomNodeList  childNodes(QDomNode* theWrappedObject) const;
   void clear(QDomNode* theWrappedObject);
   QDomNode  cloneNode(QDomNode* theWrappedObject, bool  deep = true) const;
   int  columnNumber(QDomNode* theWrappedObject) const;
   QDomNode  firstChild(QDomNode* theWrappedObject) const;
   QDomElement  firstChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   bool  hasAttributes(QDomNode* theWrappedObject) const;
   bool  hasChildNodes(QDomNode* theWrappedObject) const;
   QDomNode  insertAfter(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   QDomNode  insertBefore(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  refChild);
   bool  isAttr(QDomNode* theWrappedObject) const;
   bool  isCDATASection(QDomNode* theWrappedObject) const;
   bool  isCharacterData(QDomNode* theWrappedObject) const;
   bool  isComment(QDomNode* theWrappedObject) const;
   bool  isDocument(QDomNode* theWrappedObject) const;
   bool  isDocumentFragment(QDomNode* theWrappedObject) const;
   bool  isDocumentType(QDomNode* theWrappedObject) const;
   bool  isElement(QDomNode* theWrappedObject) const;
   bool  isEntity(QDomNode* theWrappedObject) const;
   bool  isEntityReference(QDomNode* theWrappedObject) const;
   bool  isNotation(QDomNode* theWrappedObject) const;
   bool  isNull(QDomNode* theWrappedObject) const;
   bool  isProcessingInstruction(QDomNode* theWrappedObject) const;
   bool  isSupported(QDomNode* theWrappedObject, const QString&  feature, const QString&  version) const;
   bool  isText(QDomNode* theWrappedObject) const;
   QDomNode  lastChild(QDomNode* theWrappedObject) const;
   QDomElement  lastChildElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   int  lineNumber(QDomNode* theWrappedObject) const;
   QString  localName(QDomNode* theWrappedObject) const;
   QDomNode  namedItem(QDomNode* theWrappedObject, const QString&  name) const;
   QString  namespaceURI(QDomNode* theWrappedObject) const;
   QDomNode  nextSibling(QDomNode* theWrappedObject) const;
   QDomElement  nextSiblingElement(QDomNode* theWrappedObject, const QString&  taName = QString()) const;
   QString  nodeName(QDomNode* theWrappedObject) const;
   QDomNode::NodeType  nodeType(QDomNode* theWrappedObject) const;
   QString  nodeValue(QDomNode* theWrappedObject) const;
   void normalize(QDomNode* theWrappedObject);
   bool  __ne__(QDomNode* theWrappedObject, const QDomNode&  arg__1) const;
   void writeTo(QDomNode* theWrappedObject, QTextStream&  arg__1);
   bool  __eq__(QDomNode* theWrappedObject, const QDomNode&  arg__1) const;
   QDomDocument  ownerDocument(QDomNode* theWrappedObject) const;
   QDomNode  parentNode(QDomNode* theWrappedObject) const;
   QString  prefix(QDomNode* theWrappedObject) const;
   QDomNode  previousSibling(QDomNode* theWrappedObject) const;
   QDomElement  previousSiblingElement(QDomNode* theWrappedObject, const QString&  tagName = QString()) const;
   QDomNode  removeChild(QDomNode* theWrappedObject, const QDomNode&  oldChild);
   QDomNode  replaceChild(QDomNode* theWrappedObject, const QDomNode&  newChild, const QDomNode&  oldChild);
   void save(QDomNode* theWrappedObject, QTextStream&  arg__1, int  arg__2, QDomNode::EncodingPolicy  arg__3 = QDomNode::EncodingFromDocument) const;
   void setNodeValue(QDomNode* theWrappedObject, const QString&  arg__1);
   void setPrefix(QDomNode* theWrappedObject, const QString&  pre);
   QDomAttr  toAttr(QDomNode* theWrappedObject) const;
   QDomCDATASection  toCDATASection(QDomNode* theWrappedObject) const;
   QDomCharacterData  toCharacterData(QDomNode* theWrappedObject) const;
   QDomComment  toComment(QDomNode* theWrappedObject) const;
   QDomDocument  toDocument(QDomNode* theWrappedObject) const;
   QDomDocumentFragment  toDocumentFragment(QDomNode* theWrappedObject) const;
   QDomDocumentType  toDocumentType(QDomNode* theWrappedObject) const;
   QDomElement  toElement(QDomNode* theWrappedObject) const;
   QDomEntity  toEntity(QDomNode* theWrappedObject) const;
   QDomEntityReference  toEntityReference(QDomNode* theWrappedObject) const;
   QDomNotation  toNotation(QDomNode* theWrappedObject) const;
   QDomProcessingInstruction  toProcessingInstruction(QDomNode* theWrappedObject) const;
   QDomText  toText(QDomNode* theWrappedObject) const;
    bool __nonzero__(QDomNode* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomNodeList : public QObject
{ Q_OBJECT
public:
public slots:
QDomNodeList* new_QDomNodeList();
QDomNodeList* new_QDomNodeList(const QDomNodeList&  arg__1);
void delete_QDomNodeList(QDomNodeList* obj) { delete obj; } 
   QDomNode  at(QDomNodeList* theWrappedObject, int  index) const;
   int  count(QDomNodeList* theWrappedObject) const;
   bool  isEmpty(QDomNodeList* theWrappedObject) const;
   QDomNode  item(QDomNodeList* theWrappedObject, int  index) const;
   int  length(QDomNodeList* theWrappedObject) const;
   bool  __ne__(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const;
   bool  __eq__(QDomNodeList* theWrappedObject, const QDomNodeList&  arg__1) const;
   int  size(QDomNodeList* theWrappedObject) const;
    bool __nonzero__(QDomNodeList* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QDomNotation : public QObject
{ Q_OBJECT
public:
public slots:
QDomNotation* new_QDomNotation();
QDomNotation* new_QDomNotation(const QDomNotation&  x);
void delete_QDomNotation(QDomNotation* obj) { delete obj; } 
   QString  publicId(QDomNotation* theWrappedObject) const;
   QString  systemId(QDomNotation* theWrappedObject) const;
    bool __nonzero__(QDomNotation* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomProcessingInstruction : public QObject
{ Q_OBJECT
public:
public slots:
QDomProcessingInstruction* new_QDomProcessingInstruction();
QDomProcessingInstruction* new_QDomProcessingInstruction(const QDomProcessingInstruction&  x);
void delete_QDomProcessingInstruction(QDomProcessingInstruction* obj) { delete obj; } 
   QString  data(QDomProcessingInstruction* theWrappedObject) const;
   void setData(QDomProcessingInstruction* theWrappedObject, const QString&  d);
   QString  target(QDomProcessingInstruction* theWrappedObject) const;
    bool __nonzero__(QDomProcessingInstruction* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDomText : public QObject
{ Q_OBJECT
public:
public slots:
QDomText* new_QDomText();
QDomText* new_QDomText(const QDomText&  x);
void delete_QDomText(QDomText* obj) { delete obj; } 
   QDomText  splitText(QDomText* theWrappedObject, int  offset);
    bool __nonzero__(QDomText* obj) { return !obj->isNull(); }
};





class PythonQtShell_QXmlContentHandler : public QXmlContentHandler
{
public:
    PythonQtShell_QXmlContentHandler():QXmlContentHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlContentHandler();

virtual bool  characters(const QString&  ch);
virtual bool  endDocument();
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual QString  errorString() const;
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  skippedEntity(const QString&  name);
virtual bool  startDocument();
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlContentHandler : public QXmlContentHandler
{ public:
inline bool  py_q_characters(const QString&  ch) { return this->characters(ch); }
inline bool  py_q_endDocument() { return this->endDocument(); }
inline bool  py_q_endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName) { return this->endElement(namespaceURI, localName, qName); }
inline bool  py_q_endPrefixMapping(const QString&  prefix) { return this->endPrefixMapping(prefix); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_ignorableWhitespace(const QString&  ch) { return this->ignorableWhitespace(ch); }
inline bool  py_q_processingInstruction(const QString&  target, const QString&  data) { return this->processingInstruction(target, data); }
inline void py_q_setDocumentLocator(QXmlLocator*  locator) { this->setDocumentLocator(locator); }
inline bool  py_q_skippedEntity(const QString&  name) { return this->skippedEntity(name); }
inline bool  py_q_startDocument() { return this->startDocument(); }
inline bool  py_q_startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts) { return this->startElement(namespaceURI, localName, qName, atts); }
inline bool  py_q_startPrefixMapping(const QString&  prefix, const QString&  uri) { return this->startPrefixMapping(prefix, uri); }
};

class PythonQtWrapper_QXmlContentHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlContentHandler* new_QXmlContentHandler();
void delete_QXmlContentHandler(QXmlContentHandler* obj) { delete obj; } 
   bool  characters(QXmlContentHandler* theWrappedObject, const QString&  ch);
   bool  py_q_characters(QXmlContentHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_characters(ch));}
   bool  endDocument(QXmlContentHandler* theWrappedObject);
   bool  py_q_endDocument(QXmlContentHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_endDocument());}
   bool  endElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName);
   bool  py_q_endElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_endElement(namespaceURI, localName, qName));}
   bool  endPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix);
   bool  py_q_endPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_endPrefixMapping(prefix));}
   QString  errorString(QXmlContentHandler* theWrappedObject) const;
   QString  py_q_errorString(QXmlContentHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_errorString());}
   bool  ignorableWhitespace(QXmlContentHandler* theWrappedObject, const QString&  ch);
   bool  py_q_ignorableWhitespace(QXmlContentHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_ignorableWhitespace(ch));}
   bool  processingInstruction(QXmlContentHandler* theWrappedObject, const QString&  target, const QString&  data);
   bool  py_q_processingInstruction(QXmlContentHandler* theWrappedObject, const QString&  target, const QString&  data){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_processingInstruction(target, data));}
   void setDocumentLocator(QXmlContentHandler* theWrappedObject, QXmlLocator*  locator);
   void py_q_setDocumentLocator(QXmlContentHandler* theWrappedObject, QXmlLocator*  locator){  (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_setDocumentLocator(locator));}
   bool  skippedEntity(QXmlContentHandler* theWrappedObject, const QString&  name);
   bool  py_q_skippedEntity(QXmlContentHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_skippedEntity(name));}
   bool  startDocument(QXmlContentHandler* theWrappedObject);
   bool  py_q_startDocument(QXmlContentHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_startDocument());}
   bool  startElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
   bool  py_q_startElement(QXmlContentHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_startElement(namespaceURI, localName, qName, atts));}
   bool  startPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix, const QString&  uri);
   bool  py_q_startPrefixMapping(QXmlContentHandler* theWrappedObject, const QString&  prefix, const QString&  uri){  return (((PythonQtPublicPromoter_QXmlContentHandler*)theWrappedObject)->py_q_startPrefixMapping(prefix, uri));}
};





class PythonQtShell_QXmlDTDHandler : public QXmlDTDHandler
{
public:
    PythonQtShell_QXmlDTDHandler():QXmlDTDHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlDTDHandler();

virtual QString  errorString() const;
virtual bool  notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlDTDHandler : public QXmlDTDHandler
{ public:
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return this->notationDecl(name, publicId, systemId); }
inline bool  py_q_unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName) { return this->unparsedEntityDecl(name, publicId, systemId, notationName); }
};

class PythonQtWrapper_QXmlDTDHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDTDHandler* new_QXmlDTDHandler();
void delete_QXmlDTDHandler(QXmlDTDHandler* obj) { delete obj; } 
   QString  errorString(QXmlDTDHandler* theWrappedObject) const;
   QString  py_q_errorString(QXmlDTDHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlDTDHandler*)theWrappedObject)->py_q_errorString());}
   bool  notationDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  py_q_notationDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlDTDHandler*)theWrappedObject)->py_q_notationDecl(name, publicId, systemId));}
   bool  unparsedEntityDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
   bool  py_q_unparsedEntityDecl(QXmlDTDHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName){  return (((PythonQtPublicPromoter_QXmlDTDHandler*)theWrappedObject)->py_q_unparsedEntityDecl(name, publicId, systemId, notationName));}
};





class PythonQtShell_QXmlDeclHandler : public QXmlDeclHandler
{
public:
    PythonQtShell_QXmlDeclHandler():QXmlDeclHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlDeclHandler();

virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual QString  errorString() const;
virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlDeclHandler : public QXmlDeclHandler
{ public:
inline bool  py_q_attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value) { return this->attributeDecl(eName, aName, type, valueDefault, value); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return this->externalEntityDecl(name, publicId, systemId); }
inline bool  py_q_internalEntityDecl(const QString&  name, const QString&  value) { return this->internalEntityDecl(name, value); }
};

class PythonQtWrapper_QXmlDeclHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDeclHandler* new_QXmlDeclHandler();
void delete_QXmlDeclHandler(QXmlDeclHandler* obj) { delete obj; } 
   bool  attributeDecl(QXmlDeclHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
   bool  py_q_attributeDecl(QXmlDeclHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value){  return (((PythonQtPublicPromoter_QXmlDeclHandler*)theWrappedObject)->py_q_attributeDecl(eName, aName, type, valueDefault, value));}
   QString  errorString(QXmlDeclHandler* theWrappedObject) const;
   QString  py_q_errorString(QXmlDeclHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlDeclHandler*)theWrappedObject)->py_q_errorString());}
   bool  externalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  py_q_externalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlDeclHandler*)theWrappedObject)->py_q_externalEntityDecl(name, publicId, systemId));}
   bool  internalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  value);
   bool  py_q_internalEntityDecl(QXmlDeclHandler* theWrappedObject, const QString&  name, const QString&  value){  return (((PythonQtPublicPromoter_QXmlDeclHandler*)theWrappedObject)->py_q_internalEntityDecl(name, value));}
};





class PythonQtShell_QXmlDefaultHandler : public QXmlDefaultHandler
{
public:
    PythonQtShell_QXmlDefaultHandler():QXmlDefaultHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlDefaultHandler();

virtual bool  attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value);
virtual bool  characters(const QString&  ch);
virtual bool  comment(const QString&  ch);
virtual bool  endCDATA();
virtual bool  endDTD();
virtual bool  endDocument();
virtual bool  endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName);
virtual bool  endEntity(const QString&  name);
virtual bool  endPrefixMapping(const QString&  prefix);
virtual bool  error(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  ignorableWhitespace(const QString&  ch);
virtual bool  internalEntityDecl(const QString&  name, const QString&  value);
virtual bool  notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  processingInstruction(const QString&  target, const QString&  data);
virtual bool  resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
virtual void setDocumentLocator(QXmlLocator*  locator);
virtual bool  skippedEntity(const QString&  name);
virtual bool  startCDATA();
virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  startDocument();
virtual bool  startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts);
virtual bool  startEntity(const QString&  name);
virtual bool  startPrefixMapping(const QString&  prefix, const QString&  uri);
virtual bool  unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName);
virtual bool  warning(const QXmlParseException&  exception);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlDefaultHandler : public QXmlDefaultHandler
{ public:
inline bool  py_q_attributeDecl(const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value) { return QXmlDefaultHandler::attributeDecl(eName, aName, type, valueDefault, value); }
inline bool  py_q_characters(const QString&  ch) { return QXmlDefaultHandler::characters(ch); }
inline bool  py_q_comment(const QString&  ch) { return QXmlDefaultHandler::comment(ch); }
inline bool  py_q_endCDATA() { return QXmlDefaultHandler::endCDATA(); }
inline bool  py_q_endDTD() { return QXmlDefaultHandler::endDTD(); }
inline bool  py_q_endDocument() { return QXmlDefaultHandler::endDocument(); }
inline bool  py_q_endElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName) { return QXmlDefaultHandler::endElement(namespaceURI, localName, qName); }
inline bool  py_q_endEntity(const QString&  name) { return QXmlDefaultHandler::endEntity(name); }
inline bool  py_q_endPrefixMapping(const QString&  prefix) { return QXmlDefaultHandler::endPrefixMapping(prefix); }
inline bool  py_q_error(const QXmlParseException&  exception) { return QXmlDefaultHandler::error(exception); }
inline QString  py_q_errorString() const { return QXmlDefaultHandler::errorString(); }
inline bool  py_q_externalEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::externalEntityDecl(name, publicId, systemId); }
inline bool  py_q_fatalError(const QXmlParseException&  exception) { return QXmlDefaultHandler::fatalError(exception); }
inline bool  py_q_ignorableWhitespace(const QString&  ch) { return QXmlDefaultHandler::ignorableWhitespace(ch); }
inline bool  py_q_internalEntityDecl(const QString&  name, const QString&  value) { return QXmlDefaultHandler::internalEntityDecl(name, value); }
inline bool  py_q_notationDecl(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::notationDecl(name, publicId, systemId); }
inline bool  py_q_processingInstruction(const QString&  target, const QString&  data) { return QXmlDefaultHandler::processingInstruction(target, data); }
inline bool  py_q_resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret) { return QXmlDefaultHandler::resolveEntity(publicId, systemId, ret); }
inline void py_q_setDocumentLocator(QXmlLocator*  locator) { QXmlDefaultHandler::setDocumentLocator(locator); }
inline bool  py_q_skippedEntity(const QString&  name) { return QXmlDefaultHandler::skippedEntity(name); }
inline bool  py_q_startCDATA() { return QXmlDefaultHandler::startCDATA(); }
inline bool  py_q_startDTD(const QString&  name, const QString&  publicId, const QString&  systemId) { return QXmlDefaultHandler::startDTD(name, publicId, systemId); }
inline bool  py_q_startDocument() { return QXmlDefaultHandler::startDocument(); }
inline bool  py_q_startElement(const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts) { return QXmlDefaultHandler::startElement(namespaceURI, localName, qName, atts); }
inline bool  py_q_startEntity(const QString&  name) { return QXmlDefaultHandler::startEntity(name); }
inline bool  py_q_startPrefixMapping(const QString&  prefix, const QString&  uri) { return QXmlDefaultHandler::startPrefixMapping(prefix, uri); }
inline bool  py_q_unparsedEntityDecl(const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName) { return QXmlDefaultHandler::unparsedEntityDecl(name, publicId, systemId, notationName); }
inline bool  py_q_warning(const QXmlParseException&  exception) { return QXmlDefaultHandler::warning(exception); }
};

class PythonQtWrapper_QXmlDefaultHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlDefaultHandler* new_QXmlDefaultHandler();
void delete_QXmlDefaultHandler(QXmlDefaultHandler* obj) { delete obj; } 
   bool  py_q_attributeDecl(QXmlDefaultHandler* theWrappedObject, const QString&  eName, const QString&  aName, const QString&  type, const QString&  valueDefault, const QString&  value){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_attributeDecl(eName, aName, type, valueDefault, value));}
   bool  py_q_characters(QXmlDefaultHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_characters(ch));}
   bool  py_q_comment(QXmlDefaultHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_comment(ch));}
   bool  py_q_endCDATA(QXmlDefaultHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endCDATA());}
   bool  py_q_endDTD(QXmlDefaultHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endDTD());}
   bool  py_q_endDocument(QXmlDefaultHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endDocument());}
   bool  py_q_endElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endElement(namespaceURI, localName, qName));}
   bool  py_q_endEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endEntity(name));}
   bool  py_q_endPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_endPrefixMapping(prefix));}
   bool  py_q_error(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_error(exception));}
   QString  py_q_errorString(QXmlDefaultHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_errorString());}
   bool  py_q_externalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_externalEntityDecl(name, publicId, systemId));}
   bool  py_q_fatalError(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_fatalError(exception));}
   bool  py_q_ignorableWhitespace(QXmlDefaultHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_ignorableWhitespace(ch));}
   bool  py_q_internalEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  value){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_internalEntityDecl(name, value));}
   bool  py_q_notationDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_notationDecl(name, publicId, systemId));}
   bool  py_q_processingInstruction(QXmlDefaultHandler* theWrappedObject, const QString&  target, const QString&  data){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_processingInstruction(target, data));}
   bool  py_q_resolveEntity(QXmlDefaultHandler* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_resolveEntity(publicId, systemId, ret));}
   void py_q_setDocumentLocator(QXmlDefaultHandler* theWrappedObject, QXmlLocator*  locator){  (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_setDocumentLocator(locator));}
   bool  py_q_skippedEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_skippedEntity(name));}
   bool  py_q_startCDATA(QXmlDefaultHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startCDATA());}
   bool  py_q_startDTD(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startDTD(name, publicId, systemId));}
   bool  py_q_startDocument(QXmlDefaultHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startDocument());}
   bool  py_q_startElement(QXmlDefaultHandler* theWrappedObject, const QString&  namespaceURI, const QString&  localName, const QString&  qName, const QXmlAttributes&  atts){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startElement(namespaceURI, localName, qName, atts));}
   bool  py_q_startEntity(QXmlDefaultHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startEntity(name));}
   bool  py_q_startPrefixMapping(QXmlDefaultHandler* theWrappedObject, const QString&  prefix, const QString&  uri){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_startPrefixMapping(prefix, uri));}
   bool  py_q_unparsedEntityDecl(QXmlDefaultHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId, const QString&  notationName){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_unparsedEntityDecl(name, publicId, systemId, notationName));}
   bool  py_q_warning(QXmlDefaultHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlDefaultHandler*)theWrappedObject)->py_q_warning(exception));}
};





class PythonQtShell_QXmlEntityResolver : public QXmlEntityResolver
{
public:
    PythonQtShell_QXmlEntityResolver():QXmlEntityResolver(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlEntityResolver();

virtual QString  errorString() const;
virtual bool  resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlEntityResolver : public QXmlEntityResolver
{ public:
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_resolveEntity(const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret) { return this->resolveEntity(publicId, systemId, ret); }
};

class PythonQtWrapper_QXmlEntityResolver : public QObject
{ Q_OBJECT
public:
public slots:
QXmlEntityResolver* new_QXmlEntityResolver();
void delete_QXmlEntityResolver(QXmlEntityResolver* obj) { delete obj; } 
   QString  errorString(QXmlEntityResolver* theWrappedObject) const;
   QString  py_q_errorString(QXmlEntityResolver* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlEntityResolver*)theWrappedObject)->py_q_errorString());}
   bool  resolveEntity(QXmlEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret);
   bool  py_q_resolveEntity(QXmlEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId, QXmlInputSource*&  ret){  return (((PythonQtPublicPromoter_QXmlEntityResolver*)theWrappedObject)->py_q_resolveEntity(publicId, systemId, ret));}
};





class PythonQtShell_QXmlErrorHandler : public QXmlErrorHandler
{
public:
    PythonQtShell_QXmlErrorHandler():QXmlErrorHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlErrorHandler();

virtual bool  error(const QXmlParseException&  exception);
virtual QString  errorString() const;
virtual bool  fatalError(const QXmlParseException&  exception);
virtual bool  warning(const QXmlParseException&  exception);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlErrorHandler : public QXmlErrorHandler
{ public:
inline bool  py_q_error(const QXmlParseException&  exception) { return this->error(exception); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_fatalError(const QXmlParseException&  exception) { return this->fatalError(exception); }
inline bool  py_q_warning(const QXmlParseException&  exception) { return this->warning(exception); }
};

class PythonQtWrapper_QXmlErrorHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlErrorHandler* new_QXmlErrorHandler();
void delete_QXmlErrorHandler(QXmlErrorHandler* obj) { delete obj; } 
   bool  error(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  py_q_error(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlErrorHandler*)theWrappedObject)->py_q_error(exception));}
   QString  errorString(QXmlErrorHandler* theWrappedObject) const;
   QString  py_q_errorString(QXmlErrorHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlErrorHandler*)theWrappedObject)->py_q_errorString());}
   bool  fatalError(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  py_q_fatalError(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlErrorHandler*)theWrappedObject)->py_q_fatalError(exception));}
   bool  warning(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception);
   bool  py_q_warning(QXmlErrorHandler* theWrappedObject, const QXmlParseException&  exception){  return (((PythonQtPublicPromoter_QXmlErrorHandler*)theWrappedObject)->py_q_warning(exception));}
};





class PythonQtShell_QXmlInputSource : public QXmlInputSource
{
public:
    PythonQtShell_QXmlInputSource():QXmlInputSource(),_wrapper(NULL) {};
    PythonQtShell_QXmlInputSource(QIODevice*  dev):QXmlInputSource(dev),_wrapper(NULL) {};

   ~PythonQtShell_QXmlInputSource();

virtual QString  data() const;
virtual void fetchData();
virtual QString  fromRawData(const QByteArray&  data, bool  beginning = false);
virtual QChar  next();
virtual void reset();
virtual void setData(const QByteArray&  dat);
virtual void setData(const QString&  dat);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlInputSource : public QXmlInputSource
{ public:
inline QString  promoted_fromRawData(const QByteArray&  data, bool  beginning = false) { return this->fromRawData(data, beginning); }
inline QString  py_q_data() const { return QXmlInputSource::data(); }
inline void py_q_fetchData() { QXmlInputSource::fetchData(); }
inline QString  py_q_fromRawData(const QByteArray&  data, bool  beginning = false) { return QXmlInputSource::fromRawData(data, beginning); }
inline QChar  py_q_next() { return QXmlInputSource::next(); }
inline void py_q_reset() { QXmlInputSource::reset(); }
inline void py_q_setData(const QByteArray&  dat) { QXmlInputSource::setData(dat); }
inline void py_q_setData(const QString&  dat) { QXmlInputSource::setData(dat); }
};

class PythonQtWrapper_QXmlInputSource : public QObject
{ Q_OBJECT
public:
public slots:
QXmlInputSource* new_QXmlInputSource();
QXmlInputSource* new_QXmlInputSource(QIODevice*  dev);
void delete_QXmlInputSource(QXmlInputSource* obj) { delete obj; } 
   QString  data(QXmlInputSource* theWrappedObject) const;
   QString  py_q_data(QXmlInputSource* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_data());}
   void fetchData(QXmlInputSource* theWrappedObject);
   void py_q_fetchData(QXmlInputSource* theWrappedObject){  (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_fetchData());}
   QString  fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning = false);
   QString  py_q_fromRawData(QXmlInputSource* theWrappedObject, const QByteArray&  data, bool  beginning = false){  return (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_fromRawData(data, beginning));}
   QChar  next(QXmlInputSource* theWrappedObject);
   QChar  py_q_next(QXmlInputSource* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_next());}
   void reset(QXmlInputSource* theWrappedObject);
   void py_q_reset(QXmlInputSource* theWrappedObject){  (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_reset());}
   void setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat);
   void py_q_setData(QXmlInputSource* theWrappedObject, const QByteArray&  dat){  (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_setData(dat));}
   void setData(QXmlInputSource* theWrappedObject, const QString&  dat);
   void py_q_setData(QXmlInputSource* theWrappedObject, const QString&  dat){  (((PythonQtPublicPromoter_QXmlInputSource*)theWrappedObject)->py_q_setData(dat));}
};





class PythonQtShell_QXmlLexicalHandler : public QXmlLexicalHandler
{
public:
    PythonQtShell_QXmlLexicalHandler():QXmlLexicalHandler(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlLexicalHandler();

virtual bool  comment(const QString&  ch);
virtual bool  endCDATA();
virtual bool  endDTD();
virtual bool  endEntity(const QString&  name);
virtual QString  errorString() const;
virtual bool  startCDATA();
virtual bool  startDTD(const QString&  name, const QString&  publicId, const QString&  systemId);
virtual bool  startEntity(const QString&  name);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlLexicalHandler : public QXmlLexicalHandler
{ public:
inline bool  py_q_comment(const QString&  ch) { return this->comment(ch); }
inline bool  py_q_endCDATA() { return this->endCDATA(); }
inline bool  py_q_endDTD() { return this->endDTD(); }
inline bool  py_q_endEntity(const QString&  name) { return this->endEntity(name); }
inline QString  py_q_errorString() const { return this->errorString(); }
inline bool  py_q_startCDATA() { return this->startCDATA(); }
inline bool  py_q_startDTD(const QString&  name, const QString&  publicId, const QString&  systemId) { return this->startDTD(name, publicId, systemId); }
inline bool  py_q_startEntity(const QString&  name) { return this->startEntity(name); }
};

class PythonQtWrapper_QXmlLexicalHandler : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLexicalHandler* new_QXmlLexicalHandler();
void delete_QXmlLexicalHandler(QXmlLexicalHandler* obj) { delete obj; } 
   bool  comment(QXmlLexicalHandler* theWrappedObject, const QString&  ch);
   bool  py_q_comment(QXmlLexicalHandler* theWrappedObject, const QString&  ch){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_comment(ch));}
   bool  endCDATA(QXmlLexicalHandler* theWrappedObject);
   bool  py_q_endCDATA(QXmlLexicalHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_endCDATA());}
   bool  endDTD(QXmlLexicalHandler* theWrappedObject);
   bool  py_q_endDTD(QXmlLexicalHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_endDTD());}
   bool  endEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name);
   bool  py_q_endEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_endEntity(name));}
   QString  errorString(QXmlLexicalHandler* theWrappedObject) const;
   QString  py_q_errorString(QXmlLexicalHandler* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_errorString());}
   bool  startCDATA(QXmlLexicalHandler* theWrappedObject);
   bool  py_q_startCDATA(QXmlLexicalHandler* theWrappedObject){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_startCDATA());}
   bool  startDTD(QXmlLexicalHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId);
   bool  py_q_startDTD(QXmlLexicalHandler* theWrappedObject, const QString&  name, const QString&  publicId, const QString&  systemId){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_startDTD(name, publicId, systemId));}
   bool  startEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name);
   bool  py_q_startEntity(QXmlLexicalHandler* theWrappedObject, const QString&  name){  return (((PythonQtPublicPromoter_QXmlLexicalHandler*)theWrappedObject)->py_q_startEntity(name));}
};





class PythonQtShell_QXmlLocator : public QXmlLocator
{
public:
    PythonQtShell_QXmlLocator():QXmlLocator(),_wrapper(NULL) {};

   ~PythonQtShell_QXmlLocator();

virtual int  columnNumber() const;
virtual int  lineNumber() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlLocator : public QXmlLocator
{ public:
inline int  py_q_columnNumber() const { return this->columnNumber(); }
inline int  py_q_lineNumber() const { return this->lineNumber(); }
};

class PythonQtWrapper_QXmlLocator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlLocator* new_QXmlLocator();
void delete_QXmlLocator(QXmlLocator* obj) { delete obj; } 
   int  columnNumber(QXmlLocator* theWrappedObject) const;
   int  py_q_columnNumber(QXmlLocator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlLocator*)theWrappedObject)->py_q_columnNumber());}
   int  lineNumber(QXmlLocator* theWrappedObject) const;
   int  py_q_lineNumber(QXmlLocator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QXmlLocator*)theWrappedObject)->py_q_lineNumber());}
};





class PythonQtWrapper_QXmlParseException : public QObject
{ Q_OBJECT
public:
public slots:
QXmlParseException* new_QXmlParseException(const QString&  name = QString(), int  c = -1, int  l = -1, const QString&  p = QString(), const QString&  s = QString());
QXmlParseException* new_QXmlParseException(const QXmlParseException&  other);
void delete_QXmlParseException(QXmlParseException* obj) { delete obj; } 
   int  columnNumber(QXmlParseException* theWrappedObject) const;
   int  lineNumber(QXmlParseException* theWrappedObject) const;
   QString  message(QXmlParseException* theWrappedObject) const;
   QString  publicId(QXmlParseException* theWrappedObject) const;
   QString  systemId(QXmlParseException* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
QXmlStreamAttributes* a = new QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   QStringRef  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
};





class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error ReadElementTextBehaviour TokenType )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum ReadElementTextBehaviour{
  ErrorOnUnexpectedElement = QXmlStreamReader::ErrorOnUnexpectedElement,   IncludeChildElements = QXmlStreamReader::IncludeChildElements,   SkipChildElements = QXmlStreamReader::SkipChildElements};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
public slots:
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
   void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
   void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdName(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   int  entityExpansionLimit(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   QStringRef  name(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
   QStringRef  prefix(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   QStringRef  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   QString  readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour = QXmlStreamReader::ErrorOnUnexpectedElement);
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   bool  readNextStartElement(QXmlStreamReader* theWrappedObject);
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   void setEntityExpansionLimit(QXmlStreamReader* theWrappedObject, int  limit);
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   void skipCurrentElement(QXmlStreamReader* theWrappedObject);
   QStringRef  text(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   QTextCodec*  codec(QXmlStreamWriter* theWrappedObject) const;
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   bool  hasError(QXmlStreamWriter* theWrappedObject) const;
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs);
   void setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec);
   void setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
};


