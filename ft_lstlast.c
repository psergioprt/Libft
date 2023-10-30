/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:29:49 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/30 10:55:33 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*head = NULL;
	t_list	*ret;
	int	i = 1;
	int	*data;

	while (i <= 5)
	{
		t_list *new_node = (t_list *)malloc(sizeof(t_list));
		data = (int *)malloc(sizeof(int));
		*data = i;
		new_node->content = data;
		new_node->next = NULL;
		ft_lstadd_front(&head, new_node);
		printf("%d\n", *(int*)head->content);
		++i;
	}

	ret = ft_lstlast(head);
	printf("%d", *(int*)ret->content);
	return (0);
}*/
/*
void    printList(t_list *head)
{
        while (head != NULL)
        {
                printf("%p -> ", head->content);
                printf("%d\n", *(int *)head->content); 
                head = head->next;
        }
        printf("NULL\n");

}

int     main(void)
{
        int     data1 = 42;
        int     data2 = 84;
	t_list	*ret;

        t_list *node1 = ft_lstnew(&data1);
        t_list *node2 = ft_lstnew(&data2);
	t_list	ret = ft_lstlast(&data1);

        node1->next = node2;

        printf("Linked list:\n");
        printList(node1);
	printf("%d", *(int*)ret->content);
	
        free(node1);
        free(node2);
}
*/
/*#include <stdio.h>

int		main(void)
{
	char	str[] = "test";

	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	t_list	*ret;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem4 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem5 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem6 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = elem5;
	elem5->next = elem6;
	elem6->next = NULL;

	elem6->content = (void *)str;
	ret = ft_lstlast(elem1);
	printf("\n%s\n", (char *)ret->content);
}*/
