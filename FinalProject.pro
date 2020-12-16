QT       += core gui widgets core gui datavisualization

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bootupdialog.cpp \
    datetime.cpp \
    graphmodifier.cpp \
    loaddatathread.cpp \
    main.cpp \
    mainwindow.cpp \
    selectdialog.cpp

HEADERS += \
    bootupdialog.h \
    datetime.h \
    graphmodifier.h \
    include.h \
    loaddatathread.h \
    mainwindow.h \
    selectdialog.h

FORMS += \
    bootupdialog.ui \
    mainwindow.ui \
    selectdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Data.qrc


