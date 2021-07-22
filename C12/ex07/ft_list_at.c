#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *ret;
	int		n;

	ret = begin_list;
	n = 0;
	if (nbr < 0)
		return (ret = 0);
	while (n < nbr)
	{
		if (!ret)
			return (ret = 0);
		ret = ret->next;
		n++;
	}
	return (ret);
}
