int	ft_is_prime(int nb)
{
	int	div_c;
	int	i;

	div_c = 0;
	i = 1;
	if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				div_c += 1;
			i++;
		}
	}
	if (div_c == 1)
		return (1);
	else
		return (0);
}
