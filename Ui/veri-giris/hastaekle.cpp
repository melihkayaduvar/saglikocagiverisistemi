#include "hastaekle.h"
#include "Ui/veri-giris/ui_hastaekle.h"

HastaEkle::HastaEkle(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HastaEkle)
{
    ui->setupUi(this);
    connect(ui->lwAlerjiler, &QListWidget::itemSelectionChanged,
            this, &HastaEkle::lwAlerjiler_silmesecimi);
    connect(ui->lwKronikHastaliklar, &QListWidget::itemSelectionChanged,
            this, &HastaEkle::lwKronikHastaliklar_silmesecimi);

}

HastaEkle::~HastaEkle()
{
    delete ui;
}

std::shared_ptr<HASTA> HastaEkle::getVeri() const
{
    veri->setadi(ui->leAdi->text());
    veri->setsoyadi(ui->leSoyadi->text());
    veri->settelefon(ui->leTel->text());
    veri->setTckimlik(ui->leKimlikNo->text());

    veri->setAdres(ui->teAdres->toPlainText());

    QStringList liste;
    for (auto i=0;i<ui->lwAlerjiler->count();++i){
        liste << ui->lwAlerjiler->item(i)->text();
    }
    veri->setAlerjiler(liste);
    QStringList liste2;
    for (auto i=0;i<ui->lwKronikHastaliklar->count();++i){
        liste2 << ui->lwKronikHastaliklar->item(i)->text();
    }
    veri->setKronikHastaliklar(liste2);

    veri->setDogumTarihi(ui->deDogumTarihi->date());

    veri->setKanGrubu(ui->cbKanGrubu->currentText());

    QString secim=ui->cbCinsiyet->currentText();
    CinsiyetEnum cinsiyet;
    if(secim=="ERKEK")
        cinsiyet= CinsiyetEnum::ERKEK;
    else if(secim=="KADIN")
        cinsiyet= CinsiyetEnum::KADIN;
    else
        cinsiyet=CinsiyetEnum::BELIRTILMEMIS;

    veri->setCinsiyet(cinsiyet);

    return veri;

}

void HastaEkle::setVeri(const std::shared_ptr<HASTA> &newVeri)
{
    veri = newVeri;

    ui->leAdi->setText(veri->adi());
    ui->leSoyadi->setText(veri->soyadi());
    ui->leTel->setText(veri->telefon());
    ui->leKimlikNo->setText(veri->tckimlik());

    ui->teAdres->setText(veri->adres());


    QStringList liste = veri->alerjiler();
    ui->lwAlerjiler->clear();
    ui->lwAlerjiler->addItems(liste);
    QStringList liste2 = veri->kronikHastaliklar();
    ui->lwKronikHastaliklar->clear();
    ui->lwKronikHastaliklar->addItems(liste2);

    ui->deDogumTarihi->setDate(veri->dogumTarihi());

    ui->cbKanGrubu->setCurrentText(veri->kanGrubu());
    CinsiyetEnum cinsiyet = veri->cinsiyet();
    switch (cinsiyet) {
    case CinsiyetEnum::ERKEK:
        ui->cbCinsiyet->setCurrentText("Erkek");
        break;
    case CinsiyetEnum::KADIN:
        ui->cbCinsiyet->setCurrentText("Kadın");
        break;
    case CinsiyetEnum::BELIRTILMEMIS:
        break;
    }
}

void HastaEkle::on_btnAlerjilerEkle_clicked()
{
    QString girilenVeri = ui->leAlerjiler->text().trimmed();

    if (!girilenVeri.isEmpty()) {
        ui->lwAlerjiler->addItem(girilenVeri);
        ui->leAlerjiler->clear();
    }
}


void HastaEkle::on_btnKronikHastaliklarEkle_clicked()
{
    QString girilenVeri = ui->leKronikHastaliklar->text().trimmed();

    if (!girilenVeri.isEmpty()) {
        ui->lwKronikHastaliklar->addItem(girilenVeri);
        ui->leKronikHastaliklar->clear();
    }
}

void HastaEkle::on_btnAlerjilerSil_clicked()
{
    QListWidgetItem *item = ui->lwAlerjiler->currentItem();
    if (item) {
        // UI'dan sil
        delete item;
    }
}
void HastaEkle::lwAlerjiler_silmesecimi()
{
    bool secimVarMi = !ui->lwAlerjiler->selectedItems().isEmpty();
    ui->btnAlerjilerSil->setEnabled(secimVarMi);
}


void HastaEkle::on_btnKronikHastaliklarSil_clicked()
{
    QListWidgetItem *item = ui->lwKronikHastaliklar->currentItem();
    if (item) {
        // UI'dan sil
        delete item;
    }
}
void HastaEkle::lwKronikHastaliklar_silmesecimi()
{
    bool secimVarMi = !ui->lwKronikHastaliklar->selectedItems().isEmpty();
    ui->btnKronikHastaliklarSil->setEnabled(secimVarMi);
}
