#pragma once

#include <QDialog>

namespace Ui {
class HastaListe;
}

class HastaListe : public QDialog
{
    Q_OBJECT

public:
    explicit HastaListe(QWidget *parent = nullptr);
    ~HastaListe();

    void tabloGuncellce();
private:
    Ui::HastaListe *ui;
};
