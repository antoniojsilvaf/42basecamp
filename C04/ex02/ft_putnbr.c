/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:04:10 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:04:11 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c);
void	ft_put_rev_str(char *str, int len_str);

void	ft_putnbr(int nb)
{
	char	number[10];
	int		i;

	if (nb == 0)
		write(1, "0", 1);
	if (nb == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	i = 0;
	while (nb > 0)
	{
		number[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	ft_put_rev_str(number, i - 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_rev_str(char *str, int len_str)
{
	while (len_str >= 0)
	{
		ft_putchar(str[len_str]);
		len_str--;
	}
}
