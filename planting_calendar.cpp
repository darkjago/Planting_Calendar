#include "planting_calendar.h"
#include "./ui_planting_calendar.h"

Planting_Calendar::Planting_Calendar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Planting_Calendar)
{
    ui->setupUi(this);
}

Planting_Calendar::~Planting_Calendar()
{
    delete ui;
}
