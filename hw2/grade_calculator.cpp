#include "grade_calculator.h"
#include "ui_grade_calculator.h"

grade_calculator::grade_calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    QObject::connect(ui->sb1, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb2, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb3, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb4, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb5, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb6, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb7, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb8, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb9, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb10, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));
    QObject::connect(ui->sb11, SIGNAL(valueChanged(int)),
                     this, SLOT(compute_sum()));

}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::compute_sum() const {
    double x1 = ui->sb1->value();
    double x2 = ui->sb2->value();
    double x3 = ui->sb3->value();
    double x4 = ui->sb4->value();
    double x5 = ui->sb5->value();
    double x6 = ui->sb6->value();
    double x7 = ui->sb7->value();
    double x8 = ui->sb8->value();
    double x9 = ui->sb9->value();
    double x10 = ui->sb10->value();
    double x11 = ui->sb11->value();
    QString text(QString::number(x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10 + x11));
    ui->overallGrade->setText(text);
    return;
}
