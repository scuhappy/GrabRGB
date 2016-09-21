#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include"controlpanel.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ControlPanel* m_CtrlDia;
    QPoint m_TarP;
    void GetRGB(QPoint& p);
protected:
    void mouseReleaseEvent(QMouseEvent *);
    void showEvent(QShowEvent *);
private:
    Ui::MainWindow *ui;
public slots:
  //  void showPanel();
    void ExitProgram();
};

#endif // MAINWINDOW_H
