#include "doktorliste.h"
#include "Ui/veri-liste/ui_doktorliste.h"

#include "../../Veri/veritabani.h"

#include <QStringList>

/*class DoktorTabloDonusturucu:public QAbstractTableModel{
public:
    DoktorTabloDonusturucu(){
        gosterilecekveriler = VERITABANI::vt().doktorlar().bul([]
            (std::shared_ptr<DOKTOR> d){
            return true;
        });
    }
    int rowCount(const QModelIndex &parent) const {
        return gosterilecekveriler.size();
    }
    int columnCount(const QModelIndex &parent) const {
        return 6;
    }
    QVariant data(const QModelIndex &index, int role) const {
        if(role==Qt::DisplayRole){
            int satir = index.row();
            int sutun = index.column();
            auto veri = gosterilecekveriler[satir];
            switch (sutun) {
            case 0:
                return veri->id();
                break;
            case 1:
                return veri->adi();
                break;
            case 2:
                return veri->soyadi();
                break;
            case 3:
                return veri->telefon();
                break;
            case 4:
                return veri->diplomaNo();
                break;
            case 5:
                return veri->uzmanlikAlani();
                break;
            }
        }
        return QVariant();
    }
    QVariant headerData(int section, Qt::Orientation orientation, int role) const {
        if(role==Qt::DisplayRole && orientation==Qt::Horizontal){
            switch (section) {
            case 0:
                return tr("ID");
                break;
            case 1:
                return tr("ADI");
                break;
            case 2:
                return tr("SOYADI");
                break;
            case 3:
                return tr("TELEFON");
                break;
            case 4:
                return tr("DIPLOMA NO");
                break;
            case 5:
                return tr("UZMANLIK ALANI");
                break;
            }
        }
        return QAbstractTableModel::headerData(section,orientation,role);
    }
private:
    DoktorTablosu::VeriDizisi gosterilecekveriler;
};*/

DoktorListe::DoktorListe(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DoktorListe)
{
    ui->setupUi(this);

    tabloguncelle();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    /*DoktorTabloDonusturucu *donusturucu = new DoktorTabloDonusturucu();
    ui->tableView->setModel(donusturucu);*/
}

DoktorListe::~DoktorListe()
{
    delete ui;
}

void DoktorListe::tabloguncelle()
{
    auto tumdoktorlar=VERITABANI::vt().doktorlar().bul(
        [](std::shared_ptr<DOKTOR> d){
            return true;
        });
    ui->tableWidget->setRowCount(tumdoktorlar.size());
    ui->tableWidget->setColumnCount(6);

    QStringList basliklar;
    basliklar.append("ID");
    basliklar.append("ADI");
    basliklar.append("SOYADI");
    basliklar.append("TELEFON");
    basliklar.append("DIPLOMA NO");
    basliklar.append("UZMANLIK ALANI");

    ui->tableWidget->setHorizontalHeaderLabels(basliklar);

    for(auto i=0;i<tumdoktorlar.size();i++){
        QTableWidgetItem *hucre0=new QTableWidgetItem;
        hucre0->setText(tr("%1").arg(tumdoktorlar[i]->id()));
        ui->tableWidget->setItem(i,0,hucre0);
        QTableWidgetItem *hucre1=new QTableWidgetItem;
        hucre1->setText(tumdoktorlar[i]->adi());
        ui->tableWidget->setItem(i,1,hucre1);
        QTableWidgetItem *hucre2=new QTableWidgetItem;
        hucre2->setText(tumdoktorlar[i]->soyadi());
        ui->tableWidget->setItem(i,2,hucre2);
        QTableWidgetItem *hucre3=new QTableWidgetItem;
        hucre3->setText(tumdoktorlar[i]->telefon());
        ui->tableWidget->setItem(i,3,hucre3);
        QTableWidgetItem *hucre4=new QTableWidgetItem;
        hucre4->setText(tumdoktorlar[i]->diplomaNo());
        ui->tableWidget->setItem(i,4,hucre4);
        QTableWidgetItem *hucre5=new QTableWidgetItem;
        hucre5->setText(tumdoktorlar[i]->uzmanlikAlani());
        ui->tableWidget->setItem(i,5,hucre5);
    }
}
