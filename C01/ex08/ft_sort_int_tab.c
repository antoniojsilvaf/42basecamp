/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:01:24 by anjose-d          #+#    #+#             */
/*   Updated: 2021/06/19 01:01:25 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sort;
	int	count1;
	int	count2;

	count1 = 0;
	while (count1 < size - 1)
	{
		count2 = count1 + 1;
		while (count2 < size)
		{
			if (tab[count2] < tab[count1])
			{
				sort = tab[count1];
				tab[count1] = tab[count2];
				tab[count2] = sort;
			}
			count2++;
		}
		count1++;
	}
}
