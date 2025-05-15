#pragma once

#include <QDialog>

namespace Ui {
class DoktorListe;
}

class DoktorListe : public QDialog
{
    Q_OBJECT

public:
    explicit DoktorListe(QWidget *parent = nullptr);
    ~DoktorListe();

    //Veri tabanındaki doktorları ekrana aktarır
    void tabloguncelle();

private:
    Ui::DoktorListe *ui;
};
