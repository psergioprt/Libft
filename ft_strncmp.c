/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:15:16 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/27 14:20:38 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
//OR
/*	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		++i;
	}
	return (0);
}*/
/*
#include <string.h>

int	main(void)
{
	char		a[] = "test\200";
	char		b[] = "test\0";
	int	c = ft_strncmp(a, b, 6);

	printf("Myfunc: %d\n", c);
	printf("Sysfunc: %d", strncmp(a, b, 6));  
	return (0);
}*/
