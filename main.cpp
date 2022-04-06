#include "startwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    const QIcon mainIcon = QIcon::fromTheme("mainIcon", QIcon("./Icons/others.ico"));
    a.setWindowIcon(mainIcon);
    startWindow w;
    w.setMinimumHeight(100);
    w.setMinimumWidth(500);
    w.show();

    return a.exec();
}
