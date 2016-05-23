
#LIB_NAME=objc

OBJECTS = \
    sendmsg2.o \
    dtable.o \
    runtime.o \
    class_table.o \
    selector_table.o \
    associate.o \
    sarray2.o \
    protocol.o \
    properties.o \
    encoding2.o \
    ivar.o \
    alias_table.o \
    arc.o \
    blocks_runtime.o \
    gc_none.o \
    NSBlocks.o \
    loader.o \
    abi_version.o \
    block_to_imp.o \
    category_loader.o \
    statics_loader.o \
    block_trampolines.o \

ifeq ($(BASE_OS),android)
include ${MYOS_PATH}/sdk/$(BASE_OS)/makefile-shared
else
include ${MYOS_PATH}/sdk/$(BASE_OS)/makefile-shared
endif


