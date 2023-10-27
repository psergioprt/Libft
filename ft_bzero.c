/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:40:59 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/27 13:35:24 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
/*
#include <strings.h>

int	main(void)
{
	char n[50];
	char p[50];

	int	i;
	int	j;

	ft_bzero(n, 50);
	while (i < 50)
	{
		printf("%d", n[i]);
		i++;
	}
	putchar('\n');
	puts("----------------");
	printf("%s", n);
	bzero(p, 50);
	while (j < 50)
	{
		printf("%d", n[j]);
		j++;
	}
	return (0);
}*/
