/********************************************************************************
** Form generated from reading UI file 'grade_calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADE_CALCULATOR_H
#define UI_GRADE_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grade_calculator
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_12;
    QSlider *horizontalSlider_11;
    QSpinBox *sb10;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_13;
    QSlider *horizontalSlider_12;
    QSpinBox *sb11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *gradeLabel;
    QLabel *overallGrade;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *HW1;
    QSlider *horizontalSlider;
    QSpinBox *sb1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *HW2;
    QSlider *horizontalSlider_3;
    QSpinBox *sb2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *HW3;
    QSlider *horizontalSlider_4;
    QSpinBox *sb3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *HW4;
    QSlider *horizontalSlider_5;
    QSpinBox *sb4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *HW5;
    QSlider *horizontalSlider_6;
    QSpinBox *sb5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *HW6;
    QSlider *horizontalSlider_7;
    QSpinBox *sb6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *HW7;
    QSlider *horizontalSlider_8;
    QSpinBox *sb7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *HW8;
    QSlider *horizontalSlider_9;
    QSpinBox *sb8;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_11;
    QSlider *horizontalSlider_10;
    QSpinBox *sb9;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *grade_calculator)
    {
        if (grade_calculator->objectName().isEmpty())
            grade_calculator->setObjectName(QString::fromUtf8("grade_calculator"));
        grade_calculator->resize(800, 600);
        centralwidget = new QWidget(grade_calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(330, 20, 141, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);
        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(430, 170, 341, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSlider_11 = new QSlider(layoutWidget_8);
        horizontalSlider_11->setObjectName(QString::fromUtf8("horizontalSlider_11"));
        horizontalSlider_11->setMaximum(100);
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(horizontalSlider_11);

        sb10 = new QSpinBox(layoutWidget_8);
        sb10->setObjectName(QString::fromUtf8("sb10"));
        sb10->setMaximum(100);

        horizontalLayout_12->addWidget(sb10);


        verticalLayout_4->addLayout(horizontalLayout_12);

        layoutWidget_9 = new QWidget(centralwidget);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(430, 300, 341, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSlider_12 = new QSlider(layoutWidget_9);
        horizontalSlider_12->setObjectName(QString::fromUtf8("horizontalSlider_12"));
        horizontalSlider_12->setMaximum(100);
        horizontalSlider_12->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(horizontalSlider_12);

        sb11 = new QSpinBox(layoutWidget_9);
        sb11->setObjectName(QString::fromUtf8("sb11"));
        sb11->setMaximum(100);

        horizontalLayout_13->addWidget(sb11);


        verticalLayout_5->addLayout(horizontalLayout_13);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(610, 480, 161, 61));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        gradeLabel = new QLabel(widget);
        gradeLabel->setObjectName(QString::fromUtf8("gradeLabel"));
        QFont font1;
        font1.setPointSize(10);
        gradeLabel->setFont(font1);

        horizontalLayout_7->addWidget(gradeLabel);

        overallGrade = new QLabel(widget);
        overallGrade->setObjectName(QString::fromUtf8("overallGrade"));
        overallGrade->setFont(font1);

        horizontalLayout_7->addWidget(overallGrade);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 80, 371, 471));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        HW1 = new QLabel(widget1);
        HW1->setObjectName(QString::fromUtf8("HW1"));

        horizontalLayout->addWidget(HW1);

        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(20);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        sb1 = new QSpinBox(widget1);
        sb1->setObjectName(QString::fromUtf8("sb1"));
        sb1->setMaximum(20);

        horizontalLayout->addWidget(sb1);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        HW2 = new QLabel(widget1);
        HW2->setObjectName(QString::fromUtf8("HW2"));

        horizontalLayout_2->addWidget(HW2);

        horizontalSlider_3 = new QSlider(widget1);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(20);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_3);

        sb2 = new QSpinBox(widget1);
        sb2->setObjectName(QString::fromUtf8("sb2"));
        sb2->setMaximum(20);

        horizontalLayout_2->addWidget(sb2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        HW3 = new QLabel(widget1);
        HW3->setObjectName(QString::fromUtf8("HW3"));

        horizontalLayout_4->addWidget(HW3);

        horizontalSlider_4 = new QSlider(widget1);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(20);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_4);

        sb3 = new QSpinBox(widget1);
        sb3->setObjectName(QString::fromUtf8("sb3"));
        sb3->setMaximum(20);

        horizontalLayout_4->addWidget(sb3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        HW4 = new QLabel(widget1);
        HW4->setObjectName(QString::fromUtf8("HW4"));

        horizontalLayout_5->addWidget(HW4);

        horizontalSlider_5 = new QSlider(widget1);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(20);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_5);

        sb4 = new QSpinBox(widget1);
        sb4->setObjectName(QString::fromUtf8("sb4"));
        sb4->setMaximum(20);

        horizontalLayout_5->addWidget(sb4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        HW5 = new QLabel(widget1);
        HW5->setObjectName(QString::fromUtf8("HW5"));

        horizontalLayout_6->addWidget(HW5);

        horizontalSlider_6 = new QSlider(widget1);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(20);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_6);

        sb5 = new QSpinBox(widget1);
        sb5->setObjectName(QString::fromUtf8("sb5"));
        sb5->setMaximum(20);

        horizontalLayout_6->addWidget(sb5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        HW6 = new QLabel(widget1);
        HW6->setObjectName(QString::fromUtf8("HW6"));

        horizontalLayout_8->addWidget(HW6);

        horizontalSlider_7 = new QSlider(widget1);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setMaximum(20);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_7);

        sb6 = new QSpinBox(widget1);
        sb6->setObjectName(QString::fromUtf8("sb6"));
        sb6->setMaximum(20);

        horizontalLayout_8->addWidget(sb6);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        HW7 = new QLabel(widget1);
        HW7->setObjectName(QString::fromUtf8("HW7"));

        horizontalLayout_9->addWidget(HW7);

        horizontalSlider_8 = new QSlider(widget1);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setMaximum(20);
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_8);

        sb7 = new QSpinBox(widget1);
        sb7->setObjectName(QString::fromUtf8("sb7"));
        sb7->setMaximum(20);

        horizontalLayout_9->addWidget(sb7);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        HW8 = new QLabel(widget1);
        HW8->setObjectName(QString::fromUtf8("HW8"));

        horizontalLayout_10->addWidget(HW8);

        horizontalSlider_9 = new QSlider(widget1);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setMaximum(20);
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_9);

        sb8 = new QSpinBox(widget1);
        sb8->setObjectName(QString::fromUtf8("sb8"));
        sb8->setMaximum(20);

        horizontalLayout_10->addWidget(sb8);


        verticalLayout_2->addLayout(horizontalLayout_10);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(430, 80, 341, 91));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSlider_10 = new QSlider(widget2);
        horizontalSlider_10->setObjectName(QString::fromUtf8("horizontalSlider_10"));
        horizontalSlider_10->setMaximum(100);
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider_10);

        sb9 = new QSpinBox(widget2);
        sb9->setObjectName(QString::fromUtf8("sb9"));
        sb9->setMaximum(100);

        horizontalLayout_11->addWidget(sb9);


        verticalLayout_3->addLayout(horizontalLayout_11);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(440, 480, 141, 61));
        verticalLayout_6 = new QVBoxLayout(widget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        verticalLayout_6->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_6->addWidget(radioButton_2);

        grade_calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(grade_calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        grade_calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(grade_calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        grade_calculator->setStatusBar(statusbar);

        retranslateUi(grade_calculator);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), sb1, SLOT(setValue(int)));
        QObject::connect(sb1, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), sb2, SLOT(setValue(int)));
        QObject::connect(sb2, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), sb3, SLOT(setValue(int)));
        QObject::connect(sb3, SIGNAL(valueChanged(int)), horizontalSlider_4, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), sb4, SLOT(setValue(int)));
        QObject::connect(sb4, SIGNAL(valueChanged(int)), horizontalSlider_5, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), sb5, SLOT(setValue(int)));
        QObject::connect(sb5, SIGNAL(valueChanged(int)), horizontalSlider_6, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), sb6, SLOT(setValue(int)));
        QObject::connect(sb6, SIGNAL(valueChanged(int)), horizontalSlider_7, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), sb7, SLOT(setValue(int)));
        QObject::connect(sb7, SIGNAL(valueChanged(int)), horizontalSlider_8, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_9, SIGNAL(valueChanged(int)), sb8, SLOT(setValue(int)));
        QObject::connect(sb8, SIGNAL(valueChanged(int)), horizontalSlider_9, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_10, SIGNAL(valueChanged(int)), sb9, SLOT(setValue(int)));
        QObject::connect(sb9, SIGNAL(valueChanged(int)), horizontalSlider_10, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_11, SIGNAL(valueChanged(int)), sb10, SLOT(setValue(int)));
        QObject::connect(sb10, SIGNAL(valueChanged(int)), horizontalSlider_11, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_12, SIGNAL(valueChanged(int)), sb11, SLOT(setValue(int)));
        QObject::connect(sb11, SIGNAL(valueChanged(int)), horizontalSlider_12, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(grade_calculator);
    } // setupUi

    void retranslateUi(QMainWindow *grade_calculator)
    {
        grade_calculator->setWindowTitle(QCoreApplication::translate("grade_calculator", "grade_calculator", nullptr));
        titleLabel->setText(QCoreApplication::translate("grade_calculator", "Grade Calculator", nullptr));
        label_3->setText(QCoreApplication::translate("grade_calculator", "Midterm 2", nullptr));
        label_4->setText(QCoreApplication::translate("grade_calculator", "Final", nullptr));
        gradeLabel->setText(QCoreApplication::translate("grade_calculator", "Overall Grade:", nullptr));
        overallGrade->setText(QCoreApplication::translate("grade_calculator", "0", nullptr));
        HW1->setText(QCoreApplication::translate("grade_calculator", "HW1", nullptr));
        HW2->setText(QCoreApplication::translate("grade_calculator", "HW2", nullptr));
        HW3->setText(QCoreApplication::translate("grade_calculator", "HW3", nullptr));
        HW4->setText(QCoreApplication::translate("grade_calculator", "HW4", nullptr));
        HW5->setText(QCoreApplication::translate("grade_calculator", "HW5", nullptr));
        HW6->setText(QCoreApplication::translate("grade_calculator", "HW6", nullptr));
        HW7->setText(QCoreApplication::translate("grade_calculator", "HW7", nullptr));
        HW8->setText(QCoreApplication::translate("grade_calculator", "HW8", nullptr));
        label->setText(QCoreApplication::translate("grade_calculator", "Midterm 1", nullptr));
        radioButton->setText(QCoreApplication::translate("grade_calculator", "Shema A", nullptr));
        radioButton_2->setText(QCoreApplication::translate("grade_calculator", "Schema B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grade_calculator: public Ui_grade_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADE_CALCULATOR_H
