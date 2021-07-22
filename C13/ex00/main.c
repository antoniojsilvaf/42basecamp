#include <stdio.h>
#include "ft_btree.h"

t_btree *btree_create_node(void *item);

int	main()
{
	t_btree *elem;

	elem = btree_create_node("teste");

	printf("%s\n", (char*)elem->item);
	return (0);
}
