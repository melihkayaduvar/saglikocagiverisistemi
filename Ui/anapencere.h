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


private slots:
    void on_action_k_triggered();

    void on_actiondoktorekle_triggered();

    void on_actiondoktorlist_triggered();

    void on_actionhastaekle_triggered();

    void on_actionhastalist_triggered();

    void on_actionziyaretekle_triggered();

    void on_actionziyaretlist_triggered();

private:
    Ui::anapencere *ui;

    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event);
};
