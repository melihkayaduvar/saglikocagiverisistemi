#pragma once

#include <QDialog>
#include <memory>
#include "../../Veri/Siniflar/hasta.h"

namespace Ui {
class HastaEkle;
}

class HastaEkle : public QDialog
{
    Q_OBJECT

public:
    explicit HastaEkle(QWidget *parent = nullptr);
    ~HastaEkle();

    std::shared_ptr<HASTA> getVeri() const;
    void setVeri(const std::shared_ptr<HASTA> &newVeri);

private slots:
    void on_btnAlerjilerEkle_clicked();

    void on_btnKronikHastaliklarEkle_clicked();

    void on_btnAlerjilerSil_clicked();

    void lwAlerjiler_silmesecimi();

    void on_btnKronikHastaliklarSil_clicked();

    void lwKronikHastaliklar_silmesecimi();

private:
    Ui::HastaEkle *ui;

    std::shared_ptr<HASTA> veri;
};
