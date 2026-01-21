#ifndef PLANTING_CALENDAR_H
#define PLANTING_CALENDAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Planting_Calendar;
}
QT_END_NAMESPACE

class Planting_Calendar : public QMainWindow
{
    Q_OBJECT

public:
    Planting_Calendar(QWidget *parent = nullptr);
    ~Planting_Calendar();

private:
    Ui::Planting_Calendar *ui;
};
#endif // PLANTING_CALENDAR_H
