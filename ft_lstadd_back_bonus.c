/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:04:52 by arajma            #+#    #+#             */
/*   Updated: 2024/11/02 09:44:31 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*helper;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		helper = ft_lstlast(*lst);
		helper->next = new;
	}
}

/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *list = NULL;
	t_list *new1 = ft_lstnew("First");
	t_list *new2 = ft_lstnew("Second");
	t_list *new3 = ft_lstnew("Third");

	ft_lstadd_back(&list, new1);
	ft_lstadd_back(&list, new2);
	ft_lstadd_back(&list, new3);

	print_list(list); // Expected output: First -> Second -> Third -> NULL

	return (0);
}*/
