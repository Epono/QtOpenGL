# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = qopengl
DESTDIR = ./x64/Release
CONFIG += static console
#debug console
LIBS += -L"."
# for command line build
#LIBS += -lkernel32 -lkernel32 -lgdi32 -lwinspool -lcomdlg32 -ladvapi32 -lshell32 -lole32 -loleaut32 -luuid -lodbc32 -lodbccp32
DEPENDPATH += .
MOC_DIR += .
OBJECTS_DIR += ./x64/Release/objects_dir/
UI_DIR += ./x64/Release/ui_dir/
RCC_DIR += ./x64/Release/rcc_dir/
QT += core gui widgets

include(qopengl.pri)
include(qtimgui.pri)