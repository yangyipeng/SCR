/********************************************************************************
** Form generated from reading UI file 'dialog_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SETTING_H
#define UI_DIALOG_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Setting
{
public:
    QGroupBox *groupBox_Data;
    QPushButton *pushButton_Femur_AP;
    QPushButton *pushButton_Femur_Lat;
    QPushButton *pushButton_Tibia_AP;
    QPushButton *pushButton_Tibia_Lat;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonUDP;
    QLineEdit *lineEdi_UDP;
    QLabel *label_port;
    QRadioButton *radioButton_TypeofNDI;
    QRadioButton *radioButton_TypeofTracker;
    QGroupBox *groupBox;
    QLabel *label_port_2;
    QLineEdit *lineEdi_NameFemur;
    QLineEdit *lineEdi_NameTibia;
    QLabel *label_port_3;
    QLabel *label_port_4;
    QLabel *label_port_5;
    QPushButton *pushButton_InitMarker;
    QLabel *label_port_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdi_NameRobot_1;
    QLineEdit *lineEdi_NameRobot_2;
    QLineEdit *lineEdi_NameRobot_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdi_NameXspot_1;
    QLineEdit *lineEdi_NameXspot_2;
    QLineEdit *lineEdi_NameXspot_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdi_NameTipTool_1;
    QLineEdit *lineEdi_NameTipTool_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label_Femur;
    QLabel *label_Tibia;
    QLabel *label_Xspot;
    QLabel *label_Tip;
    QLabel *label_Robot;

    void setupUi(QDialog *Dialog_Setting)
    {
        if (Dialog_Setting->objectName().isEmpty())
            Dialog_Setting->setObjectName(QStringLiteral("Dialog_Setting"));
        Dialog_Setting->resize(706, 558);
        Dialog_Setting->setStyleSheet(QLatin1String("#Dialog_Setting{border-image: url(:/images/bkg41.png);}\n"
"QPushButton{\n"
"    color: white;\n"
"	background-color: rgb(53, 63, 75);\n"
"}\n"
"QRadioButton{\n"
"    color: white;\n"
"}"));
        groupBox_Data = new QGroupBox(Dialog_Setting);
        groupBox_Data->setObjectName(QStringLiteral("groupBox_Data"));
        groupBox_Data->setGeometry(QRect(30, 170, 301, 131));
        pushButton_Femur_AP = new QPushButton(groupBox_Data);
        pushButton_Femur_AP->setObjectName(QStringLiteral("pushButton_Femur_AP"));
        pushButton_Femur_AP->setGeometry(QRect(10, 40, 89, 24));
        pushButton_Femur_Lat = new QPushButton(groupBox_Data);
        pushButton_Femur_Lat->setObjectName(QStringLiteral("pushButton_Femur_Lat"));
        pushButton_Femur_Lat->setGeometry(QRect(170, 40, 89, 24));
        pushButton_Tibia_AP = new QPushButton(groupBox_Data);
        pushButton_Tibia_AP->setObjectName(QStringLiteral("pushButton_Tibia_AP"));
        pushButton_Tibia_AP->setGeometry(QRect(10, 80, 89, 24));
        pushButton_Tibia_Lat = new QPushButton(groupBox_Data);
        pushButton_Tibia_Lat->setObjectName(QStringLiteral("pushButton_Tibia_Lat"));
        pushButton_Tibia_Lat->setGeometry(QRect(170, 80, 89, 24));
        groupBox_2 = new QGroupBox(Dialog_Setting);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 40, 301, 111));
        pushButtonUDP = new QPushButton(groupBox_2);
        pushButtonUDP->setObjectName(QStringLiteral("pushButtonUDP"));
        pushButtonUDP->setGeometry(QRect(220, 40, 61, 24));
        lineEdi_UDP = new QLineEdit(groupBox_2);
        lineEdi_UDP->setObjectName(QStringLiteral("lineEdi_UDP"));
        lineEdi_UDP->setGeometry(QRect(90, 40, 113, 25));
        label_port = new QLabel(groupBox_2);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setGeometry(QRect(20, 40, 72, 25));
        radioButton_TypeofNDI = new QRadioButton(groupBox_2);
        radioButton_TypeofNDI->setObjectName(QStringLiteral("radioButton_TypeofNDI"));
        radioButton_TypeofNDI->setGeometry(QRect(20, 80, 51, 21));
        radioButton_TypeofNDI->setChecked(true);
        radioButton_TypeofTracker = new QRadioButton(groupBox_2);
        radioButton_TypeofTracker->setObjectName(QStringLiteral("radioButton_TypeofTracker"));
        radioButton_TypeofTracker->setGeometry(QRect(90, 80, 117, 21));
        groupBox = new QGroupBox(Dialog_Setting);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(360, 40, 311, 371));
        label_port_2 = new QLabel(groupBox);
        label_port_2->setObjectName(QStringLiteral("label_port_2"));
        label_port_2->setGeometry(QRect(10, 30, 72, 25));
        lineEdi_NameFemur = new QLineEdit(groupBox);
        lineEdi_NameFemur->setObjectName(QStringLiteral("lineEdi_NameFemur"));
        lineEdi_NameFemur->setGeometry(QRect(80, 30, 181, 25));
        lineEdi_NameTibia = new QLineEdit(groupBox);
        lineEdi_NameTibia->setObjectName(QStringLiteral("lineEdi_NameTibia"));
        lineEdi_NameTibia->setGeometry(QRect(80, 60, 181, 25));
        label_port_3 = new QLabel(groupBox);
        label_port_3->setObjectName(QStringLiteral("label_port_3"));
        label_port_3->setGeometry(QRect(10, 60, 72, 25));
        label_port_4 = new QLabel(groupBox);
        label_port_4->setObjectName(QStringLiteral("label_port_4"));
        label_port_4->setGeometry(QRect(11, 91, 55, 16));
        label_port_5 = new QLabel(groupBox);
        label_port_5->setObjectName(QStringLiteral("label_port_5"));
        label_port_5->setGeometry(QRect(10, 180, 72, 25));
        pushButton_InitMarker = new QPushButton(groupBox);
        pushButton_InitMarker->setObjectName(QStringLiteral("pushButton_InitMarker"));
        pushButton_InitMarker->setGeometry(QRect(200, 330, 89, 24));
        label_port_6 = new QLabel(groupBox);
        label_port_6->setObjectName(QStringLiteral("label_port_6"));
        label_port_6->setGeometry(QRect(11, 240, 60, 16));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 240, 181, 85));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdi_NameRobot_1 = new QLineEdit(layoutWidget);
        lineEdi_NameRobot_1->setObjectName(QStringLiteral("lineEdi_NameRobot_1"));

        verticalLayout->addWidget(lineEdi_NameRobot_1);

        lineEdi_NameRobot_2 = new QLineEdit(layoutWidget);
        lineEdi_NameRobot_2->setObjectName(QStringLiteral("lineEdi_NameRobot_2"));

        verticalLayout->addWidget(lineEdi_NameRobot_2);

        lineEdi_NameRobot_3 = new QLineEdit(layoutWidget);
        lineEdi_NameRobot_3->setObjectName(QStringLiteral("lineEdi_NameRobot_3"));

        verticalLayout->addWidget(lineEdi_NameRobot_3);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 91, 181, 85));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdi_NameXspot_1 = new QLineEdit(layoutWidget1);
        lineEdi_NameXspot_1->setObjectName(QStringLiteral("lineEdi_NameXspot_1"));

        verticalLayout_2->addWidget(lineEdi_NameXspot_1);

        lineEdi_NameXspot_2 = new QLineEdit(layoutWidget1);
        lineEdi_NameXspot_2->setObjectName(QStringLiteral("lineEdi_NameXspot_2"));

        verticalLayout_2->addWidget(lineEdi_NameXspot_2);

        lineEdi_NameXspot_3 = new QLineEdit(layoutWidget1);
        lineEdi_NameXspot_3->setObjectName(QStringLiteral("lineEdi_NameXspot_3"));

        verticalLayout_2->addWidget(lineEdi_NameXspot_3);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 180, 181, 55));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdi_NameTipTool_1 = new QLineEdit(widget);
        lineEdi_NameTipTool_1->setObjectName(QStringLiteral("lineEdi_NameTipTool_1"));

        verticalLayout_3->addWidget(lineEdi_NameTipTool_1);

        lineEdi_NameTipTool_2 = new QLineEdit(widget);
        lineEdi_NameTipTool_2->setObjectName(QStringLiteral("lineEdi_NameTipTool_2"));

        verticalLayout_3->addWidget(lineEdi_NameTipTool_2);

        groupBox_3 = new QGroupBox(Dialog_Setting);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 410, 641, 121));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 601, 91));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_Femur = new QLabel(layoutWidget2);
        label_Femur->setObjectName(QStringLiteral("label_Femur"));
        label_Femur->setStyleSheet(QStringLiteral("border-image: url(:/Resources/resource/Femur_disable.png);"));

        gridLayout->addWidget(label_Femur, 0, 0, 1, 1);

        label_Tibia = new QLabel(layoutWidget2);
        label_Tibia->setObjectName(QStringLiteral("label_Tibia"));
        label_Tibia->setStyleSheet(QStringLiteral("border-image: url(:/Resources/resource/Tibia_disable.png);"));

        gridLayout->addWidget(label_Tibia, 0, 1, 1, 1);

        label_Xspot = new QLabel(layoutWidget2);
        label_Xspot->setObjectName(QStringLiteral("label_Xspot"));
        label_Xspot->setStyleSheet(QStringLiteral("border-image: url(:/Resources/XSpot_disable.png);"));

        gridLayout->addWidget(label_Xspot, 0, 2, 1, 1);

        label_Tip = new QLabel(layoutWidget2);
        label_Tip->setObjectName(QStringLiteral("label_Tip"));
        label_Tip->setStyleSheet(QStringLiteral("border-image: url(:/Resources/tip_disable.png);"));

        gridLayout->addWidget(label_Tip, 0, 3, 1, 1);

        label_Robot = new QLabel(layoutWidget2);
        label_Robot->setObjectName(QStringLiteral("label_Robot"));
        label_Robot->setStyleSheet(QStringLiteral("border-image: url(:/Resources/ur_robot_disable.png);"));

        gridLayout->addWidget(label_Robot, 0, 4, 1, 1);


        retranslateUi(Dialog_Setting);

        QMetaObject::connectSlotsByName(Dialog_Setting);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Setting)
    {
        Dialog_Setting->setWindowTitle(QApplication::translate("Dialog_Setting", "Dialog", 0));
        groupBox_Data->setTitle(QApplication::translate("Dialog_Setting", "\350\257\273\345\217\226\350\247\204\345\210\222\346\225\260\346\215\256", 0));
        pushButton_Femur_AP->setText(QApplication::translate("Dialog_Setting", "\350\202\241\351\252\250\346\255\243\344\275\215", 0));
        pushButton_Femur_Lat->setText(QApplication::translate("Dialog_Setting", "\350\202\241\351\252\250\344\276\247\344\275\215", 0));
        pushButton_Tibia_AP->setText(QApplication::translate("Dialog_Setting", "\350\203\253\351\252\250\346\255\243\344\275\215", 0));
        pushButton_Tibia_Lat->setText(QApplication::translate("Dialog_Setting", "\350\203\253\351\252\250\344\276\247\344\275\215", 0));
        groupBox_2->setTitle(QApplication::translate("Dialog_Setting", "UDP\350\277\236\346\216\245", 0));
        pushButtonUDP->setText(QApplication::translate("Dialog_Setting", "\347\241\256\345\256\232", 0));
        lineEdi_UDP->setText(QApplication::translate("Dialog_Setting", "5555", 0));
        label_port->setText(QApplication::translate("Dialog_Setting", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        radioButton_TypeofNDI->setText(QApplication::translate("Dialog_Setting", "NDI", 0));
        radioButton_TypeofTracker->setText(QApplication::translate("Dialog_Setting", "Tracker", 0));
        groupBox->setTitle(QApplication::translate("Dialog_Setting", "\345\210\235\345\247\213\345\214\226Marker\345\220\215\347\247\260", 0));
        label_port_2->setText(QApplication::translate("Dialog_Setting", "\350\202\241\351\252\250\357\274\232", 0));
        lineEdi_NameFemur->setText(QApplication::translate("Dialog_Setting", "TTBLOCK0714", 0));
        lineEdi_NameTibia->setText(QApplication::translate("Dialog_Setting", "Marker_UR_new", 0));
        label_port_3->setText(QApplication::translate("Dialog_Setting", "\350\203\253\351\252\250\357\274\232", 0));
        label_port_4->setText(QApplication::translate("Dialog_Setting", "Xspot\357\274\232", 0));
        label_port_5->setText(QApplication::translate("Dialog_Setting", "\346\216\242\351\222\210\357\274\232", 0));
        pushButton_InitMarker->setText(QApplication::translate("Dialog_Setting", "\350\256\276\347\275\256", 0));
        label_port_6->setText(QApplication::translate("Dialog_Setting", "\346\234\272\345\231\250\344\272\272\357\274\232", 0));
        lineEdi_NameRobot_1->setText(QApplication::translate("Dialog_Setting", "Marker_Robot", 0));
        lineEdi_NameRobot_2->setText(QApplication::translate("Dialog_Setting", "Marker_Robot", 0));
        lineEdi_NameRobot_3->setText(QApplication::translate("Dialog_Setting", "Marker_Robot", 0));
        lineEdi_NameXspot_1->setText(QApplication::translate("Dialog_Setting", "XSPOT1", 0));
        lineEdi_NameXspot_2->setText(QApplication::translate("Dialog_Setting", "XSPOT1", 0));
        lineEdi_NameXspot_3->setText(QApplication::translate("Dialog_Setting", "XSPOT1", 0));
        lineEdi_NameTipTool_1->setText(QApplication::translate("Dialog_Setting", "MARKERTIP1", 0));
        lineEdi_NameTipTool_2->setText(QApplication::translate("Dialog_Setting", "MARKERTIP2", 0));
        groupBox_3->setTitle(QApplication::translate("Dialog_Setting", "NDI", 0));
        label_Femur->setText(QString());
        label_Tibia->setText(QString());
        label_Xspot->setText(QString());
        label_Tip->setText(QString());
        label_Robot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_Setting: public Ui_Dialog_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SETTING_H
