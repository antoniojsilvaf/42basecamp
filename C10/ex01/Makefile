CFLAGS=-Wall -Wextra -Werror

SOURCES=main.c
HEADER=ft_header.h
OBJECTS=$(SOURCES:.c=.o)
TARGET=ft_cat

%.o: %.c
	gcc -c $(SOURCES)

all: $(TARGET)

$(TARGET): $(OBJECTS) $(HEADER)
	gcc $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)
