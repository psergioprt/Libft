/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:27:34 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/11 10:51:14 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		p = ((char *)&s[i]);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Mein name ist Paul";
	char	a = 'i';
	char	*b = ft_strrchr(str, a);

	printf("After the last '%c' we get '%s'", a, b);
	return (0);
}*/
