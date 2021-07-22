SRCDIR=srcs
INCDIR=includes
SOURCES=$(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c

AOUT=ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
OBJECTS=$(SOURCES:.c=.o) 

all: libft.a

libft.a: $(SOURCES)
	gcc -c -Wall -Wextra -Werror $(SOURCES) && mv $(AOUT) srcs
	ar rc libft.a ./srcs/ft_*.o
	ranlib libft.a

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
