#ifndef FT_LIST_H
# define FT_LIST_H 

typedef struct s_list
{
	int				n;
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
