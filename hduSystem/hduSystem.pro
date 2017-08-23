#-------------------------------------------------
#
# Project created by QtCreator 2017-08-19T11:04:34
#
#-------------------------------------------------

QT       += core gui

TARGET = hduSystem
TEMPLATE = app


SOURCES += main.cpp\
        hdusys.cpp \
    sockApi.cpp \
    log.cpp \
    parsexml.cpp \
    tinystr.cpp \
    tinyxmlerror.cpp \
    threadpool.cpp \
    types.cpp \
    dialog.cpp \
    dialog_del.cpp \
    dialog_select.cpp \
    dialog_update.cpp \
    dialog_teacher.cpp \
    dialog_student.cpp \
    tea_log.cpp \
    stu_log.cpp \
    teacher_sel.cpp \
    teacher_alt.cpp \
    get_alt_id.cpp

HEADERS  += hdusys.h \
    sockApi.h \
    class.h \
    socknotify.h \
    threadpool.h \
    types.h \
    queue.h \
    log.h \
    parsexml.h \
    tinystr.h \
    tinyxml.h \
    dialog.h \
    dialog_del.h \
    dialog_select.h \
    dialog_update.h \
    dialog_teacher.h \
    dialog_student.h \
    tea_log.h \
    stu_log.h \
    teacher_sel.h \
    teacher_alt.h \
    get_alt_id.h

FORMS    += hdusys.ui \
    dialog.ui \
    dialog_del.ui \
    dialog_update.ui \
    dialog_select.ui \
    dialog_teacher.ui \
    dialog_student.ui \
    tea_log.ui \
    stu_log.ui \
    teacher_sel.ui \
    teacher_alt.ui \
    get_alt_id.ui
