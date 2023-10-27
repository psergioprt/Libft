/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:54:57 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/27 13:54:48 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main(void)
{
	char s1[] = "My name is Lucas";
	char s2[] = "My Name is Lucas";
	int	myfunc = ft_memcmp(s1, s2, 5);
	int	sysfunc = memcmp(s1, s2, 5);

	printf("Myfunc: %d\n", myfunc);
	printf("Sysfunc: %d\n", sysfunc);
	return (0);
}*/
