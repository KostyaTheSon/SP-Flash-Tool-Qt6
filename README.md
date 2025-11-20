# SP Flash Tool Qt5/Qt6 Version

The source code of the tool is SP Flash Tool **v5.1720**

## Description

This is a Qt5/Qt6 port of the SP Flash Tool, originally built with Qt4. The tool is used for flashing firmware to MediaTek-based devices. The UI has been updated to be compatible with modern Qt5/Qt6 versions while preserving the original functionality.

## Changes from Qt4 to Qt5/Qt6

- Updated project file to use Qt5/Qt6 modules (xml instead of xmlpatterns, webenginewidgets instead of webkit for Qt6)
- Updated Qt includes from QtGui to QtWidgets where needed
- Replaced QWebView with QWebEngineView in the UI forms (or maintained compatibility with WebKit for Qt5)
- Fixed Qt5/Qt6-incompatible enum values
- Updated deprecated APIs to their Qt5/Qt6 equivalents
- Added conditional compilation for Qt5/Qt6 compatibility

## Build Requirements

- Qt5 or Qt6 development libraries
- C++ compiler with C++11 or later support
- CMake or qmake
- Required Qt modules: Core, Gui, Widgets, Xml, WebEngineWidgets (or WebKit for Qt5), Network, Concurrent

## Build Instructions

### Using qmake:

```bash
qmake SPFlashToolAPCore.pro
make
```

### Using CMake:

```bash
mkdir build
cd build
cmake ..
make
```

## FAQ:

### Is it different?

Not really, except the UI being ported from Qt4 (version 4.8) to Qt5/Qt6. All core functionality remains the same.

### Is it AI-Generated?

The porting work was assisted by AI tools, but the core functionality and code structure remain true to the original SP Flash Tool. The AI helped with updating the Qt-specific code to be compatible with Qt5/Qt6.

### Compatibility

This version is compatible with Qt5 and Qt6 on all architectures and operating systems including Windows, macOS, Linux, and BSD variants. This ensures broad compatibility across different platforms and distributions.
