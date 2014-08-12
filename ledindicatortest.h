#ifndef LEDINDICATORTEST_H
#define LEDINDICATORTEST_H

#include <QMainWindow>
#include "ledindicator.h"

namespace Ui {
class LedIndicatorTest;
}

class LedIndicatorTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit LedIndicatorTest(QWidget *parent = 0);
    ~LedIndicatorTest();

private slots:
    void on_pushButton_clicked();

    void on_spinBox_editingFinished();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::LedIndicatorTest *ui;
    LedIndicator *myLedIndicator;
};

#endif // LEDINDICATORTEST_H
