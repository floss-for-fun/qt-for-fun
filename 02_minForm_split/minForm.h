// minForm.h

#ifndef MINIMALFORM_H
#define MINIMALFORM_H

#include <QWidget>
#include <QLabel>

class MinForm: public QWidget {
    Q_OBJECT

public:
    explicit  MinForm(QWidget *parent);
    ~MinForm();
    void setupUi();

private:
    QLabel *label;
};

#endif
