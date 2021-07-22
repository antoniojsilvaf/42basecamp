#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*newel;

	newel = (t_btree*)malloc(sizeof(t_btree));
	newel->item = item;
	newel->left = 0;
	newel->right = 0;
	return (newel);
}
