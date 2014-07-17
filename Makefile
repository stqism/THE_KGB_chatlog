  SHEDSKIN_LIBDIR=/usr/local/lib/python2.7/site-packages/shedskin/lib
CC=g++
CCFLAGS=-O2 -march=native -Wno-deprecated $(CPPFLAGS) -I. -I${SHEDSKIN_LIBDIR} -g -fPIC -D__SS_BIND -I/usr/local/include/python2.7 -I/usr/local/include/python2.7
LFLAGS=-lgc -lpcre $(LDFLAGS) -shared -Xlinker -export-dynamic -lintl -lutil -lm -lpython2.7 -L/usr/local/lib/python2.7/config -lutil

CPPFILES=/home/sean/THE_KGB/tmp/chatlog.cpp \
	${SHEDSKIN_LIBDIR}/time.cpp \
	${SHEDSKIN_LIBDIR}/stat.cpp \
	${SHEDSKIN_LIBDIR}/re.cpp \
	${SHEDSKIN_LIBDIR}/os/path.cpp \
	${SHEDSKIN_LIBDIR}/os/__init__.cpp \
	${SHEDSKIN_LIBDIR}/builtin.cpp

HPPFILES=/home/sean/THE_KGB/tmp/chatlog.hpp \
	${SHEDSKIN_LIBDIR}/time.hpp \
	${SHEDSKIN_LIBDIR}/stat.hpp \
	${SHEDSKIN_LIBDIR}/re.hpp \
	${SHEDSKIN_LIBDIR}/os/path.hpp \
	${SHEDSKIN_LIBDIR}/os/__init__.hpp \
	${SHEDSKIN_LIBDIR}/builtin.hpp

all:	chatlog.so

chatlog.so:	$(CPPFILES) $(HPPFILES)
	$(CC)  $(CCFLAGS) $(CPPFILES) $(LFLAGS) -o chatlog.so

clean:
	rm -f chatlog.so

.PHONY: all clean
