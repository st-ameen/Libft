/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:21 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 21:26:44 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n && p1[i] == p2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}

/*int main()
{
	printf("%d, %d", ft_memcmp((const void *)"hellof", (const void *)"hellof",
			9), memcmp((const void *)"hellof", (const void *)"hellof", 9));
	return (0);
}*/
