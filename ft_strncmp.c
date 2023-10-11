/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:15:16 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/11 12:21:11 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] != '\0' && i < n)
	{
		if (s1 < s2)
			return (1);
		if (s2 > s1)
			return (-1);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char		a[] = "computer";
	char		b[] = "computer";
	int	c = ft_strncmp(a, b, 7);

	printf("%d\n", c);
	return (0);
}
