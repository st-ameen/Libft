/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:29:23 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 15:29:24 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0 || dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
int	main(void)
{
	char	src[] = "Hello World";
	char	dst[20];
	size_t	ret;

	ret = ft_strlcat(dst, src, 12);
	printf("%s \n", dst);
	printf("%zu \n", ret);
	return (0);
}
*/
