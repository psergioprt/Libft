/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:50:25 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/12 13:32:52 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *)s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "name .user";
	char a = '.';
	char *ret;
	char *sys_ret;

	ret = ft_memchr(str, a, 5);
	sys_ret = memchr(str, a, 5);


	printf("Myfunc: %s\n", ret);
	printf("Sysfunc: %s\n", sys_ret);
	return (0);
}
