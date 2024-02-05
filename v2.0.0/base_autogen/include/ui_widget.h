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
    QLabel *label;
    QLabel *label_2;
    QLineEdit *output;
    QLineEdit *input;
    QPushButton *copy_out;
    QComboBox *in_type;
    QLineEdit *output_upper;
    QComboBox *out_type;
    QPushButton *paste;
    QPushButton *copy_inp;
    QPushButton *copy_upper;
    QPushButton *change_button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(807, 160);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 651, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        output = new QLineEdit(gridLayoutWidget);
        output->setObjectName("output");
        output->setEnabled(false);

        gridLayout->addWidget(output, 1, 2, 1, 1);

        input = new QLineEdit(gridLayoutWidget);
        input->setObjectName("input");

        gridLayout->addWidget(input, 0, 2, 1, 1);

        copy_out = new QPushButton(gridLayoutWidget);
        copy_out->setObjectName("copy_out");

        gridLayout->addWidget(copy_out, 1, 3, 1, 2);

        in_type = new QComboBox(gridLayoutWidget);
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->addItem(QString());
        in_type->setObjectName("in_type");

        gridLayout->addWidget(in_type, 0, 1, 1, 1);

        output_upper = new QLineEdit(gridLayoutWidget);
        output_upper->setObjectName("output_upper");
        output_upper->setEnabled(false);

        gridLayout->addWidget(output_upper, 2, 2, 1, 1);

        out_type = new QComboBox(gridLayoutWidget);
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->addItem(QString());
        out_type->setObjectName("out_type");

        gridLayout->addWidget(out_type, 1, 1, 1, 1);

        paste = new QPushButton(gridLayoutWidget);
        paste->setObjectName("paste");

        gridLayout->addWidget(paste, 0, 3, 1, 1);

        copy_inp = new QPushButton(gridLayoutWidget);
        copy_inp->setObjectName("copy_inp");

        gridLayout->addWidget(copy_inp, 0, 4, 1, 1);

        copy_upper = new QPushButton(gridLayoutWidget);
        copy_upper->setObjectName("copy_upper");

        gridLayout->addWidget(copy_upper, 2, 3, 1, 2);

        change_button = new QPushButton(Widget);
        change_button->setObjectName("change_button");
        change_button->setGeometry(QRect(670, 40, 131, 71));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\273\223\346\236\234:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\244\247\345\206\231(16\350\277\233\345\210\266):", nullptr));
        copy_out->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266", nullptr));
        in_type->setItemText(0, QCoreApplication::translate("Widget", "2", nullptr));
        in_type->setItemText(1, QCoreApplication::translate("Widget", "8", nullptr));
        in_type->setItemText(2, QCoreApplication::translate("Widget", "10", nullptr));
        in_type->setItemText(3, QCoreApplication::translate("Widget", "16", nullptr));

        out_type->setItemText(0, QCoreApplication::translate("Widget", "2", nullptr));
        out_type->setItemText(1, QCoreApplication::translate("Widget", "8", nullptr));
        out_type->setItemText(2, QCoreApplication::translate("Widget", "10", nullptr));
        out_type->setItemText(3, QCoreApplication::translate("Widget", "16", nullptr));

        paste->setText(QCoreApplication::translate("Widget", "\347\262\230\350\264\264", nullptr));
        copy_inp->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266", nullptr));
        copy_upper->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266(16\350\277\233\345\210\266\345\244\247\345\206\231)", nullptr));
        change_button->setText(QCoreApplication::translate("Widget", "\350\275\254\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
