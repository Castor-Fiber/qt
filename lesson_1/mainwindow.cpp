#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // В методичке было написано, что допускается использовать стандартные библиотеки,
    // надеюсь, ничего страшного, мне так привычней :)

    int a = ui->a2->text().toInt();
    int b = ui->b2->text().toInt();
    int c = ui->c2->text().toInt();
    int D = pow(b, 2) - 4 * a * c;

    QString mess1 = "Нет корней", mess2 = "x = ",
            a1 = "x1 = ", a2 = "x2 = ", devider = ", ";

    if (a == 0) {
        int x = -c / b;
        ui->answer->setText(mess2.append(QString::number(x)));                                                          // Если а == 0
    } else if (D < 0) {
        ui->answer->setText(mess1);                                                                                     // Нет корней
    } else if (D == 0) {
        int x = 0;
        x = (-b + sqrt(D)) / (2 * a);
        ui->answer->setText(mess2.append(QString::number(x)));                                                          // Один корень
    } else {
        int x1 = 0, x2 = 0;
        x1 = (-b - sqrt(D)) / (2 * a);
        x2 = (-b + sqrt(D)) / (2 * a);
        ui->answer->setText(a1.append(QString::number(x1)).append(devider).append(a2).append(QString::number(x2)));     // Два корня
    }
}

void MainWindow::on_calc_clicked()
{
    int f_side = ui->first->text().toInt();
    int s_side = ui->second->text().toInt();
    int angle_ = ui->angle->text().toInt();
    double pi = 3.14;

    if (ui->grad->isChecked()){
        int third_side = sqrt( pow(f_side, 2) + pow(s_side, 2) - (2 * f_side * s_side) * cos(angle_) );     // Считаем для градусов
        ui->res->setText(QString::number(third_side));
    } else if (ui->rad->isChecked()) {
        int grad = (angle_ * 180) / pi;     // Перевозим радианы в градусы
        int third_side = sqrt( pow(f_side, 2) + pow(s_side, 2) - (2 * f_side * s_side) * cos(grad) );   // Используем полученное значение в градусах
        ui->res->setText(QString::number(third_side));
    } else {
        ui->res->setText("Выберите вариант");
    }
}

































