/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:03:17 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/27 14:14:54 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i + j < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
/*
int	main (void)
{
	char	str1[] = "My name is Luka ";
	char	str2[] = "And i am a musitian";
	unsigned int	size = 40;
	int	a = myft_strlcat(str1, str2, size);

	printf("%s * %d\n", str1, a);
	return (0);
}*/
