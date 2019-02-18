# trik-pythonqt

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
