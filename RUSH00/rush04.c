void	ft_putchar(char c);

void	rush04(int x, int y)
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
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('C');
			else if (row == y && col == x)
				ft_putchar('A');
			else if ((row == 1 || row == y) || (col == 1 || col == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
