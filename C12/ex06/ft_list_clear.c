#include <stdio.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*to_remove;
	
	tmp = begin_list;
	while (tmp != NULL) 
	{
		to_remove = tmp;
		tmp = tmp->next;
		free_fct(to_remove->data);
		free_fct(to_remove);

	}
}
