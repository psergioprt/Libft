int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;	
	}
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Myfunc: %c\n", ft_toupper(argv[1][0]));
		printf("Sysfunc: %c\n", toupper(argv[1][0]));
	}
	return (0);
}
