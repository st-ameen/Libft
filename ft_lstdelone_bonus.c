/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:17:06 by arajma            #+#    #+#             */
/*   Updated: 2024/11/02 09:52:46 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void del(void *content)
{
    free(content);
    printf("Content deleted\n");
}

int main(void)
{
    t_list *node;
    int    *number;

    number = malloc(sizeof(int));
    *number = 42;

	node = ft_lstnew((void*)number);
    printf("Value before deletion: %d\n", *(int *)node->content);

    ft_lstdelone(node, del);

    return (0);
}*/
