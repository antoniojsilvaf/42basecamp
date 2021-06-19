int	ft_isnumber(char c);
int	is_space(char c);
int	ft_strlen(char *str);

int	ft_arg_verify(char *str, int numbers[3][4][4])
{
	int	i; // manipular quais tabelas \0 grid -- \1 
	int	j; // manipular elementos das tabelas
	int	args;
	int	z;
	int	count;

	args = 0;
	i = 0;
	z = 1;
	count = 0;
	if (ft_strlen(str) != 31) //verificação de tamanho da string (31 caracteres)
		return (0);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ('1' <= str[count] && str[count] <= '4')
			{
				if (z == 1)
				{
					numbers[0][i][j] = str[count] - '0';
					if (count % 2 == 0)
						args++;
				}
				z = 0;
			}
			else if (is_space(str[count]) == 1)
			{
				z = 1;
				j--;
			}
			else
				return (0);
			j++;
			count++;
		}
		i++;
	}
	return (args);
}

int	ft_isnumber(char c)
{
	if ('0' <= c && c <= '9')
		return (0);
	else
		return (1);
}

int	is_space(char c)
{
	if (c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
