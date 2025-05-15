#include <QApplication>
#include "Veri/veritabani.h"
#include "ui/anapencere.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VERITABANI::vt().geriyukle();

    anapencere frm;
    frm.show();

    auto sonuc = app.exec();

    VERITABANI::vt().kaydet();

    return sonuc;
}
