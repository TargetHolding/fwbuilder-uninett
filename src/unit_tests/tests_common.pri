#-*- mode: makefile; tab-width: 4; -*-
#
include(../../qmake.inc)

OBJECTS_DIR = .obj
MOC_DIR = .moc

QMAKE_CXXFLAGS += $$CPPUNIT_CFLAGS

CONFIG -= release
CONFIG += debug

INCLUDEPATH += ../../.. \
               ../.. \
               ../../common \
               ../../parsers \
               ../../import \
               ../../compiler_lib/ \
               ../../libgui \
               ../../libgui/.ui \
               ../../iptlib \
               ../../pflib \
               ../../cisco_lib/ \
               ../../libfwbuilder/src

run_tests.commands = echo "Running tests..."; ./${TARGET}
run_tests.depends = build_tests
build_tests.depends = all
clean_tests.depends = clean 
QMAKE_EXTRA_TARGETS += run_tests build_tests clean_tests

INCLUDEPATH += $$ANTLR_INCLUDEPATH
DEFINES += $$ANTLR_DEFINES

# fwtransfer lib. Add this before adding -lQtDBus to LIBS below
#LIBS += ../$$FWTRANSFER_LIB
contains( HAVE_QTDBUS, 1 ):unix {
    !macx:QT += network \
        dbus
    macx:LIBS += -framework \
        QtDBus
}

# !macx:LIBS += -lQtDBus # workaround for QT += dbus not working with Qt < 4.4.0

DEPENDPATH = ../../common \
    ../../iptlib \
    ../../pflib \
    ../../cisco_lib/ \
    ../../compiler_lib \
    ../../libgui \
    ../../fwtransfer \
    ../../libfwbuilder/src/fwbuilder \
    ../../libfwbuilder/src/fwcompiler

STATIC_LIBS += \
    ../main/libtest_main.a \
    ../../import/libimport.a \
    ../../libgui/libgui.a \
    ../../common/libcommon.a \
    ../../iptlib/libiptlib.a \
    ../../pflib/libfwbpf.a \
    ../../cisco_lib/libfwbcisco.a \
    ../../compiler_lib/libcompilerdriver.a \
    ../../fwtransfer/libfwtransfer.a \
    ../../libfwbuilder/src/fwcompiler/libfwcompiler.a \
    ../../libfwbuilder/src/fwbuilder/libfwbuilder.a \
    ../../parsers/libfwbparser.a \
    $$ANTLR_LIBS \
    $$CPPUNIT_LIBS

PRE_TARGETDEPS += ../../common/libcommon.a \
    ../main/libtest_main.a \
    ../../iptlib/libiptlib.a \
    ../../pflib/libfwbpf.a \
    ../../cisco_lib/libfwbcisco.a \
    ../../compiler_lib/libcompilerdriver.a \
    ../../fwtransfer/libfwtransfer.a \
    ../../parsers/libfwbparser.a \
    ../../import/libimport.a \
    ../../libfwbuilder/src/fwcompiler/libfwcompiler.a \
    ../../libfwbuilder/src/fwbuilder/libfwbuilder.a \
    $$ANTLR_LIBS

LIBS = $$STATIC_LIBS $$LIBS

