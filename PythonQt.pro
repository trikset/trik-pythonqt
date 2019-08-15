TEMPLATE = subdirs

CONFIG += ordered
SUBDIRS = src extensions

CONFIG(tests) { SUBDIRS += tests }
CONFIG(generator) { SUBDIRS += generator }
