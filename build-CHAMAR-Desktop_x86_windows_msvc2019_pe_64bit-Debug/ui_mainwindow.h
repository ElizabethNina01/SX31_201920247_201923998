/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *lblLcorreo;
    QLineEdit *tbxLcorreo;
    QLabel *lblLcont;
    QLineEdit *tbxLcont;
    QPushButton *btnLngresar;
    QPushButton *btnLNuevacuenta;
    QWidget *page_2;
    QLabel *lblRNombre;
    QLineEdit *tbxRNombre;
    QLabel *lblRCorreo;
    QLineEdit *tbxRCorreo;
    QLabel *lblRConstra;
    QLineEdit *tbxRContra;
    QLabel *lblRFecha;
    QPushButton *btnRCargarImg;
    QSpinBox *boxRDia;
    QSpinBox *boxRMes;
    QSpinBox *boxRA;
    QPushButton *btnRRegistrarse;
    QLabel *label;
    QWidget *page_3;
    QListWidget *listSeguidos;
    QPushButton *btnExplorar;
    QLabel *lblSeguidos;
    QLabel *lblNombrePerfil;
    QLabel *lblEmail;
    QLineEdit *tbxEmailPerfil;
    QLineEdit *tbxFechaCrea;
    QLabel *lblFechaCrea;
    QLabel *lblNumSeguid;
    QLineEdit *tbxNumSegui;
    QLabel *lblNumPosts;
    QLineEdit *tbxNumPosts;
    QTextEdit *textEdit;
    QPushButton *btnCerrar;
    QPushButton *btnImgPubl;
    QLabel *lblFotoperfil;
    QPushButton *btnPublicar;
    QComboBox *CboxOrden;
    QLabel *lblOrden;
    QListWidget *listSeguidores;
    QLabel *lblSeguidores;
    QLabel *lblOrden_2;
    QComboBox *CboxOrden_2;
    QPushButton *refresh;
    QListWidget *listPubli;
    QComboBox *cboxordenpub;
    QLineEdit *leditp;
    QPushButton *btnGO;
    QWidget *page_4;
    QLabel *lblamixPhoto;
    QPushButton *btnMiPerfil;
    QLabel *lblAmixNombre;
    QListWidget *amixSeguidos;
    QListWidget *AmixSeguidores;
    QScrollArea *AmixScrool;
    QWidget *scrollAreaWidgetContents_2;
    QTextEdit *textEditMensajes;
    QLineEdit *lineEditSms;
    QPushButton *btnEnviarSms;
    QLabel *lblSeguidos_2;
    QLabel *lblSeguidores_2;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1390, 741);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(84, 84, 84);\n"
"border-bottom-color: rgb(29, 29, 29);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -10, 1381, 691));
        QPalette palette;
        QBrush brush(QColor(84, 84, 84, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        stackedWidget->setPalette(palette);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        lblLcorreo = new QLabel(page);
        lblLcorreo->setObjectName(QStringLiteral("lblLcorreo"));
        lblLcorreo->setGeometry(QRect(440, 180, 331, 51));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(7);
        lblLcorreo->setFont(font);
        lblLcorreo->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        tbxLcorreo = new QLineEdit(page);
        tbxLcorreo->setObjectName(QStringLiteral("tbxLcorreo"));
        tbxLcorreo->setGeometry(QRect(440, 240, 421, 41));
        tbxLcorreo->setStyleSheet(QLatin1String("font: 63 20pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        lblLcont = new QLabel(page);
        lblLcont->setObjectName(QStringLiteral("lblLcont"));
        lblLcont->setGeometry(QRect(440, 310, 231, 51));
        lblLcont->setFont(font);
        lblLcont->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        tbxLcont = new QLineEdit(page);
        tbxLcont->setObjectName(QStringLiteral("tbxLcont"));
        tbxLcont->setGeometry(QRect(440, 360, 421, 41));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(56, 56, 56, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(61, 60, 60, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        tbxLcont->setPalette(palette1);
        tbxLcont->setStyleSheet(QLatin1String("font: 63 20pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        btnLngresar = new QPushButton(page);
        btnLngresar->setObjectName(QStringLiteral("btnLngresar"));
        btnLngresar->setGeometry(QRect(560, 440, 201, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush7(QColor(54, 55, 56, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        btnLngresar->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(7);
        btnLngresar->setFont(font1);
        btnLngresar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        btnLNuevacuenta = new QPushButton(page);
        btnLNuevacuenta->setObjectName(QStringLiteral("btnLNuevacuenta"));
        btnLNuevacuenta->setGeometry(QRect(520, 540, 291, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        btnLNuevacuenta->setPalette(palette3);
        btnLNuevacuenta->setFont(font1);
        btnLNuevacuenta->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        lblRNombre = new QLabel(page_2);
        lblRNombre->setObjectName(QStringLiteral("lblRNombre"));
        lblRNombre->setGeometry(QRect(180, 10, 271, 67));
        lblRNombre->setFont(font);
        lblRNombre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        tbxRNombre = new QLineEdit(page_2);
        tbxRNombre->setObjectName(QStringLiteral("tbxRNombre"));
        tbxRNombre->setGeometry(QRect(180, 80, 441, 41));
        tbxRNombre->setFont(font);
        tbxRNombre->setStyleSheet(QLatin1String("font: 63 20pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        lblRCorreo = new QLabel(page_2);
        lblRCorreo->setObjectName(QStringLiteral("lblRCorreo"));
        lblRCorreo->setGeometry(QRect(180, 130, 341, 67));
        lblRCorreo->setFont(font);
        lblRCorreo->setLayoutDirection(Qt::LeftToRight);
        lblRCorreo->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        tbxRCorreo = new QLineEdit(page_2);
        tbxRCorreo->setObjectName(QStringLiteral("tbxRCorreo"));
        tbxRCorreo->setGeometry(QRect(180, 190, 441, 41));
        tbxRCorreo->setFont(font);
        tbxRCorreo->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";\n"
"border-color: rgb(56, 56, 56);"));
        lblRConstra = new QLabel(page_2);
        lblRConstra->setObjectName(QStringLiteral("lblRConstra"));
        lblRConstra->setGeometry(QRect(180, 250, 331, 67));
        lblRConstra->setFont(font);
        lblRConstra->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        tbxRContra = new QLineEdit(page_2);
        tbxRContra->setObjectName(QStringLiteral("tbxRContra"));
        tbxRContra->setGeometry(QRect(180, 310, 441, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(7);
        tbxRContra->setFont(font2);
        tbxRContra->setStyleSheet(QLatin1String("background-color: rgb(56, 56, 56);\n"
"border-bottom-color: rgb(56, 56, 56);\n"
"border-left-color: rgb(56, 56, 56);\n"
"gridline-color: rgb(54, 54, 54);\n"
"selection-color: rgb(56, 56, 56);\n"
"selection-background-color: rgb(56, 56, 56);\n"
"border-right-color: rgb(56, 56, 56);\n"
"alternate-background-color: rgb(56, 56, 56);\n"
"gridline-color: rgb(56, 56, 56);\n"
"border-top-color: rgb(56, 56, 56);\n"
"gridline-color: rgb(56, 56, 56);\n"
"selection-color: rgb(255, 255, 255);\n"
"border-color: rgb(56, 56, 56);\n"
"font: 63 9pt \"Bahnschrift SemiBold\";"));
        lblRFecha = new QLabel(page_2);
        lblRFecha->setObjectName(QStringLiteral("lblRFecha"));
        lblRFecha->setGeometry(QRect(180, 390, 371, 67));
        lblRFecha->setFont(font);
        lblRFecha->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 20pt \"Bahnschrift SemiBold\";"));
        btnRCargarImg = new QPushButton(page_2);
        btnRCargarImg->setObjectName(QStringLiteral("btnRCargarImg"));
        btnRCargarImg->setGeometry(QRect(840, 320, 201, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush14(QColor(255, 255, 255, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush16(QColor(255, 255, 255, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        btnRCargarImg->setPalette(palette4);
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(7);
        btnRCargarImg->setFont(font3);
        btnRCargarImg->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);\n"
"font: 63 12pt \"Bahnschrift SemiBold\";"));
        boxRDia = new QSpinBox(page_2);
        boxRDia->setObjectName(QStringLiteral("boxRDia"));
        boxRDia->setGeometry(QRect(580, 400, 81, 51));
        QFont font4;
        font4.setPointSize(12);
        boxRDia->setFont(font4);
        boxRDia->setStyleSheet(QLatin1String("background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        boxRDia->setMinimum(1);
        boxRDia->setMaximum(31);
        boxRMes = new QSpinBox(page_2);
        boxRMes->setObjectName(QStringLiteral("boxRMes"));
        boxRMes->setGeometry(QRect(680, 400, 81, 51));
        boxRMes->setFont(font4);
        boxRMes->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));
        boxRMes->setMinimum(1);
        boxRMes->setMaximum(12);
        boxRA = new QSpinBox(page_2);
        boxRA->setObjectName(QStringLiteral("boxRA"));
        boxRA->setGeometry(QRect(790, 400, 81, 51));
        boxRA->setFont(font4);
        boxRA->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));
        boxRA->setMinimum(1925);
        boxRA->setMaximum(2007);
        btnRRegistrarse = new QPushButton(page_2);
        btnRRegistrarse->setObjectName(QStringLiteral("btnRRegistrarse"));
        btnRRegistrarse->setGeometry(QRect(490, 550, 301, 71));
        QPalette palette5;
        QBrush brush17(QColor(222, 222, 222, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush17);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush18(QColor(36, 36, 36, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush18);
        QBrush brush19(QColor(222, 222, 222, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush18);
        QBrush brush20(QColor(222, 222, 222, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush18);
        QBrush brush21(QColor(222, 222, 222, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        btnRRegistrarse->setPalette(palette5);
        QFont font5;
        font5.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font5.setPointSize(28);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(7);
        btnRRegistrarse->setFont(font5);
        btnRRegistrarse->setStyleSheet(QLatin1String("background-color: rgb(56, 56, 56);\n"
"color: rgb(222, 222, 222);\n"
"font: 63 28pt \"Bahnschrift SemiBold\";\n"
"selection-color: rgb(36, 36, 36);\n"
"gridline-color: rgb(56, 56, 56);\n"
"border-color: rgb(255, 114, 133);"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 40, 281, 241));
        label->setSizeIncrement(QSize(100, 50));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        listSeguidos = new QListWidget(page_3);
        listSeguidos->setObjectName(QStringLiteral("listSeguidos"));
        listSeguidos->setGeometry(QRect(1000, 100, 351, 201));
        listSeguidos->setStyleSheet(QLatin1String("background-color: rgb(84, 84, 84);\n"
"color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"border-color: rgb(255, 255, 255);"));
        btnExplorar = new QPushButton(page_3);
        btnExplorar->setObjectName(QStringLiteral("btnExplorar"));
        btnExplorar->setGeometry(QRect(1070, 630, 191, 51));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush22(QColor(255, 255, 255, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush23(QColor(255, 255, 255, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush24(QColor(255, 255, 255, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
        btnExplorar->setPalette(palette6);
        btnExplorar->setFont(font1);
        btnExplorar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        lblSeguidos = new QLabel(page_3);
        lblSeguidos->setObjectName(QStringLiteral("lblSeguidos"));
        lblSeguidos->setGeometry(QRect(1080, 0, 181, 61));
        lblSeguidos->setFont(font1);
        lblSeguidos->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";"));
        lblNombrePerfil = new QLabel(page_3);
        lblNombrePerfil->setObjectName(QStringLiteral("lblNombrePerfil"));
        lblNombrePerfil->setGeometry(QRect(10, 270, 251, 61));
        QFont font6;
        font6.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(7);
        lblNombrePerfil->setFont(font6);
        lblNombrePerfil->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 18pt \"Bahnschrift SemiBold\";"));
        lblNombrePerfil->setAlignment(Qt::AlignCenter);
        lblEmail = new QLabel(page_3);
        lblEmail->setObjectName(QStringLiteral("lblEmail"));
        lblEmail->setGeometry(QRect(10, 340, 231, 31));
        lblEmail->setFont(font6);
        lblEmail->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 18pt \"Bahnschrift SemiBold\";"));
        lblEmail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tbxEmailPerfil = new QLineEdit(page_3);
        tbxEmailPerfil->setObjectName(QStringLiteral("tbxEmailPerfil"));
        tbxEmailPerfil->setGeometry(QRect(10, 380, 251, 31));
        QFont font7;
        font7.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font7.setPointSize(14);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(7);
        tbxEmailPerfil->setFont(font7);
        tbxEmailPerfil->setStyleSheet(QLatin1String("font: 63 14pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        tbxFechaCrea = new QLineEdit(page_3);
        tbxFechaCrea->setObjectName(QStringLiteral("tbxFechaCrea"));
        tbxFechaCrea->setGeometry(QRect(10, 470, 251, 31));
        tbxFechaCrea->setFont(font7);
        tbxFechaCrea->setStyleSheet(QLatin1String("font: 63 14pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        lblFechaCrea = new QLabel(page_3);
        lblFechaCrea->setObjectName(QStringLiteral("lblFechaCrea"));
        lblFechaCrea->setGeometry(QRect(10, 430, 231, 31));
        lblFechaCrea->setFont(font6);
        lblFechaCrea->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 18pt \"Bahnschrift SemiBold\";"));
        lblFechaCrea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblNumSeguid = new QLabel(page_3);
        lblNumSeguid->setObjectName(QStringLiteral("lblNumSeguid"));
        lblNumSeguid->setGeometry(QRect(10, 530, 161, 31));
        lblNumSeguid->setFont(font6);
        lblNumSeguid->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 18pt \"Bahnschrift SemiBold\";"));
        lblNumSeguid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tbxNumSegui = new QLineEdit(page_3);
        tbxNumSegui->setObjectName(QStringLiteral("tbxNumSegui"));
        tbxNumSegui->setGeometry(QRect(180, 530, 81, 31));
        tbxNumSegui->setFont(font7);
        tbxNumSegui->setStyleSheet(QLatin1String("font: 63 14pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        lblNumPosts = new QLabel(page_3);
        lblNumPosts->setObjectName(QStringLiteral("lblNumPosts"));
        lblNumPosts->setGeometry(QRect(10, 590, 101, 31));
        lblNumPosts->setFont(font6);
        lblNumPosts->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 18pt \"Bahnschrift SemiBold\";"));
        lblNumPosts->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tbxNumPosts = new QLineEdit(page_3);
        tbxNumPosts->setObjectName(QStringLiteral("tbxNumPosts"));
        tbxNumPosts->setGeometry(QRect(110, 590, 151, 31));
        tbxNumPosts->setFont(font7);
        tbxNumPosts->setStyleSheet(QLatin1String("font: 63 14pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(56, 56, 56);\n"
"color: rgb(255, 255, 255);"));
        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(280, 60, 541, 51));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(54, 55, 56);\n"
"color: rgb(255, 255, 255);\n"
"font: 63 11pt \"Bahnschrift SemiBold\";"));
        btnCerrar = new QPushButton(page_3);
        btnCerrar->setObjectName(QStringLiteral("btnCerrar"));
        btnCerrar->setGeometry(QRect(10, 10, 141, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush25(QColor(255, 255, 255, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush26(QColor(255, 255, 255, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush27(QColor(255, 255, 255, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        btnCerrar->setPalette(palette7);
        QFont font8;
        font8.setFamily(QStringLiteral("Bahnschrift SemiBold"));
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(7);
        btnCerrar->setFont(font8);
        btnCerrar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        btnImgPubl = new QPushButton(page_3);
        btnImgPubl->setObjectName(QStringLiteral("btnImgPubl"));
        btnImgPubl->setGeometry(QRect(820, 60, 61, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush28(QColor(255, 255, 255, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush28);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush29(QColor(255, 255, 255, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush29);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush30(QColor(255, 255, 255, 128));
        brush30.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush30);
#endif
        btnImgPubl->setPalette(palette8);
        btnImgPubl->setFont(font8);
        btnImgPubl->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image: url(:/Nueva carpeta/camara.png);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        btnImgPubl->setFlat(true);
        lblFotoperfil = new QLabel(page_3);
        lblFotoperfil->setObjectName(QStringLiteral("lblFotoperfil"));
        lblFotoperfil->setGeometry(QRect(40, 90, 191, 171));
        lblFotoperfil->setPixmap(QPixmap(QString::fromUtf8(":/Nueva carpeta/userdesc.jpg")));
        btnPublicar = new QPushButton(page_3);
        btnPublicar->setObjectName(QStringLiteral("btnPublicar"));
        btnPublicar->setGeometry(QRect(880, 60, 101, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush7);
        QBrush brush31(QColor(255, 255, 255, 128));
        brush31.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        QBrush brush32(QColor(255, 255, 255, 128));
        brush32.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush32);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush33(QColor(255, 255, 255, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush33);
#endif
        btnPublicar->setPalette(palette9);
        btnPublicar->setFont(font8);
        btnPublicar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        CboxOrden = new QComboBox(page_3);
        CboxOrden->setObjectName(QStringLiteral("CboxOrden"));
        CboxOrden->setGeometry(QRect(1120, 60, 111, 31));
        CboxOrden->setStyleSheet(QLatin1String("font: 63 9pt \"Bahnschrift SemiBold\";\n"
"color: rgb(197, 197, 197);"));
        lblOrden = new QLabel(page_3);
        lblOrden->setObjectName(QStringLiteral("lblOrden"));
        lblOrden->setGeometry(QRect(1010, 60, 101, 31));
        lblOrden->setStyleSheet(QStringLiteral("font: 63 10pt \"Bahnschrift SemiBold\";"));
        listSeguidores = new QListWidget(page_3);
        listSeguidores->setObjectName(QStringLiteral("listSeguidores"));
        listSeguidores->setGeometry(QRect(1000, 410, 351, 201));
        listSeguidores->setStyleSheet(QLatin1String("background-color: rgb(84, 84, 84);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        lblSeguidores = new QLabel(page_3);
        lblSeguidores->setObjectName(QStringLiteral("lblSeguidores"));
        lblSeguidores->setGeometry(QRect(1070, 310, 211, 61));
        lblSeguidores->setFont(font1);
        lblSeguidores->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";"));
        lblOrden_2 = new QLabel(page_3);
        lblOrden_2->setObjectName(QStringLiteral("lblOrden_2"));
        lblOrden_2->setGeometry(QRect(1010, 370, 111, 31));
        lblOrden_2->setStyleSheet(QStringLiteral("font: 63 10pt \"Bahnschrift SemiBold\";"));
        CboxOrden_2 = new QComboBox(page_3);
        CboxOrden_2->setObjectName(QStringLiteral("CboxOrden_2"));
        CboxOrden_2->setGeometry(QRect(1120, 370, 111, 31));
        CboxOrden_2->setStyleSheet(QLatin1String("color: rgb(207, 207, 207);\n"
"font: 63 9pt \"Bahnschrift SemiBold\";"));
        refresh = new QPushButton(page_3);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(840, 10, 80, 25));
        listPubli = new QListWidget(page_3);
        listPubli->setObjectName(QStringLiteral("listPubli"));
        listPubli->setGeometry(QRect(280, 170, 721, 511));
        cboxordenpub = new QComboBox(page_3);
        cboxordenpub->setObjectName(QStringLiteral("cboxordenpub"));
        cboxordenpub->setGeometry(QRect(280, 133, 161, 31));
        leditp = new QLineEdit(page_3);
        leditp->setObjectName(QStringLiteral("leditp"));
        leditp->setGeometry(QRect(450, 130, 171, 31));
        btnGO = new QPushButton(page_3);
        btnGO->setObjectName(QStringLiteral("btnGO"));
        btnGO->setGeometry(QRect(630, 130, 91, 31));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        lblamixPhoto = new QLabel(page_4);
        lblamixPhoto->setObjectName(QStringLiteral("lblamixPhoto"));
        lblamixPhoto->setGeometry(QRect(250, 20, 191, 171));
        btnMiPerfil = new QPushButton(page_4);
        btnMiPerfil->setObjectName(QStringLiteral("btnMiPerfil"));
        btnMiPerfil->setGeometry(QRect(10, 20, 81, 71));
        btnMiPerfil->setFlat(true);
        lblAmixNombre = new QLabel(page_4);
        lblAmixNombre->setObjectName(QStringLiteral("lblAmixNombre"));
        lblAmixNombre->setGeometry(QRect(160, 200, 381, 41));
        lblAmixNombre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 21pt \"Bahnschrift SemiBold\";"));
        lblAmixNombre->setAlignment(Qt::AlignCenter);
        amixSeguidos = new QListWidget(page_4);
        amixSeguidos->setObjectName(QStringLiteral("amixSeguidos"));
        amixSeguidos->setGeometry(QRect(700, 110, 331, 251));
        amixSeguidos->setStyleSheet(QLatin1String("background-color: rgb(84, 84, 84);\n"
"color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"border-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        AmixSeguidores = new QListWidget(page_4);
        AmixSeguidores->setObjectName(QStringLiteral("AmixSeguidores"));
        AmixSeguidores->setGeometry(QRect(700, 440, 331, 241));
        AmixSeguidores->setStyleSheet(QLatin1String("background-color: rgb(84, 84, 84);\n"
"color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"border-color: rgb(255, 255, 255);"));
        AmixScrool = new QScrollArea(page_4);
        AmixScrool->setObjectName(QStringLiteral("AmixScrool"));
        AmixScrool->setGeometry(QRect(10, 260, 671, 421));
        AmixScrool->setStyleSheet(QLatin1String("background-color: rgb(117, 117, 117);\n"
"font: 63 12pt \"Bahnschrift SemiBold\";\n"
"color: rgb(255, 255, 255);"));
        AmixScrool->setWidgetResizable(true);
        AmixScrool->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 669, 419));
        AmixScrool->setWidget(scrollAreaWidgetContents_2);
        textEditMensajes = new QTextEdit(page_4);
        textEditMensajes->setObjectName(QStringLiteral("textEditMensajes"));
        textEditMensajes->setGeometry(QRect(1050, 40, 311, 591));
        textEditMensajes->setStyleSheet(QLatin1String("background-color: rgb(190, 190, 190);\n"
"color: rgb(0, 0, 0);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"border-color: rgb(255, 255, 255);"));
        lineEditSms = new QLineEdit(page_4);
        lineEditSms->setObjectName(QStringLiteral("lineEditSms"));
        lineEditSms->setGeometry(QRect(1050, 630, 221, 51));
        lineEditSms->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btnEnviarSms = new QPushButton(page_4);
        btnEnviarSms->setObjectName(QStringLiteral("btnEnviarSms"));
        btnEnviarSms->setGeometry(QRect(1270, 630, 91, 51));
        btnEnviarSms->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 10pt \"Bahnschrift SemiBold\";\n"
"background-color: rgb(54, 55, 56);"));
        lblSeguidos_2 = new QLabel(page_4);
        lblSeguidos_2->setObjectName(QStringLiteral("lblSeguidos_2"));
        lblSeguidos_2->setGeometry(QRect(780, 40, 181, 61));
        lblSeguidos_2->setFont(font1);
        lblSeguidos_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";"));
        lblSeguidores_2 = new QLabel(page_4);
        lblSeguidores_2->setObjectName(QStringLiteral("lblSeguidores_2"));
        lblSeguidores_2->setGeometry(QRect(770, 370, 211, 61));
        lblSeguidores_2->setFont(font1);
        lblSeguidores_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Bahnschrift SemiBold\";"));
        checkBox = new QCheckBox(page_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(550, 200, 111, 41));
        checkBox->setStyleSheet(QLatin1String("font: 63 18pt \"Bahnschrift SemiBold\";\n"
"color: rgb(255, 255, 255);"));
        checkBox->setIconSize(QSize(100, 100));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1390, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lblLcorreo->setText(QApplication::translate("MainWindow", "Correo electr\303\263nico:", Q_NULLPTR));
        tbxLcorreo->setText(QApplication::translate("MainWindow", "nhut@hotmail", Q_NULLPTR));
        lblLcont->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", Q_NULLPTR));
        btnLngresar->setText(QApplication::translate("MainWindow", "Ingresar", Q_NULLPTR));
        btnLNuevacuenta->setText(QApplication::translate("MainWindow", "Nueva cuenta", Q_NULLPTR));
        lblRNombre->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        lblRCorreo->setText(QApplication::translate("MainWindow", "Correo Electr\303\263nico:", Q_NULLPTR));
        lblRConstra->setText(QApplication::translate("MainWindow", "Contrase\303\261a nueva:", Q_NULLPTR));
        lblRFecha->setText(QApplication::translate("MainWindow", "Fecha de nacimiento:", Q_NULLPTR));
        btnRCargarImg->setText(QApplication::translate("MainWindow", "Cargar foto de perfil", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        btnRRegistrarse->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#d0d0d0;\">Registrarse</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        btnRRegistrarse->setText(QApplication::translate("MainWindow", "Registrarse", Q_NULLPTR));
        label->setText(QString());
        btnExplorar->setText(QApplication::translate("MainWindow", "Explorar", Q_NULLPTR));
        lblSeguidos->setText(QApplication::translate("MainWindow", "Seguidos", Q_NULLPTR));
        lblNombrePerfil->setText(QApplication::translate("MainWindow", "Nombre", Q_NULLPTR));
        lblEmail->setText(QApplication::translate("MainWindow", "Email:", Q_NULLPTR));
        lblFechaCrea->setText(QApplication::translate("MainWindow", "Se uni\303\263:", Q_NULLPTR));
        lblNumSeguid->setText(QApplication::translate("MainWindow", "Seguidores:", Q_NULLPTR));
        lblNumPosts->setText(QApplication::translate("MainWindow", "Posts:", Q_NULLPTR));
        btnCerrar->setText(QApplication::translate("MainWindow", "Cerrar sesi\303\263n", Q_NULLPTR));
        btnImgPubl->setText(QString());
        lblFotoperfil->setText(QString());
        btnPublicar->setText(QApplication::translate("MainWindow", "Publicar", Q_NULLPTR));
        CboxOrden->clear();
        CboxOrden->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NOMBRE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CORREO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FECHA", Q_NULLPTR)
        );
        lblOrden->setText(QApplication::translate("MainWindow", "Ordenar por :", Q_NULLPTR));
        lblSeguidores->setText(QApplication::translate("MainWindow", "Seguidores", Q_NULLPTR));
        lblOrden_2->setText(QApplication::translate("MainWindow", "Ordenar por :", Q_NULLPTR));
        CboxOrden_2->clear();
        CboxOrden_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NOMBRE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CORREO", Q_NULLPTR)
         << QApplication::translate("MainWindow", "FECHA", Q_NULLPTR)
        );
        refresh->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        cboxordenpub->clear();
        cboxordenpub->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Inicia", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Termina", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Esta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Igual", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NoEsta", Q_NULLPTR)
        );
        btnGO->setText(QApplication::translate("MainWindow", "GOO", Q_NULLPTR));
        lblamixPhoto->setText(QApplication::translate("MainWindow", "Photograph", Q_NULLPTR));
        btnMiPerfil->setText(QString());
        lblAmixNombre->setText(QApplication::translate("MainWindow", "NOMBRE", Q_NULLPTR));
        btnEnviarSms->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        lblSeguidos_2->setText(QApplication::translate("MainWindow", "Seguidos", Q_NULLPTR));
        lblSeguidores_2->setText(QApplication::translate("MainWindow", "Seguidores", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Seguir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
