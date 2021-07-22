#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*new_el;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
	else 
		*begin_list = ft_create_elem(data);
}

t_list	*ft_create_elem(void *data)
{
	t_list *newl;

	newl = malloc(sizeof(t_list));
	newl->next = 0;
	newl->data = data;

	return (newl);
}

