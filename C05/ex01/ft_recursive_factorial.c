/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:04:50 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:04:51 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fat_n;

	fat_n = nb;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		fat_n *= ft_recursive_factorial(nb - 1);
		return (fat_n);
	}
	return (0);
}
