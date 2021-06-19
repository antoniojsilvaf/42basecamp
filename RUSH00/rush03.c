void	ft_putchar(char	c);

void	rush03(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1))
				ft_putchar('A');
			else if ((row == 1 || row == y) && (col == x))
				ft_putchar('C');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		if (x > 0)
			ft_putchar('\n');
		row++;
	}
}
