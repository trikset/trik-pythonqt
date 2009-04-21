#ifndef PYTHONQTWRAPPER_QTCONCURRENT_H
#define PYTHONQTWRAPPER_QTCONCURRENT_H

#include <qtconcurrentexception.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qtconcurrentreducekernel.h>
#include <qtconcurrentthreadengine.h>

class PythonQtWrapper_QtConcurrent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ReduceOption ThreadFunctionResult )
enum ReduceOption{
  UnorderedReduce = QtConcurrent::UnorderedReduce,   OrderedReduce = QtConcurrent::OrderedReduce,   SequentialReduce = QtConcurrent::SequentialReduce};
enum ThreadFunctionResult{
  ThrottleThread = QtConcurrent::ThrottleThread,   ThreadFinished = QtConcurrent::ThreadFinished};
public slots:
};

#endif // PYTHONQTWRAPPER_QTCONCURRENT_H
