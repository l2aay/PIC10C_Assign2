#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

#include <QMainWindow>
#include <QSpinBox>
#include <QSlider>

QT_BEGIN_NAMESPACE
namespace Ui { class grade_calculator; }
QT_END_NAMESPACE

class grade_calculator : public QMainWindow
{
    Q_OBJECT

public:
    grade_calculator(QWidget *parent = nullptr);
    ~grade_calculator();

private slots:
    void compute_sum() const;

private:
    Ui::grade_calculator *ui;
};
#endif // GRADE_CALCULATOR_H
