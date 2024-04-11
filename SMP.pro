QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    smp.cpp \
    smp2.cpp \
    smp3.cpp \
    smp4.cpp \
    smp5.cpp

HEADERS += \
    smp.h \
    smp2.h \
    smp3.h \
    smp4.h \
    smp5.h

FORMS += \
    smp.ui \
    smp2.ui \
    smp3.ui \
    smp4.ui \
    smp5.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    1.qrc \
    IMAGE1SMP.qrc \
    image2.qrc \
    image2l.qrc \
    pas.qrc
