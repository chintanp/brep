#############################################################################
# Makefile for building: bin/release/trab\ final
# Generated by qmake (2.01a) (Qt 4.8.1) on: Wed Feb 6 21:31:10 2013
# Project:  trab final.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile trab\ final.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -std=c++0x -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4 -I. -Isrc -Isrc/math -Isrc/interface -I/usr/X11R6/include -Itemp -Itemp
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -L/usr/X11R6/lib -lGLU -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = obj/release/

####### Files

SOURCES       = src/Edge.cpp \
		src/Face.cpp \
		src/HalfEdge.cpp \
		src/Loop.cpp \
		src/Mesh.cpp \
		src/Scene.cpp \
		src/Vertex.cpp \
		src/interface/GLWidget.cpp \
		src/interface/main.cpp \
		src/interface/mainwindow.cpp \
		src/interface/trackball.cpp \
		src/math/Quat.cpp \
		src/math/Vec3.cpp \
		src/interface/dialogcube.cpp \
		src/interface/dialogcorner.cpp \
		src/interface/dialogcylinder.cpp \
		src/interface/dialogsphere.cpp \
		src/interface/dialogsweeping.cpp \
		src/interface/dialogedit.cpp \
		src/interface/dialogrotate.cpp temp/moc_GLWidget.cpp \
		temp/moc_mainwindow.cpp \
		temp/moc_dialogcube.cpp \
		temp/moc_dialogcorner.cpp \
		temp/moc_dialogcylinder.cpp \
		temp/moc_dialogsphere.cpp \
		temp/moc_dialogsweeping.cpp \
		temp/moc_dialogedit.cpp \
		temp/moc_dialogrotate.cpp \
		temp/qrc_icons.cpp
OBJECTS       = obj/release/Edge.o \
		obj/release/Face.o \
		obj/release/HalfEdge.o \
		obj/release/Loop.o \
		obj/release/Mesh.o \
		obj/release/Scene.o \
		obj/release/Vertex.o \
		obj/release/GLWidget.o \
		obj/release/main.o \
		obj/release/mainwindow.o \
		obj/release/trackball.o \
		obj/release/Quat.o \
		obj/release/Vec3.o \
		obj/release/dialogcube.o \
		obj/release/dialogcorner.o \
		obj/release/dialogcylinder.o \
		obj/release/dialogsphere.o \
		obj/release/dialogsweeping.o \
		obj/release/dialogedit.o \
		obj/release/dialogrotate.o \
		obj/release/moc_GLWidget.o \
		obj/release/moc_mainwindow.o \
		obj/release/moc_dialogcube.o \
		obj/release/moc_dialogcorner.o \
		obj/release/moc_dialogcylinder.o \
		obj/release/moc_dialogsphere.o \
		obj/release/moc_dialogsweeping.o \
		obj/release/moc_dialogedit.o \
		obj/release/moc_dialogrotate.o \
		obj/release/qrc_icons.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		trab final.pro
QMAKE_TARGET  = trab\ final
DESTDIR       = bin/release/
TARGET        = bin/release/trab\ final

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): temp/ui_mainwindow.h temp/ui_dialogcube.h temp/ui_dialogcorner.h temp/ui_dialogcylinder.h temp/ui_dialogsphere.h temp/ui_dialogsweeping.h temp/ui_dialogedit.h temp/ui_dialogrotate.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) bin/release/ || $(MKDIR) bin/release/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: trab\ final.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/i386-linux-gnu/libQtOpenGL.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile trab\ final.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/i386-linux-gnu/libQtOpenGL.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile trab\ final.pro

dist: 
	@$(CHK_DIR_EXISTS) obj/release/trab\ final1.0.0 || $(MKDIR) obj/release/trab\ final1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) obj/release/trab\ final1.0.0/ && $(COPY_FILE) --parents src/BoundingBox.h src/Edge.h src/Face.h src/HalfEdge.h src/Loop.h src/Mesh.h src/Scene.h src/Vertex.h src/interface/GLWidget.h src/interface/mainwindow.h src/interface/trackball.h src/math/Quat.h src/math/Vec3.h src/interface/dialogcube.h src/interface/dialogcorner.h src/interface/dialogcylinder.h src/interface/dialogsphere.h src/interface/dialogsweeping.h src/interface/dialogedit.h src/interface/dialogrotate.h obj/release/trab\ final1.0.0/ && $(COPY_FILE) --parents data/icon/icons.qrc obj/release/trab\ final1.0.0/ && $(COPY_FILE) --parents src/Edge.cpp src/Face.cpp src/HalfEdge.cpp src/Loop.cpp src/Mesh.cpp src/Scene.cpp src/Vertex.cpp src/interface/GLWidget.cpp src/interface/main.cpp src/interface/mainwindow.cpp src/interface/trackball.cpp src/math/Quat.cpp src/math/Vec3.cpp src/interface/dialogcube.cpp src/interface/dialogcorner.cpp src/interface/dialogcylinder.cpp src/interface/dialogsphere.cpp src/interface/dialogsweeping.cpp src/interface/dialogedit.cpp src/interface/dialogrotate.cpp obj/release/trab\ final1.0.0/ && $(COPY_FILE) --parents src/interface/mainwindow.ui src/interface/dialogcube.ui src/interface/dialogcorner.ui src/interface/dialogcylinder.ui src/interface/dialogsphere.ui src/interface/dialogsweeping.ui src/interface/dialogedit.ui src/interface/dialogrotate.ui obj/release/trab\ final1.0.0/ && (cd `dirname obj/release/trab\ final1.0.0` && $(TAR) trab\ final1.0.0.tar trab\ final1.0.0 && $(COMPRESS) trab\ final1.0.0.tar) && $(MOVE) `dirname obj/release/trab\ final1.0.0`/trab\ final1.0.0.tar.gz . && $(DEL_FILE) -r obj/release/trab\ final1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: temp/moc_GLWidget.cpp temp/moc_mainwindow.cpp temp/moc_dialogcube.cpp temp/moc_dialogcorner.cpp temp/moc_dialogcylinder.cpp temp/moc_dialogsphere.cpp temp/moc_dialogsweeping.cpp temp/moc_dialogedit.cpp temp/moc_dialogrotate.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) temp/moc_GLWidget.cpp temp/moc_mainwindow.cpp temp/moc_dialogcube.cpp temp/moc_dialogcorner.cpp temp/moc_dialogcylinder.cpp temp/moc_dialogsphere.cpp temp/moc_dialogsweeping.cpp temp/moc_dialogedit.cpp temp/moc_dialogrotate.cpp
temp/moc_GLWidget.cpp: src/Scene.h \
		src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h \
		src/interface/GLWidget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/GLWidget.h -o temp/moc_GLWidget.cpp

temp/moc_mainwindow.cpp: src/interface/mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/mainwindow.h -o temp/moc_mainwindow.cpp

temp/moc_dialogcube.cpp: src/interface/dialogcube.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogcube.h -o temp/moc_dialogcube.cpp

temp/moc_dialogcorner.cpp: src/interface/dialogcorner.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogcorner.h -o temp/moc_dialogcorner.cpp

temp/moc_dialogcylinder.cpp: src/interface/dialogcylinder.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogcylinder.h -o temp/moc_dialogcylinder.cpp

temp/moc_dialogsphere.cpp: src/interface/dialogsphere.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogsphere.h -o temp/moc_dialogsphere.cpp

temp/moc_dialogsweeping.cpp: src/interface/dialogsweeping.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogsweeping.h -o temp/moc_dialogsweeping.cpp

temp/moc_dialogedit.cpp: src/interface/dialogedit.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogedit.h -o temp/moc_dialogedit.cpp

temp/moc_dialogrotate.cpp: src/interface/dialogrotate.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/interface/dialogrotate.h -o temp/moc_dialogrotate.cpp

compiler_rcc_make_all: temp/qrc_icons.cpp
compiler_rcc_clean:
	-$(DEL_FILE) temp/qrc_icons.cpp
temp/qrc_icons.cpp: data/icon/icons.qrc \
		data/icon/zoom.png \
		data/icon/edge.png \
		data/icon/open.png \
		data/icon/rotateZ.png \
		data/icon/line.png \
		data/icon/corner.png \
		data/icon/vertex.png \
		data/icon/save.png \
		data/icon/zoom_out.png \
		data/icon/zoom_in.png \
		data/icon/sphere.png \
		data/icon/r2d2.png \
		data/icon/new.png \
		data/icon/rotateX.png \
		data/icon/mesh.png \
		data/icon/cylinder.png \
		data/icon/cube.png \
		data/icon/face.png \
		data/icon/rotateY.png
	/usr/bin/rcc -name icons data/icon/icons.qrc -o temp/qrc_icons.cpp

compiler_image_collection_make_all: temp/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) temp/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: temp/ui_mainwindow.h temp/ui_dialogcube.h temp/ui_dialogcorner.h temp/ui_dialogcylinder.h temp/ui_dialogsphere.h temp/ui_dialogsweeping.h temp/ui_dialogedit.h temp/ui_dialogrotate.h
compiler_uic_clean:
	-$(DEL_FILE) temp/ui_mainwindow.h temp/ui_dialogcube.h temp/ui_dialogcorner.h temp/ui_dialogcylinder.h temp/ui_dialogsphere.h temp/ui_dialogsweeping.h temp/ui_dialogedit.h temp/ui_dialogrotate.h
temp/ui_mainwindow.h: src/interface/mainwindow.ui \
		src/interface/GLWidget.h \
		src/Scene.h \
		src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	/usr/bin/uic-qt4 src/interface/mainwindow.ui -o temp/ui_mainwindow.h

temp/ui_dialogcube.h: src/interface/dialogcube.ui
	/usr/bin/uic-qt4 src/interface/dialogcube.ui -o temp/ui_dialogcube.h

temp/ui_dialogcorner.h: src/interface/dialogcorner.ui
	/usr/bin/uic-qt4 src/interface/dialogcorner.ui -o temp/ui_dialogcorner.h

temp/ui_dialogcylinder.h: src/interface/dialogcylinder.ui
	/usr/bin/uic-qt4 src/interface/dialogcylinder.ui -o temp/ui_dialogcylinder.h

temp/ui_dialogsphere.h: src/interface/dialogsphere.ui
	/usr/bin/uic-qt4 src/interface/dialogsphere.ui -o temp/ui_dialogsphere.h

temp/ui_dialogsweeping.h: src/interface/dialogsweeping.ui
	/usr/bin/uic-qt4 src/interface/dialogsweeping.ui -o temp/ui_dialogsweeping.h

temp/ui_dialogedit.h: src/interface/dialogedit.ui
	/usr/bin/uic-qt4 src/interface/dialogedit.ui -o temp/ui_dialogedit.h

temp/ui_dialogrotate.h: src/interface/dialogrotate.ui
	/usr/bin/uic-qt4 src/interface/dialogrotate.ui -o temp/ui_dialogrotate.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

obj/release/Edge.o: src/Edge.cpp src/Edge.h \
		src/HalfEdge.h \
		src/Vertex.h \
		src/Mesh.h \
		src/Face.h \
		src/Loop.h \
		src/math/Vec3.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Edge.o src/Edge.cpp

obj/release/Face.o: src/Face.cpp src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/Vertex.h \
		src/math/Vec3.h \
		src/Mesh.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Face.o src/Face.cpp

obj/release/HalfEdge.o: src/HalfEdge.cpp src/HalfEdge.h \
		src/Vertex.h \
		src/Loop.h \
		src/math/Vec3.h \
		src/Edge.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/HalfEdge.o src/HalfEdge.cpp

obj/release/Loop.o: src/Loop.cpp src/Loop.h \
		src/HalfEdge.h \
		src/Vertex.h \
		src/math/Vec3.h \
		src/Face.h \
		src/Mesh.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Loop.o src/Loop.cpp

obj/release/Mesh.o: src/Mesh.cpp src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Mesh.o src/Mesh.cpp

obj/release/Scene.o: src/Scene.cpp src/Scene.h \
		src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Scene.o src/Scene.cpp

obj/release/Vertex.o: src/Vertex.cpp src/Vertex.h \
		src/Mesh.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Vertex.o src/Vertex.cpp

obj/release/GLWidget.o: src/interface/GLWidget.cpp src/interface/GLWidget.h \
		src/Scene.h \
		src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h \
		src/interface/trackball.h \
		src/interface/dialogedit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/GLWidget.o src/interface/GLWidget.cpp

obj/release/main.o: src/interface/main.cpp src/interface/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/main.o src/interface/main.cpp

obj/release/mainwindow.o: src/interface/mainwindow.cpp src/interface/mainwindow.h \
		temp/ui_mainwindow.h \
		src/interface/GLWidget.h \
		src/Scene.h \
		src/Mesh.h \
		src/Vertex.h \
		src/Face.h \
		src/Loop.h \
		src/HalfEdge.h \
		src/math/Vec3.h \
		src/Edge.h \
		src/BoundingBox.h \
		src/math/Quat.h \
		src/interface/dialogcube.h \
		src/interface/dialogcorner.h \
		src/interface/dialogcylinder.h \
		src/interface/dialogsphere.h \
		src/interface/dialogsweeping.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/mainwindow.o src/interface/mainwindow.cpp

obj/release/trackball.o: src/interface/trackball.cpp src/interface/trackball.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/trackball.o src/interface/trackball.cpp

obj/release/Quat.o: src/math/Quat.cpp src/math/Quat.h \
		src/math/Vec3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Quat.o src/math/Quat.cpp

obj/release/Vec3.o: src/math/Vec3.cpp src/math/Vec3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/Vec3.o src/math/Vec3.cpp

obj/release/dialogcube.o: src/interface/dialogcube.cpp src/interface/dialogcube.h \
		temp/ui_dialogcube.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogcube.o src/interface/dialogcube.cpp

obj/release/dialogcorner.o: src/interface/dialogcorner.cpp src/interface/dialogcorner.h \
		temp/ui_dialogcorner.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogcorner.o src/interface/dialogcorner.cpp

obj/release/dialogcylinder.o: src/interface/dialogcylinder.cpp src/interface/dialogcylinder.h \
		temp/ui_dialogcylinder.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogcylinder.o src/interface/dialogcylinder.cpp

obj/release/dialogsphere.o: src/interface/dialogsphere.cpp src/interface/dialogsphere.h \
		temp/ui_dialogsphere.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogsphere.o src/interface/dialogsphere.cpp

obj/release/dialogsweeping.o: src/interface/dialogsweeping.cpp src/interface/dialogsweeping.h \
		temp/ui_dialogsweeping.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogsweeping.o src/interface/dialogsweeping.cpp

obj/release/dialogedit.o: src/interface/dialogedit.cpp src/interface/dialogedit.h \
		temp/ui_dialogedit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogedit.o src/interface/dialogedit.cpp

obj/release/dialogrotate.o: src/interface/dialogrotate.cpp src/interface/dialogrotate.h \
		temp/ui_dialogrotate.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/dialogrotate.o src/interface/dialogrotate.cpp

obj/release/moc_GLWidget.o: temp/moc_GLWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_GLWidget.o temp/moc_GLWidget.cpp

obj/release/moc_mainwindow.o: temp/moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_mainwindow.o temp/moc_mainwindow.cpp

obj/release/moc_dialogcube.o: temp/moc_dialogcube.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogcube.o temp/moc_dialogcube.cpp

obj/release/moc_dialogcorner.o: temp/moc_dialogcorner.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogcorner.o temp/moc_dialogcorner.cpp

obj/release/moc_dialogcylinder.o: temp/moc_dialogcylinder.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogcylinder.o temp/moc_dialogcylinder.cpp

obj/release/moc_dialogsphere.o: temp/moc_dialogsphere.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogsphere.o temp/moc_dialogsphere.cpp

obj/release/moc_dialogsweeping.o: temp/moc_dialogsweeping.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogsweeping.o temp/moc_dialogsweeping.cpp

obj/release/moc_dialogedit.o: temp/moc_dialogedit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogedit.o temp/moc_dialogedit.cpp

obj/release/moc_dialogrotate.o: temp/moc_dialogrotate.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/moc_dialogrotate.o temp/moc_dialogrotate.cpp

obj/release/qrc_icons.o: temp/qrc_icons.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/release/qrc_icons.o temp/qrc_icons.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

