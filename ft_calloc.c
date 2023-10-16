/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <pauldos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:24:30 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/16 11:32:40 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	*a;
	int	*b;

	i = 0;
	n = 5;
	a = (int *)ft_calloc(n, sizeof(int));
	b = (int *)calloc(n, sizeof(int));
	while (i < n)
	{
		printf("My: %d\t", a[i]);
		printf("Sys: %d\t\n", b[i]);
		i++;
	}
	free (a);
	return (0);
}*/
