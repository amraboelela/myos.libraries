
#LDLIBS= -lCoreFoundation -lFoundation
#CFLAGS+=-I/home/amr/rengo/
CFLAGS+=-DLEVELDB_PLATFORM_POSIX

OBJECTS = \
	arena.o \
	block.o \
	block_builder.o \
	bloom.o \
	builder.o \
	c.o \
	coding.o \
	comparator.o \
	crc32c.o \
db_impl
db_iter


include ${MYOS_PATH}/sdk/$(BASE_OS)/makefile-shared
