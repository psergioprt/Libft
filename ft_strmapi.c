/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <pauldos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:43:16 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/18 12:27:22 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
}

int main()
{
 	char str[10] = "hello.";
 	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
}
