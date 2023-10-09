/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:51:08 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/09 11:43:19 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Myfunc: %d\n", ft_strlen(argv[1]));
		printf("Sysfunc: %lu\n", strlen(argv[1]));
	}
	return (0);
}*/
