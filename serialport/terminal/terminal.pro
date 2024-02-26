QT += widgets serialport
requires(qtConfig(combobox))

TARGET = terminal
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    packets.cpp \
    settingsdialog.cpp \
    console.cpp

HEADERS += \
    mainwindow.h \
    packets.h \
    settingsdialog.h \
    console.h

FORMS += \
    mainwindow.ui \
    packets.ui \
    settingsdialog.ui

RESOURCES += \
    terminal.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/terminal
INSTALLS += target

RC_ICONS = icon_cmd.ico
