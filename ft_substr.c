/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <pauldos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:29:03 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/16 17:14:17 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*str;

	i = 0;
	j = 0;
	if (start > (unsigned)ft_strlen(s))
		len = 0;
	if (len > (unsigned)ft_strlen(s) - start)
		len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "My name is Lucas";

	int	m;
	int	n;

	m = 3;
	n = 10;
	char *dest = ft_substr(str, m, n);
	printf("%s\n", dest);
	return (0);
}*/
