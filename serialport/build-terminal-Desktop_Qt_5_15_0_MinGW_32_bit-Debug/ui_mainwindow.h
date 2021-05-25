/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConfigure;
    QAction *actionClear;
    QAction *actionQuit;
    QAction *actionFastConnect;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *hexInConsoleCheckBox;
    QCheckBox *timeCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QPlainTextEdit *plainTextEditConsole;
    QGridLayout *gridLayout_4;
    QLabel *label_ms;
    QCheckBox *HexCheckBox;
    QSpinBox *spinBox;
    QPushButton *sendButton;
    QLabel *repeat_label;
    QCheckBox *repeatCheckBox;
    QPlainTextEdit *plainTextEditField1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_2;
    QPushButton *sendButton2;
    QCheckBox *checkBoxRepeat2;
    QCheckBox *checkBoxHex2;
    QLabel *label_ms2;
    QSpinBox *spinBox2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_repeat2;
    QPlainTextEdit *plainTextEditField2;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_5;
    QPushButton *searchResetButton;
    QCheckBox *hexSearchCheckBox;
    QLineEdit *lineEdit;
    QCheckBox *caseSensCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *wholeWordCheckBox;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(658, 636);
        MainWindow->setAcceptDrops(false);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionFastConnect = new QAction(MainWindow);
        actionFastConnect->setObjectName(QString::fromUtf8("actionFastConnect"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFastConnect->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hexInConsoleCheckBox = new QCheckBox(centralWidget);
        hexInConsoleCheckBox->setObjectName(QString::fromUtf8("hexInConsoleCheckBox"));
        hexInConsoleCheckBox->setChecked(true);

        gridLayout->addWidget(hexInConsoleCheckBox, 1, 0, 1, 1);

        timeCheckBox = new QCheckBox(centralWidget);
        timeCheckBox->setObjectName(QString::fromUtf8("timeCheckBox"));

        gridLayout->addWidget(timeCheckBox, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        plainTextEditConsole = new QPlainTextEdit(centralWidget);
        plainTextEditConsole->setObjectName(QString::fromUtf8("plainTextEditConsole"));
        plainTextEditConsole->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(plainTextEditConsole, 0, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_ms = new QLabel(centralWidget);
        label_ms->setObjectName(QString::fromUtf8("label_ms"));

        gridLayout_4->addWidget(label_ms, 1, 4, 1, 1);

        HexCheckBox = new QCheckBox(centralWidget);
        HexCheckBox->setObjectName(QString::fromUtf8("HexCheckBox"));
        HexCheckBox->setChecked(true);

        gridLayout_4->addWidget(HexCheckBox, 1, 1, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setLayoutDirection(Qt::LeftToRight);
        spinBox->setMaximum(9999);
        spinBox->setValue(25);

        gridLayout_4->addWidget(spinBox, 1, 3, 1, 1);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        gridLayout_4->addWidget(sendButton, 1, 0, 1, 1);

        repeat_label = new QLabel(centralWidget);
        repeat_label->setObjectName(QString::fromUtf8("repeat_label"));
        repeat_label->setFrameShape(QFrame::Box);
        repeat_label->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(repeat_label, 1, 6, 1, 1);

        repeatCheckBox = new QCheckBox(centralWidget);
        repeatCheckBox->setObjectName(QString::fromUtf8("repeatCheckBox"));

        gridLayout_4->addWidget(repeatCheckBox, 1, 2, 1, 1);

        plainTextEditField1 = new QPlainTextEdit(centralWidget);
        plainTextEditField1->setObjectName(QString::fromUtf8("plainTextEditField1"));

        gridLayout_4->addWidget(plainTextEditField1, 0, 0, 1, 8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sendButton2 = new QPushButton(centralWidget);
        sendButton2->setObjectName(QString::fromUtf8("sendButton2"));

        gridLayout_2->addWidget(sendButton2, 1, 0, 1, 1);

        checkBoxRepeat2 = new QCheckBox(centralWidget);
        checkBoxRepeat2->setObjectName(QString::fromUtf8("checkBoxRepeat2"));

        gridLayout_2->addWidget(checkBoxRepeat2, 1, 2, 1, 1);

        checkBoxHex2 = new QCheckBox(centralWidget);
        checkBoxHex2->setObjectName(QString::fromUtf8("checkBoxHex2"));
        checkBoxHex2->setChecked(true);

        gridLayout_2->addWidget(checkBoxHex2, 1, 1, 1, 1);

        label_ms2 = new QLabel(centralWidget);
        label_ms2->setObjectName(QString::fromUtf8("label_ms2"));

        gridLayout_2->addWidget(label_ms2, 1, 4, 1, 1);

        spinBox2 = new QSpinBox(centralWidget);
        spinBox2->setObjectName(QString::fromUtf8("spinBox2"));
        spinBox2->setMaximum(9999);

        gridLayout_2->addWidget(spinBox2, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 7, 1, 1);

        label_repeat2 = new QLabel(centralWidget);
        label_repeat2->setObjectName(QString::fromUtf8("label_repeat2"));
        label_repeat2->setFrameShape(QFrame::Box);
        label_repeat2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_repeat2, 1, 6, 1, 1);

        plainTextEditField2 = new QPlainTextEdit(centralWidget);
        plainTextEditField2->setObjectName(QString::fromUtf8("plainTextEditField2"));

        gridLayout_2->addWidget(plainTextEditField2, 0, 0, 1, 8);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        searchResetButton = new QPushButton(centralWidget);
        searchResetButton->setObjectName(QString::fromUtf8("searchResetButton"));

        gridLayout_5->addWidget(searchResetButton, 1, 0, 1, 1);

        hexSearchCheckBox = new QCheckBox(centralWidget);
        hexSearchCheckBox->setObjectName(QString::fromUtf8("hexSearchCheckBox"));

        gridLayout_5->addWidget(hexSearchCheckBox, 1, 1, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_5->addWidget(lineEdit, 0, 0, 1, 5);

        caseSensCheckBox = new QCheckBox(centralWidget);
        caseSensCheckBox->setObjectName(QString::fromUtf8("caseSensCheckBox"));

        gridLayout_5->addWidget(caseSensCheckBox, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 1, 4, 1, 1);

        wholeWordCheckBox = new QCheckBox(centralWidget);
        wholeWordCheckBox->setObjectName(QString::fromUtf8("wholeWordCheckBox"));

        gridLayout_5->addWidget(wholeWordCheckBox, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 27));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QString::fromUtf8("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addAction(actionFastConnect);
        menuCalls->addSeparator();
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        menuTools->addAction(actionClear);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionFastConnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Test terminal", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About program", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "C&onnect", nullptr));
#if QT_CONFIG(tooltip)
        actionConnect->setToolTip(QCoreApplication::translate("MainWindow", "Connect to serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConnect->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "&Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        actionDisconnect->setToolTip(QCoreApplication::translate("MainWindow", "Disconnect from serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDisconnect->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConfigure->setText(QCoreApplication::translate("MainWindow", "&Configure", nullptr));
#if QT_CONFIG(tooltip)
        actionConfigure->setToolTip(QCoreApplication::translate("MainWindow", "Configure serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConfigure->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("MainWindow", "C&lear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("MainWindow", "Clear data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFastConnect->setText(QCoreApplication::translate("MainWindow", "FastConnect", nullptr));
#if QT_CONFIG(tooltip)
        actionFastConnect->setToolTip(QCoreApplication::translate("MainWindow", "Preconfigured connect", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFastConnect->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        hexInConsoleCheckBox->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        timeCheckBox->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        label_ms->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        HexCheckBox->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        repeat_label->setText(QCoreApplication::translate("MainWindow", "Repeat off", nullptr));
        repeatCheckBox->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        sendButton2->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        checkBoxRepeat2->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        checkBoxHex2->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        label_ms2->setText(QCoreApplication::translate("MainWindow", "ms", nullptr));
        label_repeat2->setText(QCoreApplication::translate("MainWindow", "Repeat off", nullptr));
        searchResetButton->setText(QCoreApplication::translate("MainWindow", "Reset search", nullptr));
        hexSearchCheckBox->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Input data to search + \"Enter\"", nullptr));
        caseSensCheckBox->setText(QCoreApplication::translate("MainWindow", "Case sensitive", nullptr));
        wholeWordCheckBox->setText(QCoreApplication::translate("MainWindow", "Whole word", nullptr));
        menuCalls->setTitle(QCoreApplication::translate("MainWindow", "Calls", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
