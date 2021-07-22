#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem("nothin");
	elem->next = *begin_list;
	elem->data = data;
	
	*begin_list = elem;
}
