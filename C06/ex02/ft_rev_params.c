/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:06:02 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:06:03 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_mstr(char **str, int n);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	ft_put_mstr(argv, argc);
	return (0);
}

void	ft_put_mstr(char **str, int n)
{
	int	i;
	int	j;

	i = n - 1;
	j = 0;
	while (i < n && i > 0)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
