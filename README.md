# trik-pythonqt
[![Build status](https://ci.appveyor.com/api/projects/status/7in7dq3dii79p8do/branch/master?svg=true)](https://ci.appveyor.com/project/iakov/trik-pythonqt/branch/master)
[![Build Status](https://travis-ci.org/trikset/trik-pythonqt.svg?branch=master)](https://travis-ci.org/trikset/trik-pythonqt)


PythonQt fork with TRIK-related patches

# Pre-build

Qt core private headers are required.

```shell
  apt-get install --no-install-recommends qt5base-private-dev
```

# Build

Corresponding libpython3.x-dev must be installed as default, or PKG_CONFIG_PATH should point to proper dir.
Otherwise, use `./with_pyenv` local script from the project to download and build required python version

```shell
   ./with_pyenv qmake -qt5 -r
   make -j 4
```
  Note: `-qt5` option can be omitted on newer systems
