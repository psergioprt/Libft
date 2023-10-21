#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;

	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char	dest[] = "My name is Lucas";
	char	src[] = "Door";
	char	dest2[] = "My name is Lucas";
	char	src2[] = "Door";

	myft_memcpy(dest, src, 5);
	memcpy(dest2, src2, 5);
	printf("Myfunc: %s\n", dest);
	printf("Sysfunc: %s\n", dest2);
	return (0);
}*/
