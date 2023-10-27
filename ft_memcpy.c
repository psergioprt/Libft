/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:58:55 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/27 13:55:58 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>

int	main(void)
{
	char	ptr2[] = "Hello World Hello";
	char	ptr[50];
	char	s_ptr2[] = "Hello World Hello";
	char	s_ptr[50];
	size_t n = 10;

	ft_memcpy(ptr, ptr2, n);
	memcpy(s_ptr, s_ptr2, n);
	printf("Myfunc: %s\n", ptr);
	printf("Sysfunc: %s\n", s_ptr);
	return (0);
}*/
