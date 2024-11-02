/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:45:04 by arajma            #+#    #+#             */
/*   Updated: 2024/11/01 15:22:15 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int main(void)
{
    int number = 42;
    t_list *node = ft_lstnew(&number);

    if (node)
    {
        printf("Node created successfully!\n");
        printf("Content: %d\n", *(int *)node->content);
        free(node);
    }
    else
        printf("Node creation failed!\n");
    return (0);
}*/
