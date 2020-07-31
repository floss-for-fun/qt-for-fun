// main.cpp

#include "minForm.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    MinForm *form = new MinForm(NULL);
    form->show();
    return a.exec();
};
