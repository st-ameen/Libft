/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:27 by arajma            #+#    #+#             */
/*   Updated: 2024/10/27 12:09:36 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

//! dest || !src ||

/* int main()
 {
		char s[6];
		char t[6];
		printf("%s, %s", (char *)ft_memcpy((void *)s, "Hello", 5),
	(char *)memcpy((void *)t, "Hello", 5));
			return (0);
		}*/
