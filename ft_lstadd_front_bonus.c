/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:51:53 by arajma            #+#    #+#             */
/*   Updated: 2024/11/01 15:26:52 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *list = NULL;

    int num1 = 37;
    int num2 = 13;

    t_list *node1 = ft_lstnew(&num1);
    t_list *node2 = ft_lstnew(&num2);

    ft_lstadd_front(&list, node1);
    printf("Added first node. Content: %d\n", *(int *)list->content);

    ft_lstadd_front(&list, node2);
    printf("Added second node. First element now: %d\n", *(int *)list->content);

    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return (0);
}*/
