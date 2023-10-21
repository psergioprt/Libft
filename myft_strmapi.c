/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergioprt <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:28:45 by psergiopr         #+#    #+#             */
/*   Updated: 2023/10/20 23:28:49 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;	
	}
	str[i] = '\0';
	return (str);
}

char	myfunc(unsigned int i, char str)
{
	printf("[%d] = %c\n", i, str);
	if (str >= 'a' && str <= 'z')
		return (str - 'a' + 'A');
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Before strmapi: %s\n", argv[1]);
		printf("After strmapi: %s\n", ft_strmapi(argv[1], myfunc));	
	}
	return (0);
}
