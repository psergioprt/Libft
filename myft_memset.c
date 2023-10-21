/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:56:00 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 23:48:30 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*myft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "My name is Lucas";
	printf("Original string: %s\n", str);
	myft_memset(str, '+', 8);
	printf("After memset: %s\n", str);
	return (0);
}*/
