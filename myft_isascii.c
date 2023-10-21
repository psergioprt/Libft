#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf ("%d", ft_isascii(argv[1][0]));
	}
	return (0);
}
