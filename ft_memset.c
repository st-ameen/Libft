/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:42 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 15:28:43 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i++] = c;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[] = "Hello";
	char	t[] = "Hello";

	ft_memset((void *)s, 65, 5);
	memset((void *)t, 65, 5);
	printf("%s, %s", s, t);
	return (0);
}
*/
