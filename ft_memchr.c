/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:11 by arajma            #+#    #+#             */
/*   Updated: 2024/10/26 16:53:43 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char s[] = "Hello";
	char t[] = "Hello";
	printf("%s, %s", (char *)ft_memchr((void *)s, 'o', 5),
			(char *)memchr((void *)t, 'o', 5));
	return (0);
}*/
