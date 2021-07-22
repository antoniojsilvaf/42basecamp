#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments\n"
//# define EVEN(nbr) (!(nbr&1)) using macro and bitwise instead of function EVEN
typedef int	t_bool;

int	EVEN(int n)
{
	if (n % 2 == 0)
		return (1);
	else
		return (0);
}

#endif
