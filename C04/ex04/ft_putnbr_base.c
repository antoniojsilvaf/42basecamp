/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:44:37 by anjose-d          #+#    #+#             */
/*   Updated: 2021/09/11 19:45:26 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_base_verify(char *base);
void	ft_print_number(int nbr, char *base, unsigned int base_n);
void	ft_putchar(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_n;

	base_n = 0;
	while (base[base_n])
		base_n++;
	if (!ft_base_verify(base) || base_n < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_print_number(nbr, base, base_n);
}

int	ft_base_verify(char *base)
{
	int	chk_base[256];
	int	i;

	i = 0;
	while (i < 256)
	{
		chk_base[i] = 0;
		i++;
	}
	while (*base)
	{
		if (chk_base[(int)*base] || *base == '+' || *base == '-')
			return (0);
		chk_base[(int)*base] = 1;
		base++;
	}
	return (1);
}

void	ft_print_number(int nbr, char *base, unsigned int base_n)
{
	char	number[50];
	int		nbr_s;
	int		tmp;

	if (!nbr)
		return ;
	tmp = nbr;
	nbr_s = 1;
	while (tmp >= base_n)
	{
		nbr_s++;
		tmp /= base_n;
	}
	number[nbr_s] = '\0';
	nbr_s--;
	while (nbr_s >= 0)
	{
		tmp = nbr;
		tmp %= base_n;
		number[nbr_s] = base[tmp];
		nbr = (nbr - tmp) / base_n;
		nbr_s--;
	}
	ft_putchar(number);
}

void	ft_putchar(char *str)
{
	while (*str)
		write(1, &*(str++), 1);
}
/* RECURSION FUNCTION SOLUTION */
/*
void	ft_print_number(int nbr, char *base, unsigned int base_n)
{
	if (!nbr)
		return ;
	ft_print_number(nbr / base_n, base, base_n);
	write(1, &base[nbr % base_n], 1);

}
*/
