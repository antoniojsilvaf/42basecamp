#include "ft_header.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	c;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd != -1)
		{
			ret = read(fd, &c, 1);
			while (ret != 0)
			{
				write(1, &c, 1);
				ret = read(fd, &c, 1);
			}
			close(fd);
		}
		else
			ft_putstr("Cannot read file.\n");
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

