int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
	printf("Myfunc: %d\n", ft_isprint(argv[1][0]));
	printf("Sysfunc: %d\n", isprint(argv[1][0]));
	}
	return (0);
}
