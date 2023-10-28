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

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf(" %d ->", *(int*)lst->content);
		lst = lst->next;	
	}
	printf(" NULL\n");
}

int	main(void)
{
	t_list *head = NULL;
	int	i = 5;
	int	*data;

	while (i >= 1)
	{
		t_list *new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			fprintf(stderr, "Memory allocation failed\n");
			return (1);		
		}
		data = (int *)malloc(sizeof(int));
		if (data == NULL)
		{
			fprintf(stderr, "Memory allocation failed\n");
			exit(1);	
		}
		*data = i;
		new_node->content = data;
		new_node->next = NULL;
		ft_lstadd_front(&head, new_node);
		--i;
	}
	printf("Linked List: ");
	print_list(head);
	while (head != NULL)
	{
		t_list *temp = head;
		head = head->next;
		free(temp->content);
		free(temp);	
	}
	return (0);
}
