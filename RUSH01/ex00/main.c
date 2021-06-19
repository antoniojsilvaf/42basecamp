/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:07:54 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:07:56 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_arg_verify(char *str, int numbers[3][4][4]);
int	ft_isnumber(char c);
int	is_space(char c);
int	ft_strlen(char *str);

int	fill_board(int rules[3][4][4], int matriz[4][4], int row, int column)

int	main(void) //colocar argc e argv
{
	char	argv[2][40];
	int		all_numbers[3][4][4];
	int		matriz[4][4];
	int		argc;

	argc = 2;
	strcpy(argv[0], "./a.out");
	strcpy(argv[1], "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"); //substituir linhas 7 a 10 por argc e argv no main.
	if (argc != 2) //verificando quantidade de argumentos passado pelo main
	{
		printf("poucos parametros\n");
	}
	if (ft_arg_verify(argv[1], all_numbers) != 16)
	{
		printf("Error\n");
	}

	return (0);
}

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
