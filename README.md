qt5-led-indicator-widget
========================

Simple Led Indicator Widget for QT5

This repository contains the class and an example project.

The class have some basic functionality and is easy to use.



Basic example:
--------------
```
myLedIndicator = new LedIndicator(); //creates new instance whih off state
ui->gridLayout->addWidget(myLedIndicator,1,0); //add it to the layout
myLedIndicator->setLedSize(40); //make a big led indicator;
myLedIndicator->toggle(); //make it on
```
Function List:
--------------
Set the state of the led indicator
```
void setState(bool state);
```
Toggle the state
```
void toggle();
```
Set the color for `on` state. For example chenge the colort to blue `myLedIndicator->setOnColor(Qt::blue);`
Qt5 documentation [Reference](http://qt-project.org/doc/qt-5/qt.html#GlobalColor-enum "Reference")
```
void setOnColor(QColor onColor);
```
Set the `off` state color. 
```
void setOffColor(QColor offColor);
```
Set the `on` state Pattern. 
Qt5 documentation [Reference](http://qt-project.org/doc/qt-5/qt.html#BrushStyle-enum "Reference")
```
void setOnPattern(Qt::BrushStyle onPattern);
```
Set the `off` state Pattern. 
```
void setOffPattern(Qt::BrushStyle offPattern);
```
Set the led size. The initial value is 20px for the radius.
```
void setLedSize(int size);
```
