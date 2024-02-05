/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *out_type;
    QComboBox *in_type;
    QLineEdit *output;
    QLineEdit *input;
    QLineEdit *output_upper;
    QLabel *label_2;
    QLabel *label;
    QPushButton *change_button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(623, 148);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 0, 421, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        out_type = new QComboBox(gridLayoutWidget);
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->setObjectName("out_type");

        gridLayout->addWidget(out_type, 1, 0, 1, 1);

        in_type = new QComboBox(gridLayoutWidget);
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->setObjectName("in_type");

        gridLayout->addWidget(in_type, 0, 0, 1, 1);

        output = new QLineEdit(gridLayoutWidget);
        output->setObjectName("output");
        output->setEnabled(false);

        gridLayout->addWidget(output, 1, 1, 1, 1);

        input = new QLineEdit(gridLayoutWidget);
        input->setObjectName("input");

        gridLayout->addWidget(input, 0, 1, 1, 1);

        output_upper = new QLineEdit(gridLayoutWidget);
        output_upper->setObjectName("output_upper");
        output_upper->setEnabled(false);

        gridLayout->addWidget(output_upper, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 51, 31));
        change_button = new QPushButton(Widget);
        change_button->setObjectName("change_button");
        change_button->setGeometry(QRect(500, 30, 111, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        out_type->setItemText(0, QCoreApplication::translate("Widget", "2", nullptr));
        out_type->setItemText(1, QCoreApplication::translate("Widget", "8", nullptr));
        out_type->setItemText(2, QCoreApplication::translate("Widget", "10", nullptr));
        out_type->setItemText(3, QCoreApplication::translate("Widget", "16", nullptr));

        in_type->setItemText(0, QCoreApplication::translate("Widget", "2", nullptr));
        in_type->setItemText(1, QCoreApplication::translate("Widget", "8", nullptr));
        in_type->setItemText(2, QCoreApplication::translate("Widget", "10", nullptr));
        in_type->setItemText(3, QCoreApplication::translate("Widget", "16", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\345\244\247\345\206\231(16\350\277\233\345\210\266):", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\273\223\346\236\234:", nullptr));
        change_button->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
