// main.cpp

#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    QWidget *form = new QWidget();

    form->resize(200, 100);
    form->move(300, 300);
    form->setWindowTitle("GUI Minimal");

    QLabel *label = new QLabel("Hello QT");
    label->move(55, 40);
    label->setParent(form);

    form->show();

    return a.exec();
}
