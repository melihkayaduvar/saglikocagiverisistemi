#include "hastaliste.h"
#include "Ui/veri-liste/ui_hastaliste.h"

#include "../../Veri/veritabani.h"

#include <QStringList>

HastaListe::HastaListe(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HastaListe)
{
    ui->setupUi(this);

    tabloGuncellce();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

HastaListe::~HastaListe()
{
    delete ui;
}

void HastaListe::tabloGuncellce()
{
    auto tumhastalar=VERITABANI::vt().hastalar().bul(
        [](std::shared_ptr<HASTA> d){
            return true;
        });
    ui->tableWidget->setRowCount(tumhastalar.count());
    ui->tableWidget->setColumnCount(11);
    QStringList basliklar;
    basliklar.append("ID");
    basliklar.append("ADI");
    basliklar.append("SOYADI");
    basliklar.append("CINSIYET");
    basliklar.append("DOGUM TARİHİ");
    basliklar.append("TC KIMLIK");
    basliklar.append("TELEFON");
    basliklar.append("ADRES");
    basliklar.append("KAN GRUBU");
    basliklar.append("ALERJILER");
    basliklar.append("KRONIK HASTALIKLAR");

    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(auto i=0;i<tumhastalar.size();i++){
        QTableWidgetItem *hucre0 = new QTableWidgetItem;
        hucre0->setText(tr("%1").arg(tumhastalar[i]->id()));
        ui->tableWidget->setItem(i,0,hucre0);
        QTableWidgetItem *hucre1 = new QTableWidgetItem;
        hucre1->setText(tumhastalar[i]->adi());
        ui->tableWidget->setItem(i,1,hucre1);
        QTableWidgetItem *hucre2 = new QTableWidgetItem;
        hucre2->setText(tumhastalar[i]->soyadi());
        ui->tableWidget->setItem(i,2,hucre2);
        QTableWidgetItem *hucre3 = new QTableWidgetItem;
        CinsiyetEnum cinsiyet = tumhastalar[i]->cinsiyet();
        switch (cinsiyet) {
        case CinsiyetEnum::ERKEK:
            hucre3->setText("Erkek");
            break;
        case CinsiyetEnum::KADIN:
            hucre3->setText("Kadın");
            break;
        case CinsiyetEnum::BELIRTILMEMIS:
            hucre3->setText("BELIRTILMEMIS");
            break;
        }
        ui->tableWidget->setItem(i,3,hucre3);
        QTableWidgetItem *hucre4=new QTableWidgetItem;
        hucre4->setText(tumhastalar[i]->dogumTarihi().toString("dd.MM.yyyy"));
        ui->tableWidget->setItem(i,4,hucre4);
        QTableWidgetItem *hucre5=new QTableWidgetItem;
        hucre5->setText(tumhastalar[i]->tckimlik());
        ui->tableWidget->setItem(i,5,hucre5);
        QTableWidgetItem *hucre6=new QTableWidgetItem;
        hucre6->setText(tumhastalar[i]->telefon());
        ui->tableWidget->setItem(i,6,hucre6);
        QTableWidgetItem *hucre7=new QTableWidgetItem;
        hucre7->setText(tumhastalar[i]->adres());
        ui->tableWidget->setItem(i,7,hucre7);
        QTableWidgetItem *hucre8=new QTableWidgetItem;
        hucre8->setText(tumhastalar[i]->kanGrubu());
        ui->tableWidget->setItem(i,8,hucre8);
        QTableWidgetItem *hucre9=new QTableWidgetItem;
        hucre9->setText(tumhastalar[i]->alerjiler().join(", "));
        ui->tableWidget->setItem(i,9,hucre9);
        QTableWidgetItem *hucre10=new QTableWidgetItem;
        hucre10->setText(tumhastalar[i]->kronikHastaliklar().join(", "));
        ui->tableWidget->setItem(i,10,hucre10);

    }
}
