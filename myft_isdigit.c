/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:46:13 by pauldos-         #+#    #+#             */
/*   Updated: 2023/10/21 23:46:50 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_isdigit(*argv[1]));
	}
	return (0);
}*/
