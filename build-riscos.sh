autoreconf -i
LDFLAGS=-static ./configure --host=arm-unknown-riscos --disable-shared --enable-static
make
make check
elf2aif test/libxmp-test test/libxmp-test-aif,ff8

cd test-dev/
autoreconf -i
LDFLAGS=-static ./configure --host=arm-unknown-riscos
make
elf2aif libxmp-tests libxmp-tests-aif,ff8
