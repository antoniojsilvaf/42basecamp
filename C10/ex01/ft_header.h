#ifndef FT_HEADER_H

# define FT_HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdio.h>
# include <errno.h>
# include <libgen.h>

void    ft_putstr(char *str);
void    ft_putchar(char c);
void    ft_errmsg(char **matrix, char *emsg, int fi);

#endif
