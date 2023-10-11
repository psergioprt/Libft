/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:37:53 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/11 10:02:46 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "My name is Lucas";
	char	a = 'n';
	char	*b = ft_strchr(str, a);

	printf("After '%c' we get '%s'", a, b);
	return (0);
}*/
