#include "ft_header.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	c;
	int		i;

	if (argc == 1)
	{
		while (read(0, &c, 1) > 0)
			write (1, &c, 1);
	}
	if (argc >= 2)
	{
		i = 0;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
			{
				ft_errmsg(argv, strerror(errno), i);
			}
			while (read(fd, &c, 1) > 0)
				ft_putchar(c);
			if (errno == 21)
			{
				ft_errmsg(argv, strerror(errno), i);
			}
			close(fd);
		}
	}
	return (0);
}

void    ft_errmsg(char **matrix, char *emsg, int fi)
{
    ft_putstr(basename(matrix[0]));
    ft_putstr(": ");
    ft_putstr(matrix[fi]);
    ft_putstr(": ");
    ft_putstr(emsg);
    ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)                                                    
{                                                                               
	int i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}
