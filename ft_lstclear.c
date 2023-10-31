/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:13:55 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/31 09:57:44 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}

// Assuming you have a structure for your data
typedef struct s_data
{
    // Define your data structure here
    int value;
} t_data;

// Function to delete a single node in the list
void del_data(void *content)
{
    // Free any memory allocated for the data structure
    free(content);
}

int main()
{
    // Create a linked list and populate it with some data
    t_list *myList = NULL;

    // Example data
    t_data *data1 = malloc(sizeof(t_data));
    data1->value = 42;

    t_data *data2 = malloc(sizeof(t_data));
    data2->value = 84;

    // Add data to the list
    ft_lstadd_back(&myList, ft_lstnew(data1));
    ft_lstadd_back(&myList, ft_lstnew(data2));

    // Display the list content before clearing
    printf("Before clearing:\n");
    t_list *current = myList;
    while (current != NULL)
    {
        printf("%d\n", ((t_data *)(current->content))->value);
        current = current->next;
    }

    // Clear the list
    ft_lstclear(&myList, del_data);

    // Display the list content after clearing
    printf("\nAfter clearing:\n");
    current = myList;
    while (current != NULL)
    {
        printf("%d\n", ((t_data *)(current->content))->value);
        current = current->next;
    }

    return 0;
}
