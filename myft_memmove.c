/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:45:57 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 20:48:05 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	temp;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		temp = *s;
		*d = temp;
		s++;
		d++;
		n--;
	}
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char	dest[] = "My name is Lucas";
	char	dest2[] = "My name is Lucas";
	char	src[] = "Door";
	char	src2[] = "Door";

	myft_memmove (dest, src, 8);
	memmove (dest2, src2, 8);
	printf("Myfunc: %s\n", dest);
	printf("Sysfunc: %s\n", dest2);
	return (0);
}*/
