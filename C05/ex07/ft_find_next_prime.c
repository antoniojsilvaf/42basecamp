/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:05:18 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:05:19 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	div_c;
	int	i;

	div_c = 0;
	i = 1;
	if (nb > 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				div_c += 1;
			i++;
		}
	}
	if (div_c == 1)
		return (1);
	else
		return (0);
}
