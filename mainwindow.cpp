#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainconfig.h"
#include <QFileInfo>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainToolBar->setVisible(false);
    ui->statusBar->setVisible(false);

    config = new MainConfig();
    const char *filename = "gkeygen.xml";
    QFileInfo fileInfo(filename);
    if(fileInfo.exists() && fileInfo.isFile()) {
        config->loadFromFile(filename);
        this->setWindowTitle(config->title);
        if(config->sn_type == "text") {
            ui->stkSerialNo->setCurrentIndex(0);
            ui->lblSerialNo->setText(config->sn_name);
        }
        else {
            ui->stkSerialNo->setCurrentIndex(1);
            ui->lblSNFile->setText(config->sn_name);
        }
        if(config->key_type == "text") {
            ui->stkKey->setCurrentIndex(0);
            ui->lblKey->setText(config->key_name);
        }
        else {
            ui->stkKey->setCurrentIndex(1);
            ui->lblKeyFile->setText(config->key_name);
        }
    }
    else {
        if(ui->stkSerialNo->currentIndex() == 0) {
            config->sn_type = "text";
            config->sn_name = ui->lblSerialNo->text();
        }
        else {
            config->sn_type = "file";
            config->sn_name = ui->lblSNFile->text();
        }
        if(ui->stkKey->currentIndex() == 0) {
            config->key_type = "text";
            config->key_name = ui->lblKey->text();
        }
        else {
            config->key_type = "file";
            config->key_name = ui->lblKeyFile->text();

            config->key_filename = "License.txt";
        }
        config->title = this->windowTitle();
        config->command = "echo dummy.exe -o {{output}} -i {{input}} -l {{limit}} && pause";
        config->saveToFile(filename);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnQuit_clicked()
{
    this->close();
}

void MainWindow::on_btnSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save File"),
                                                    config->key_filename,
                                                    tr("License File (*.txt)"));
    if(fileName.length() > 0)
    {
        ui->edtKeyFile->setText(fileName);
    }
}

void MainWindow::on_btnSelect_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Select SN File"),
        ".",
        tr("SN Files (*.txt)"));
    if(fileName.length() > 0)
    {
        ui->edtSNFile->setText(fileName);
    }
}

void MainWindow::on_btnGenerate_clicked()
{
    QString sn;
    if(ui->stkSerialNo->currentIndex() == 0)
    {
        sn = ui->edtSerialNo->text();
    }
    else
    {
        sn = ui->edtSNFile->text();
    }

    if(sn.length() <= 0)
    {
        QMessageBox msgBox;
        msgBox.setText("No input serial number.");
        msgBox.exec();
        return;
    }

    QString saveTo = ui->edtKeyFile->text();
    if(saveTo.length() <= 0)
    {
        QMessageBox msgBox;
        msgBox.setText("Please choose a location to save license file.");
        msgBox.exec();
        return;
    }

    int limit = 0;
    if(ui->rdoNoLimit->isChecked())
    {
        limit = -1;
    }
    else
    {
        limit = ui->edtLimit->text().toInt();
    }

    QString cmd = config->command;
    cmd.replace("{{input}}", sn);
    cmd.replace("{{output}}", saveTo);
    cmd.replace("{{limit}}", QString::number(limit));
    system(cmd.toLatin1().data());
}

void MainWindow::on_rdoNoLimit_toggled(bool checked)
{
    if(ui->rdoNoLimit->isChecked())
    {
        ui->edtLimit->setEnabled(false);
    }
}

void MainWindow::on_rdoLimit_toggled(bool checked)
{
    if(ui->rdoLimit->isChecked())
    {
        ui->edtLimit->setEnabled(true);
    }
}
