QT += widgets

SOURCES += \
    main/main.cpp \
    views/mainwindow.cpp \
    views/dockers/timeline/timeline.cpp \
    controllers/dockermanager.cpp \
    views/dockers/onionskin/onionskin.cpp \
    views/dockers/onionskin/opacityselector.cpp \
    views/colorbutton.cpp \
    views/dockers/docker.cpp \
    views/dockers/timeline/layerbox.cpp \
    views/dockers/timeline/framebox.cpp \
    views/canvas.cpp \
    controllers/actioncollection.cpp

HEADERS += \
    views/mainwindow.h \
    views/dockers/timeline/timeline.h \
    controllers/dockermanager.h \
    views/dockers/onionskin/onionskin.h \
    views/dockers/onionskin/opacityselector.h \
    views/colorbutton.h \
    views/dockers/docker.h \
    views/dockers/timeline/layerbox.h \
    views/dockers/timeline/framebox.h \
    views/canvas.h \
    controllers/actioncollection.h
