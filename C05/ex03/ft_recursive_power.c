int	ft_recursive_power(int nb, int power)
{
	int	n_powered;

	n_powered = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
	{
		n_powered *= ft_recursive_power(n_powered, power - 1);
		return (n_powered);
	}
}
