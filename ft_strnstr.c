/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:30:02 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/27 14:21:48 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		h = 0;
		while (*(big + h) == *(little + h)
			&& *(little + h) && h <= len)
		{
			if (!*(little + h + 1))
				return ((char *)big);
			h++;
		}
		big++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char 	str[] = "My name is Luka";
	char 	str2[] = "is";
	char 	*myfunc = ft_strnstr(str, str2, 10);

	printf("Myfunc: %s\n", myfunc);
	return (0);
}*/
