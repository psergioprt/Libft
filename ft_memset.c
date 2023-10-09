/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:26:27 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/09 11:49:10 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		n--;
	}
	return (s);
}
	/*OR
	 * while (n-- > 0)
	 * 	*(ptr++) = (unsigned char)c;
	*/
/*
#include <stdio.h>
#include <string.h>

int	main (void)
{
	char	n[50] = "Hello World";
	char	p[50] = "Hello World";
	
	puts ("MyFunc");
	puts(n);
	ft_memset (n, '-', 6);
	puts (n);
	puts ("------------------");
	puts ("SysFunc");
	puts(p);
	memset (p, '-', 6);
	puts (p);
	//https://stackoverflow.com/questions/18851835/
	//create-my-own-memset-function-in-c


	return (0);
}*/
