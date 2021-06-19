/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:00:09 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:00:10 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr(int nb);

int	main()
{
	ft_putnbr(-2000);
	return (0);
}

#include <unistd.h>

/*função que escreve */
void    ft_putchar(char c) {
    write(1, &c, 1);
}

void    ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10);
        nb = nb % 10;
    }
    if (nb < 10) ft_putchar(nb + 48);
} 