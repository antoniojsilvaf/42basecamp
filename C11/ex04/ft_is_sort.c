int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int cnt;

	i = 0;
	cnt = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			cnt++;
		i++;
	}
	if (cnt == length - 1)
		return (1);
	else
		return (0);
}
