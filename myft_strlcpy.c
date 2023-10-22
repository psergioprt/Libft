/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:47:01 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/22 14:00:12 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	myft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (!dest)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main (void)
{
	char	src[] = "1234567890";
	char	dst[50];
	unsigned int	n = 6;
	int	a = myft_strlcpy(dst, src, n);
	
	printf("%s * %d\n", dst, a);
	return (0);
}*/
