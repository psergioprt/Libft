int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;	
	}
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Myfunc: %c\n", ft_tolower(argv[1][0]));
		printf("Sysfunc: %c\n", tolower(argv[1][0]));
	}
	return (0);
}
