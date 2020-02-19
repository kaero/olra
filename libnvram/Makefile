CC=arm-linux-gnueabi-gcc
CFLAGS=-Wall -fPIC
LDFLAGS=-shared -static -nostdlib

all:
	$(MAKE) libnvram.so

clean:
	rm *.o *.so

libnvram.so: libnvram.o
	$(CC) $(LDFLAGS) -o $@ $<
