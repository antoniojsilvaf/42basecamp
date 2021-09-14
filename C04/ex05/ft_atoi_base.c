/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjose-d <anjose-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 01:04:32 by anjose-d          #+#    #+#             */
/*   Updated: 2021/09/14 17:14:39 by anjose-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_verify(char *base);
int	ft_isspace(char c);
int	ft_num_conversion(char *strn, char *base, int base_n);

int	ft_atoi_base(char *str, char *base)
{
	int	base_n;
	int	sign;
	int	ret;

	sign = 1;
	ret = 0;
	while (base[base_n])
		base_n++;
	if (base_n < 2 || !ft_base_verify(base))
		return (0);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	ret = ft_num_conversion(str, base, base_n);
	return (ret * sign);
}

int	ft_base_verify(char *base)
{
	char	chk_base[256];
	int		i;

	while (i < 256)
	{
		chk_base[i] = 0;
		i++;
	}
	while (*base)
	{
		if (chk_base[(int)*base] || *base == '+' || *base == '-' || \
			ft_isspace(*base))
		{
			return (0);
		}
		chk_base[(int)*base] = 1;
		base++;
	}
	return (1);
}

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_num_conversion(char *strn, char *base, int base_n)
{
	int	i;
	int	symbol;
	int	ret;

	ret = 0;
	while (*strn)
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == *strn)
			{
				symbol = i;
			}
			i++;
		}
		ret *= base_n;
		ret += symbol;
		strn++;
	}
	return (ret);
}

int	main(void)
{
	int	n;

	n = ft_atoi_base("10", "012345678");
	printf("%d\n", n);
	return (0);
}
