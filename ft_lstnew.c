/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:17:50 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/30 10:57:48 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*void	printList(t_list *head)
{
	while (head != NULL)
	{
		printf("%p -> ", head->content);
		printf("%d\n", *(int *)head->content); 
		head = head->next;
	}
	printf("NULL\n");

}

int	main(void)
{
	int	data1 = 42;
	int	data2 = 84;

	t_list *node1 = ft_lstnew(&data1);
	t_list *node2 = ft_lstnew(&data2);

	node1->next = node2;

	printf("Linked list:\n");
	printList(node1);
	free(node1);
	free(node2);
}*/
