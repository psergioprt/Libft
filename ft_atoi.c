/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:57:04 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/13 11:54:25 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * sign);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Myfunc: %d\n", ft_atoi(argv[1]));
		printf("Sysfunc: %d\n", atoi(argv[1]));
	}
	return (0);
}*/
