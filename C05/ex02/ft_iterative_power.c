int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n_powered;

	if (power < 0)
		return (0);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else
	{
		i = 0;
		n_powered = 1;
		while (i != power)
		{
			n_powered *= nb;
			i++;
		}
	}
	return (n_powered);
}
