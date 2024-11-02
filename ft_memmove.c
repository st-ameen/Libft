/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:34 by arajma            #+#    #+#             */
/*   Updated: 2024/10/27 12:11:19 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d && d < s + n)
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/*int main()
{
	char s[6];
	char t[6];
	printf("%s, %s", (char *)ft_memmove((void *)s, "Hello", 0),
			(char *)memmove((void *)t, "Hello", 0));
	return (0);
}*/
