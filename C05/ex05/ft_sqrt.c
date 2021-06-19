int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
		i++;
	if (nb == i * i)
		return (i);
	else
		return (0);
}
