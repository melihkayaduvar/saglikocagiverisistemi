#pragma once

#include <QMainWindow>

namespace Ui {
class anapencere;
}

class anapencere : public QMainWindow
{
    Q_OBJECT

public:
    explicit anapencere(QWidget *parent = nullptr);
    ~anapencere();
private:
    Ui::anapencere *ui;
};
