#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) abs(Value)

int	abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}

#endif
