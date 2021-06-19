void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && col == 1)
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (col == x && row == y)
				ft_putchar('/');
			else if ((row == 1 || row == y) || (col == 1 || col == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		if (x > 0)
			ft_putchar('\n');
		row++;
	}
}
