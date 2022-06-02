#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project_Scarlet.h"

class Project_Scarlet : public QMainWindow
{
    Q_OBJECT

public:
    Project_Scarlet(QWidget *parent = Q_NULLPTR);

private:
    Ui::Project_ScarletClass ui;
};
