#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H

#include <QDialog>
#include<QPixmap>
namespace Ui {
class ControlPanel;
}

class ControlPanel : public QDialog
{
    Q_OBJECT

public:
    explicit ControlPanel(QWidget *parent = 0);
    ~ControlPanel();
    void SetPix(QPixmap& pix);
private slots:
    void on_GraspBtn_clicked();

    void on_CloseBtn_clicked();

private:
    Ui::ControlPanel *ui;
signals:
    void beginGrasp();
    void CloseProgram();
};

#endif // CONTROLPANEL_H
