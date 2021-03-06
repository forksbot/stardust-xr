# Stardust XR Core

This project is a Linux-based compositor that allows traditionally 2D applications to be interactive in 3D for use in immersive devices, such as HMDs. As well as simple display and interaction, Stardust will allow for "app shells" that can transform 2D app interactions into 3D making said applications much easier to use in XR.

This project is made using Qt and Qt Quick 3D.

## Building instructions:

1. Install Monado (https://gitlab.freedesktop.org/monado/monado) and ensure xrgears runs
2. Install Qt 5.14.1 base, QML, Quick and Quick 3D via package manager, Qt's website (https://www.qt.io/download), or compile it yourself (https://github.com/qt)
3. Build and install Quick3D-OpenXR (https://github.com/technobaboo/quick3d-openxr) and ensure the xrgears example runs
4. Build Stardust using the provided scripts (make sure qmake is in your PATH):
```
$ mkdir build && cd build
$ sh ../scripts/build.sh ..
```
