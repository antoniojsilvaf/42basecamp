#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	t_list	*tmp;
	int		list_size;

	list_size = 0;
	begin = NULL;
	
	if (size > 0)
	{
		begin = ft_create_elem(strs[list_size]);
		tmp = begin;
		list_size++;
		while (list_size < size)
		{
			tmp->next = ft_create_elem(strs[list_size]);
			list_size++;
			tmp = tmp->next;
		}
	}
	return (begin);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*newl;
	
	newl = malloc(sizeof(t_list));
	newl->next = 0;
	newl->data = data;

	return (newl);
}
