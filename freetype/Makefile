
LIB_NAME=freetype
CFLAGS=-DFT2_BUILD_LIBRARY -O2
LDLIBS=
LDFLAGS=-v -Wl,--no-undefined
OBJECTS = \
    ftbase.o \
    ftinit.o \
    ftsystem.o \
    autofit.o \
    truetype.o \
    type1.o \
    cff.o \
    type1cid.o \
    pfr.o \
    type42.o \
    winfnt.o \
    pcf.o \
    psaux.o \
    psnames.o \
    pshinter.o \
    raster.o \
    sfnt.o \
    smooth.o \
    bdf.o \
    ftgzip.o \
    ftlzw.o \
    ftbitmap.o \
    ftbbox.o \
    ftbdf.o \
    ftbitmap.o \
    ftcid.o \
    ftfstype.o \
    ftgasp.o \
    ftglyph.o \
    ftgxval.o \
    ftlcdfil.o \
    ftmm.o \
    ftotval.o \
    ftpatent.o \
    ftpfr.o \
    ftstroke.o \
    ftsynth.o \
    fttype1.o \
    ftwinfnt.o \
    ftxf86.o \

include ${MYOS_PATH}/android/sdk/resources/makefile-static

$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/base/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/autofit/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/truetype/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/type1/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/cff/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/cid/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/pfr/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/type42/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/winfonts/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/pcf/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/psaux/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/psnames/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/pshinter/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/raster/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/sfnt/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/smooth/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/bdf/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/gzip/%.c
	$(CC) $(CFLAGS) -c $< -o $@
$(ODIR)/%.o: ${MYOS_PATH}/android/libraries/freetype/lzw/%.c
	$(CC) $(CFLAGS) -c $< -o $@
