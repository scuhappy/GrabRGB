#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDesktopWidget>
#include<QMouseEvent>
#include<QScreen>
#include<QPixmap>
#include<QWindow>
MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowOpacity(0.1);
    QDesktopWidget* d=new QDesktopWidget();
    this->setGeometry(d->screenGeometry());
    this->hide();

    m_CtrlDia = new ControlPanel();
    connect(m_CtrlDia,SIGNAL(beginGrasp()),this,SLOT(show()));
    connect(m_CtrlDia,SIGNAL(CloseProgram()),this,SLOT(close()));
    m_CtrlDia->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    if(!m_CtrlDia->isVisible())
    {
        m_CtrlDia->show();
        this->hide();
        m_TarP = e->pos();
        GetRGB(m_TarP);
    }
}
void MainWindow::GetRGB(QPoint& p)
{
    QScreen *screen =this->windowHandle()->screen();
    QPixmap pix = screen->grabWindow(QApplication::desktop()->winId(),p.x(),p.y(),100,100);
    m_CtrlDia->SetPix(pix);
}
