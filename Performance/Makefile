
CFLAGS+=-Wdeclaration-after-statement -Wcast-align -DGNUSTEP -DGNUSTEP_BASE_LIBRARY=1 -DGNU_RUNTIME=1 -DGNUSTEP_BASE_LIBRARY=1 -fno-strict-aliasing -fexceptions -fobjc-exceptions -D_NATIVE_OBJC_EXCEPTIONS -pthread -DGSWARN -DGSDIAGNOSE

LDLIBS= -lCoreFoundation -lFoundation

OBJECTS = \
	GSCache.o \
	GSFIFO.o \
	GSIOThreadPool.o \
	GSLinkedList.o \
	GSThreadPool.o \
	GSThroughput.o \
	GSTicker.o \
	GSIndexedSkipList.o \
	GSSkipMutableArray.o \
	GSUniqued.o \

include ${MYOS_PATH}/sdk/$(BASE_OS)/makefile-shared
