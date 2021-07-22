TARGET=ft_display_file
FLAGS=-Wall -Wextra -Werror
SOURCES=main.c
OBJECTS=$(SOURCES:.c=.o)

%.o: %.c
	gcc $(FLAGS) -c $<

all: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc $(FLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)
