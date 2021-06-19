void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1 || col == x))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (col > 1 && col < x))
				ft_putchar('-');
			else if ((row > 1 && row < y) && (col == 1 || col == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		if (x > 0)
			ft_putchar('\n');
		row++;
	}
}
