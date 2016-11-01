#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainconfig.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //
    MainConfig *config;
    
private slots:
    void on_btnQuit_clicked();

    void on_btnSave_clicked();

    void on_btnSelect_clicked();

    void on_btnGenerate_clicked();

    void on_rdoNoLimit_toggled(bool checked);

    void on_rdoLimit_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
