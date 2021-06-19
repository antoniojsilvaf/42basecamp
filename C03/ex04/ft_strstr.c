int		ft_strlen(char *str);
char	*null_string(char *str);
int		to_find_verify(char *str_tofind, int i_find, char *str, int i_str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	count = 0;
	if (ft_strlen(to_find) < 1)
		return (str);
	while (str[++i] != '\0')
	{
		j = 0;
		count = 0;
		if (str[i] == to_find[j])
		{
			count = to_find_verify(to_find, j, str, i);
			if ((ft_strlen(to_find)) == count)
				return (to_find = str + i);
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	to_find_verify(char *str_tofind, int i_find, char *str, int i_str)
{
	int	count;

	count = 0;
	while (str_tofind[i_find] != '\0')
	{
		if (str_tofind[i_find] == str[i_str + i_find])
			count++;
		i_find++;
	}
	return (count);
}
