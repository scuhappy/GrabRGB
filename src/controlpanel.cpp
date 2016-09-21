#include "controlpanel.h"
#include "ui_controlpanel.h"
#include<QRgb>
ControlPanel::ControlPanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlPanel)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

ControlPanel::~ControlPanel()
{
    delete ui;
}
void ControlPanel::init(QWidget *wid)
{
    m_FullWid = wid;
}

void ControlPanel::SetPix(QPixmap &pix)
{
    ui->IMGLabel->setPixmap(pix);
    QRgb rgb =  pix.toImage().pixel(0,0);
   QColor color =  QColor::fromRgb(rgb);
   ui->RValueLabel->setText(QString("%1").arg(color.red()));
   ui->GValueLabel->setText(QString("%1").arg(color.green()));
   ui->BValueLabel->setText(QString("%1").arg(color.blue()));
   ui->AValueLabel->setText(QString("%1").arg(color.alpha()));
   ui->HexRGBLineEdit->setText(color.name(QColor::HexRgb));
}

void ControlPanel::on_GraspBtn_clicked()
{
    this->hide();
    m_FullWid->show();
}

void ControlPanel::on_CloseBtn_clicked()
{    
    this->close();
    QApplication::exit();
}
