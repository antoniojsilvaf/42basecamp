void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count1;

	count1 = 0;
	size--;
	while (count1 < size)
	{
		temp = tab[count1];
		tab[count1] = tab[size];
		tab[size] = temp;
		count1++;
		size--;
	}
}
