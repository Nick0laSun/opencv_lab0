TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

CONFIG += link_pkgconfig
PKGCONFIG += opencv4

SOURCES += \
        main.cpp

#INCLUDEPATH += ~/opencv_build/opencv/include
#LIBS += -L ~/opencv_build/opencv/modules/

#LIBS += -loencv_core \
#        -lopencv_imgproc \
#        -lopencv_imgcodecs \
#        -lopencv_highgui \
#        -lopencv_objdetect
