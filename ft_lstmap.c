/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauldos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:55:37 by pauldos-          #+#    #+#             */
/*   Updated: 2023/10/31 10:50:55 by pauldos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_elem = ft_lstnew(set);
		if (!new_elem)
		{
			del(set);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
// Function to print the content of a linked list
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s ", (char *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

// Function to free the content of a node
void free_content(void *content)
{
    free(content);
}

// Test the ft_lstmap function
int main()
{
    // Create a sample linked list
    t_list *lst = ft_lstnew(strdup("Hello"));
    lst->next = ft_lstnew(strdup("world"));
    lst->next->next = ft_lstnew(strdup("!"));

    // Print the original linked list
    printf("Original list: ");
    print_list(lst);

    // Define a function to append " test" to each string
    void *append_test(void *content)
    {
        char *str = strdup(content);
        strcat(str, " test");
        return str;
    }

    // Use ft_lstmap to create a new list with the modified content
    t_list *new_lst = ft_lstmap(lst, &append_test, &free_content);

    // Print the new linked list
    printf("Modified list: ");
    print_list(new_lst);

    // Free the original and modified lists
    ft_lstclear(&lst, free_content);
    ft_lstclear(&new_lst, free_content);

    return 0;
}*/
