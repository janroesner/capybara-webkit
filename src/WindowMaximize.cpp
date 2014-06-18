#include "WindowMaximize.h"
#include "WebPage.h"
#include "WebPageManager.h"

WindowMaximize::WindowMaximize(WebPageManager *manager, QStringList &arguments, QObject *parent) : WindowCommand(manager, arguments, parent) {
}

void WindowMaximize::windowFound(WebPage *page) {
  page->view()->window()->showMaximized();
  page->view()->window()->hide();
  finish(true);
}
