#!/bin/bash

gcc -c -Wall -Wextra -Werror ft_*.c
ar -rc libft.a ft_*.o
rm ft_*.o
