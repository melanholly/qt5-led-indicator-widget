#include "ledindicatortest.h"
#include "ui_ledindicatortest.h"

LedIndicatorTest::LedIndicatorTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LedIndicatorTest)
{
    ui->setupUi(this);

    //code for the led widget
    myLedIndicator = new LedIndicator();
    ui->gridLayout->addWidget(myLedIndicator,1,0);
    ui->spinBox->setValue(20);
}

LedIndicatorTest::~LedIndicatorTest()
{
    delete ui;
}

void LedIndicatorTest::on_pushButton_clicked()
{
    myLedIndicator->toggle();
}

void LedIndicatorTest::on_spinBox_editingFinished()
{
    myLedIndicator->setLedSize(ui->spinBox->value());
}

void LedIndicatorTest::on_spinBox_valueChanged(int arg1)
{
    myLedIndicator->setLedSize(arg1);
}
