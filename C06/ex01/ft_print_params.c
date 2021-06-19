#include <unistd.h>

void	ft_put_mstr(char **str, int n);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	ft_put_mstr(argv, argc);
	return (0);
}

void	ft_put_mstr(char **str, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
