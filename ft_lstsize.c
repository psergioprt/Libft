/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:10:50 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/28 12:24:50 by psergiopr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new_node;
	int	size;

	new_node = lst;
	size = 0;
	if (lst == NULL)
		return (0);
	while (new_node != NULL)
	{
		size++;
		new_node = new_node->next;
	}
	return (size);
}
