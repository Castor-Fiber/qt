QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
QT += printsupport

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    finedialog.cpp \
    main.cpp \
    settings.cpp \
    texteditor.cpp

HEADERS += \
    finedialog.h \
    settings.h \
    texteditor.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    README.md \
    RU_tu.qm \
    RU_tu.ts \
    part_1.pro.user \
    qtbase_ru.qm \
    readme.txt
