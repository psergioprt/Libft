/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:38:58 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 23:41:06 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 177)
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf ("%d", ft_isascii(argv[1][0]));
	}
	return (0);
}*/
