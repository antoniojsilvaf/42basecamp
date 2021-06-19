void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && (col == 1 || col == x))
				ft_putchar('A');
			else if (row == y && (col == 1 || col == x))
				ft_putchar('C');
			else if ((row == 1 || row == y) || (col == 1 || col == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		if (x > 0)
			ft_putchar('\n');
		row++;
	}
}
