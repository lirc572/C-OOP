CC = clang
CFLAGS = -std=c11 -fms-extensions -Wall -Wno-microsoft-anon-tag
CPPFLAGS =
OBJFILES = base.o derived.o main.o
DEPS = base.h derived.h oop_utils.h
TARGET = exe

all: $(TARGET)

%.o: %.c $(DEPS)
	$(CC) -c $(CFLAGS) -o $@ $<

$(TARGET): $(OBJFILES)
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $^

conf:
	bear -- make $(TARGET)

clean:
	rm -f *.o exe compile_commands.json
