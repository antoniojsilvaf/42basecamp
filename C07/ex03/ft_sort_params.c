/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:06:42 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:06:43 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_mat(char **str, int n);
int		ft_strcmp(char *s1, char *s2);
char	ft_case_ign(char c);
int		ft_isletter(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_mat(argv, argc);
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

char	**ft_sort_mat(char **str, int n)
{
	int		i;
	int		j;
	int		letter;
	char	*swap;

	i = 1;
	j = 0;
	while (i < n)
	{
		j = i + 1;
		letter = 0;
		while (j < n)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				swap = str[i];
				str[i] = str[j];
				str[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	char	tmp_l1;
	char	tmp_l2;

	i = 0;
	while (s1[i] != '\0')
	{
		tmp_l1 = (unsigned char)s1[i];
		tmp_l2 = (unsigned char)s2[i];
		if (ft_isletter(s1[i]) && ft_isletter(s2[i]))
		{
			tmp_l1 = ft_case_ign(tmp_l1);
			tmp_l2 = ft_case_ign(tmp_l2);
		}
		if (tmp_l1 == tmp_l2)
			i++;
		else
			break ;
	}
	return (tmp_l1 - tmp_l2);
}

char	ft_case_ign(char c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_isletter(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
