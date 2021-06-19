/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:01:17 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:01:18 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count1;

	count1 = 0;
	size--;
	while (count1 < size)
	{
		temp = tab[count1];
		tab[count1] = tab[size];
		tab[size] = temp;
		count1++;
		size--;
	}
}
