#pragma once

#include <QDialog>
#include <memory>
#include "../../Veri/Siniflar/doktor.h"

namespace Ui {
class doktorekle;
}

class doktorekle : public QDialog
{
    Q_OBJECT

public:
    explicit doktorekle(QWidget *parent = nullptr);
    ~doktorekle();

    std::shared_ptr<DOKTOR> getVeri() const;
    void setVeri(const std::shared_ptr<DOKTOR> &newVeri);

private:
    Ui::doktorekle *ui;

    std::shared_ptr<DOKTOR> veri;
};
