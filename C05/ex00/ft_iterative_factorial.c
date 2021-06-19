/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:04:46 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:04:47 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat_n;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		fat_n = nb;
		while (nb > 1)
		{
			fat_n = fat_n * (--nb);
		}
		return (fat_n);
	}
	return (0);
}
