#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_isalnum(*argv[1]));	
	}
	return (0);
}
