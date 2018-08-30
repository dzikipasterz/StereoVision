#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    baseSize = this->size();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::closeApplication()
{
    QApplication::closeAllWindows();
}


void MainWindow::showAppInfo()
{
    info Info;
    Info.setModal(true);
    centerChild(this, &Info);
    Info.exec();
}

void MainWindow::showCloseConfirmation()
{
    closeConfirm closeConfirmation;
    closeConfirmation.setModal(true);
    centerChild(this,&closeConfirmation);
    connect(&closeConfirmation,SIGNAL(closeApplication()),this,SLOT(closeApplication()));
    closeConfirmation.exec();
}

void MainWindow::initPanelWidget()
{
    if(widgetPanel != nullptr)
    ui->centralWidget->layout()->removeWidget(widgetPanel);
    widgetPanel->deleteLater();
}


void MainWindow::showMeasurementWidget()
{
    initPanelWidget();
    widgetPanel = new widgetMeasurement(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::showMeasurementOfflineWidget()
{
    initPanelWidget();
    widgetPanel = new widgetMeasOffline(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::showMeasurementOnlineWidget()
{
    initPanelWidget();
    widgetPanel = new widgetMeasOnline(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::showSettingsWidget()
{
    initPanelWidget();
    widgetPanel = new widgetSettings(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::showCalibrationWidget()
{
    initPanelWidget();
    widgetPanel = new widgetCalibration(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::showRecordWidget()
{
    initPanelWidget();
    widgetPanel = new widgetRecord(&settings);
    ui->centralWidget->layout()->addWidget(widgetPanel);
}

void MainWindow::on_pushButtonInfo_clicked()
{
   showAppInfo();
}

void MainWindow::on_actionO_programie_triggered()
{
    showAppInfo();
}

void MainWindow::on_pushButtonWyjscie_clicked()
{
    showCloseConfirmation();
}

void MainWindow::on_actionZako_cz_triggered()
{
    showCloseConfirmation();
}

void MainWindow::on_pushButtonPomiarOnline_clicked()
{
    showMeasurementOnlineWidget();
}

void MainWindow::on_pushButtonUstawienia_clicked()
{
    showSettingsWidget();
}

void MainWindow::on_pushButtonKalibracja_clicked()
{
    showCalibrationWidget();
}

void MainWindow::on_pushButtonNagrywanie_clicked()
{
    showRecordWidget();
}

void MainWindow::on_pushButtonPomiarOffline_clicked()
{
    showMeasurementOfflineWidget();
}
