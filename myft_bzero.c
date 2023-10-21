/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:55:10 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 23:49:48 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	myft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

/*#include <strings.h>

int	main(void)
{
	char	str[] = "My name is Lucas";
	char	str2[] = "My name is Lucas";

	myft_bzero(str, 4);
	bzero(str2, 4);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}*/
