#include "ledindicatortest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LedIndicatorTest w;
    w.show();

    return a.exec();
}
