/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:27:55 by arajma            #+#    #+#             */
/*   Updated: 2024/11/02 14:49:08 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
void del(void *content)
{
    free(content);
    printf("Content deleted\n");
}

int main(void)
{
    t_list *list;
    t_list *second;
    t_list *third;
    int *num1, *num2, *num3;



    num1 = malloc(4);
    num2 = malloc(4);
    num3 = malloc(4);

	*num1 = 1; *num2 = 2; *num3 = 3;
    list = ft_lstnew(num1);
    second = ft_lstnew(num2);
    third = ft_lstnew(num3);
	ft_lstadd_back(&list, second);
	ft_lstadd_back(&list, third);

    printf("Initial values: %d %d %d\n",
            *(int*)list->content,
            *(int*)list->next->content,
            *(int*)list->next->next->content);

    ft_lstclear(&list, del);
    if (list == NULL)
        printf("List is now NULL\n");

    return (0);
}*/
