/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <pauldos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:43:26 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/17 11:48:14 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s, 1);
		i++;
	}
	write (fd, "\n", 1);
}

int	main(void)
{
	char	s[] = "Lucas";
	ft_putendl_fd(s, 1);
	return (0);
}
