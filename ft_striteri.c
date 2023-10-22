/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergioprt <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:21:47 by psergiopr         #+#    #+#             */
/*   Updated: 2023/10/22 19:28:32 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

void	myfunc(unsigned int i, char *c)
{
	printf("[%d] * %c\n", i, *c);
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
}
/*
int	main(void)
{
	char str[] = "My name is Luka 123";
	printf("Original string: %s\n", str);
	ft_striteri(str, myfunc);
	printf("Striteri string: %s\n", str);
	return (0);

}
*/
//or (*f)(i, &s[i]);
