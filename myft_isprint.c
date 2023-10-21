/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:35:09 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 23:51:19 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <ctype.h>

int	main (void)
{
	char c;
	       
	c = '\t';
	printf ("%d\n", ft_isprint(c));
	printf ("%d\n", isprint(c));
	return (0);
}*/
