// minForm.cpp

#include "minForm.h"

MinForm::MinForm(QWidget *parent) : QWidget (parent) {
    this->setupUi();
};

MinForm::~MinForm() {
    delete label;
};

void MinForm::setupUi() {
    this->resize(200, 100);
    this->move(300, 300);
    this->setWindowTitle("GUI Minimal");

    label = new QLabel("Hello QT");
    label->move(55, 40);
    label->setParent(this);
};
