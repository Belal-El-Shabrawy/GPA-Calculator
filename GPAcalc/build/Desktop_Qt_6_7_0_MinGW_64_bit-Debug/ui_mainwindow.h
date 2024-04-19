/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_8;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QSpinBox *spinBox_13;
    QSpinBox *spinBox_14;
    QSpinBox *spinBox_15;
    QSpinBox *spinBox_16;
    QSpinBox *spinBox_17;
    QSpinBox *spinBox_18;
    QPushButton *pushButton;
    QSpinBox *spinBox_19;
    QSpinBox *spinBox_20;
    QSpinBox *spinBox_21;
    QSpinBox *spinBox_22;
    QSpinBox *spinBox_23;
    QSpinBox *spinBox_24;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser_11;
    QTextBrowser *textBrowser_12;
    QTextBrowser *textBrowser_13;
    QTextBrowser *textBrowser_14;
    QTextBrowser *textBrowser_15;
    QTextBrowser *textBrowser_16;
    QTextBrowser *textBrowser_17;
    QTextBrowser *textBrowser_18;
    QTextBrowser *textBrowser_19;
    QTextBrowser *textBrowser_20;
    QTextBrowser *textBrowser_21;
    QTextBrowser *textBrowser_22;
    QTextBrowser *textBrowser_23;
    QTextBrowser *textBrowser_24;
    QTextBrowser *textBrowser_25;
    QTextBrowser *textBrowser_26;
    QTextBrowser *textBrowser_27;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(568, 432);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(360, 180, 141, 61));
        lcdNumber->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    background-color: #222222;\n"
"    color: #ffcc00;\n"
"    border: 2px solid #ffcc00;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QLCDNumber::segment {\n"
"    background-color: #ffcc00;\n"
"}\n"
"\n"
"QLCDNumber::segment:disabled {\n"
"    background-color: #333333;\n"
"}\n"
"\n"
"QLCDNumber::indicator {\n"
"    background-color: #ffcc00;\n"
"}\n"
"\n"
"QLCDNumber::indicator:disabled {\n"
"    background-color: #333333;\n"
"}"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(360, 120, 141, 61));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(70, 50, 35, 26));
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(70, 80, 35, 26));
        spinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(70, 110, 35, 26));
        spinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setGeometry(QRect(70, 140, 35, 26));
        spinBox_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_5 = new QSpinBox(centralwidget);
        spinBox_5->setObjectName("spinBox_5");
        spinBox_5->setGeometry(QRect(70, 170, 35, 26));
        spinBox_5->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_6 = new QSpinBox(centralwidget);
        spinBox_6->setObjectName("spinBox_6");
        spinBox_6->setGeometry(QRect(70, 200, 35, 26));
        spinBox_6->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_7 = new QSpinBox(centralwidget);
        spinBox_7->setObjectName("spinBox_7");
        spinBox_7->setGeometry(QRect(70, 230, 35, 26));
        spinBox_7->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_8 = new QSpinBox(centralwidget);
        spinBox_8->setObjectName("spinBox_8");
        spinBox_8->setGeometry(QRect(70, 260, 35, 26));
        spinBox_8->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_9 = new QSpinBox(centralwidget);
        spinBox_9->setObjectName("spinBox_9");
        spinBox_9->setGeometry(QRect(70, 290, 35, 26));
        spinBox_9->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_10 = new QSpinBox(centralwidget);
        spinBox_10->setObjectName("spinBox_10");
        spinBox_10->setGeometry(QRect(70, 320, 35, 26));
        spinBox_10->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_11 = new QSpinBox(centralwidget);
        spinBox_11->setObjectName("spinBox_11");
        spinBox_11->setGeometry(QRect(70, 350, 35, 26));
        spinBox_11->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_12 = new QSpinBox(centralwidget);
        spinBox_12->setObjectName("spinBox_12");
        spinBox_12->setGeometry(QRect(70, 380, 35, 26));
        spinBox_12->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_13 = new QSpinBox(centralwidget);
        spinBox_13->setObjectName("spinBox_13");
        spinBox_13->setGeometry(QRect(190, 50, 35, 26));
        spinBox_13->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_14 = new QSpinBox(centralwidget);
        spinBox_14->setObjectName("spinBox_14");
        spinBox_14->setGeometry(QRect(190, 80, 35, 26));
        spinBox_14->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_15 = new QSpinBox(centralwidget);
        spinBox_15->setObjectName("spinBox_15");
        spinBox_15->setGeometry(QRect(190, 110, 35, 26));
        spinBox_15->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_16 = new QSpinBox(centralwidget);
        spinBox_16->setObjectName("spinBox_16");
        spinBox_16->setGeometry(QRect(190, 140, 35, 26));
        spinBox_16->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_17 = new QSpinBox(centralwidget);
        spinBox_17->setObjectName("spinBox_17");
        spinBox_17->setGeometry(QRect(190, 170, 35, 26));
        spinBox_17->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_18 = new QSpinBox(centralwidget);
        spinBox_18->setObjectName("spinBox_18");
        spinBox_18->setGeometry(QRect(190, 200, 35, 26));
        spinBox_18->setButtonSymbols(QAbstractSpinBox::NoButtons);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 260, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        spinBox_19 = new QSpinBox(centralwidget);
        spinBox_19->setObjectName("spinBox_19");
        spinBox_19->setGeometry(QRect(190, 230, 35, 26));
        spinBox_19->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_20 = new QSpinBox(centralwidget);
        spinBox_20->setObjectName("spinBox_20");
        spinBox_20->setGeometry(QRect(190, 260, 35, 26));
        spinBox_20->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_21 = new QSpinBox(centralwidget);
        spinBox_21->setObjectName("spinBox_21");
        spinBox_21->setGeometry(QRect(190, 290, 35, 26));
        spinBox_21->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_22 = new QSpinBox(centralwidget);
        spinBox_22->setObjectName("spinBox_22");
        spinBox_22->setGeometry(QRect(190, 320, 35, 26));
        spinBox_22->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_23 = new QSpinBox(centralwidget);
        spinBox_23->setObjectName("spinBox_23");
        spinBox_23->setGeometry(QRect(190, 350, 35, 26));
        spinBox_23->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_24 = new QSpinBox(centralwidget);
        spinBox_24->setObjectName("spinBox_24");
        spinBox_24->setGeometry(QRect(190, 380, 35, 26));
        spinBox_24->setButtonSymbols(QAbstractSpinBox::NoButtons);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(30, 50, 26, 26));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(30, 110, 26, 26));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(30, 80, 26, 26));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(30, 200, 26, 26));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(30, 140, 26, 26));
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(30, 170, 26, 26));
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName("textBrowser_8");
        textBrowser_8->setGeometry(QRect(30, 230, 26, 26));
        textBrowser_9 = new QTextBrowser(centralwidget);
        textBrowser_9->setObjectName("textBrowser_9");
        textBrowser_9->setGeometry(QRect(30, 290, 26, 26));
        textBrowser_10 = new QTextBrowser(centralwidget);
        textBrowser_10->setObjectName("textBrowser_10");
        textBrowser_10->setGeometry(QRect(30, 350, 26, 26));
        textBrowser_11 = new QTextBrowser(centralwidget);
        textBrowser_11->setObjectName("textBrowser_11");
        textBrowser_11->setGeometry(QRect(30, 380, 26, 26));
        textBrowser_12 = new QTextBrowser(centralwidget);
        textBrowser_12->setObjectName("textBrowser_12");
        textBrowser_12->setGeometry(QRect(30, 320, 26, 26));
        textBrowser_13 = new QTextBrowser(centralwidget);
        textBrowser_13->setObjectName("textBrowser_13");
        textBrowser_13->setGeometry(QRect(30, 260, 26, 26));
        textBrowser_14 = new QTextBrowser(centralwidget);
        textBrowser_14->setObjectName("textBrowser_14");
        textBrowser_14->setGeometry(QRect(150, 380, 26, 26));
        textBrowser_15 = new QTextBrowser(centralwidget);
        textBrowser_15->setObjectName("textBrowser_15");
        textBrowser_15->setGeometry(QRect(150, 110, 26, 26));
        textBrowser_16 = new QTextBrowser(centralwidget);
        textBrowser_16->setObjectName("textBrowser_16");
        textBrowser_16->setGeometry(QRect(150, 50, 26, 26));
        textBrowser_17 = new QTextBrowser(centralwidget);
        textBrowser_17->setObjectName("textBrowser_17");
        textBrowser_17->setGeometry(QRect(150, 170, 26, 26));
        textBrowser_18 = new QTextBrowser(centralwidget);
        textBrowser_18->setObjectName("textBrowser_18");
        textBrowser_18->setGeometry(QRect(150, 290, 26, 26));
        textBrowser_19 = new QTextBrowser(centralwidget);
        textBrowser_19->setObjectName("textBrowser_19");
        textBrowser_19->setGeometry(QRect(150, 260, 26, 26));
        textBrowser_20 = new QTextBrowser(centralwidget);
        textBrowser_20->setObjectName("textBrowser_20");
        textBrowser_20->setGeometry(QRect(150, 230, 26, 26));
        textBrowser_21 = new QTextBrowser(centralwidget);
        textBrowser_21->setObjectName("textBrowser_21");
        textBrowser_21->setGeometry(QRect(150, 320, 26, 26));
        textBrowser_22 = new QTextBrowser(centralwidget);
        textBrowser_22->setObjectName("textBrowser_22");
        textBrowser_22->setGeometry(QRect(150, 200, 26, 26));
        textBrowser_23 = new QTextBrowser(centralwidget);
        textBrowser_23->setObjectName("textBrowser_23");
        textBrowser_23->setGeometry(QRect(150, 140, 26, 26));
        textBrowser_24 = new QTextBrowser(centralwidget);
        textBrowser_24->setObjectName("textBrowser_24");
        textBrowser_24->setGeometry(QRect(150, 350, 26, 26));
        textBrowser_25 = new QTextBrowser(centralwidget);
        textBrowser_25->setObjectName("textBrowser_25");
        textBrowser_25->setGeometry(QRect(150, 80, 26, 26));
        textBrowser_26 = new QTextBrowser(centralwidget);
        textBrowser_26->setObjectName("textBrowser_26");
        textBrowser_26->setGeometry(QRect(150, 10, 75, 31));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        textBrowser_26->setFont(font);
        textBrowser_27 = new QTextBrowser(centralwidget);
        textBrowser_27->setObjectName("textBrowser_27");
        textBrowser_27->setGeometry(QRect(30, 10, 75, 31));
        QFont font1;
        font1.setBold(true);
        textBrowser_27->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt;\">   GPA:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate GPA", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A+</p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A-</p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A</p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B-</p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B+</p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B</p></body></html>", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C+</p></body></html>", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C-</p></body></html>", nullptr));
        textBrowser_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D</p></body></html>", nullptr));
        textBrowser_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D-</p></body></html>", nullptr));
        textBrowser_12->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D+</p></body></html>", nullptr));
        textBrowser_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C</p></body></html>", nullptr));
        textBrowser_14->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D-</p></body></html>", nullptr));
        textBrowser_15->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A-</p></body></html>", nullptr));
        textBrowser_16->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A+</p></body></html>", nullptr));
        textBrowser_17->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B</p></body></html>", nullptr));
        textBrowser_18->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C-</p></body></html>", nullptr));
        textBrowser_19->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C</p></body></html>", nullptr));
        textBrowser_20->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C+</p></body></html>", nullptr));
        textBrowser_21->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D+</p></body></html>", nullptr));
        textBrowser_22->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B-</p></body></html>", nullptr));
        textBrowser_23->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B+</p></body></html>", nullptr));
        textBrowser_24->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D</p></body></html>", nullptr));
        textBrowser_25->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A</p></body></html>", nullptr));
        textBrowser_26->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">2 Hours</span></p></body></html>", nullptr));
        textBrowser_27->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">3 Hours</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
