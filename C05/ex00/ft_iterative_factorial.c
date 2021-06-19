int	ft_iterative_factorial(int nb)
{
	int	fat_n;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		fat_n = nb;
		while (nb > 1)
		{
			fat_n = fat_n * (--nb);
		}
		return (fat_n);
	}
	return (0);
}
