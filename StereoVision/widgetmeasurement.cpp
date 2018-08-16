#include "widgetmeasurement.h"
#include "ui_widgetmeasurement.h"

widgetMeasurement::widgetMeasurement(AppSettings sett) :
    ui(new Ui::widgetMeasurement)
{
    //AppWidget
    settings = sett;

    //widgetSettings
    ui->setupUi(this);
}

widgetMeasurement::~widgetMeasurement()
{
    delete ui;
}
