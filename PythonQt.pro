TEMPLATE = subdirs

SUBDIRS = src extensions

extensions.depends += src

CONFIG(tests) {
    SUBDIRS += tests
    tests.depends += extensions
}

CONFIG(generator) {
    SUBDIRS += generator
}

OTHER_FILES += $$PWD/.github/workflows/build.yml
