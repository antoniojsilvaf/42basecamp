int	ft_any(char **tab, int(*f)(char*))
{
	int	ret;
	int i;

	i = 0;
	ret = 0;
	while (*tab[i]) // *(tab + i)
	{
		ret = f(tab[i]); // tab + 1 
		if (ret != 0)
			return (1);
		i++;
	}
	return (ret);
}
