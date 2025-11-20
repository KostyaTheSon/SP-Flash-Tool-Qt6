#ifndef WEBENGINECOMPATIBILITY_H
#define WEBENGINECOMPATIBILITY_H

#include <QtGlobal>

#if QT_VERSION >= 0x060000 // Qt 6
#include <QtWebEngineWidgets/QWebEngineView>
#define WebView QWebEngineView
#elif QT_VERSION >= 0x050000 // Qt 5
#include <QtWebKitWidgets/QWebView>
#define WebView QWebView
#else
#include <QtWebKit/QWebView>
#define WebView QWebView
#endif

#endif // WEBENGINECOMPATIBILITY_H