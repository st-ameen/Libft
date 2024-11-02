/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:30:20 by arajma            #+#    #+#             */
/*   Updated: 2024/10/26 18:29:01 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*motta;
	size_t	lenti;

	lenti = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= lenti)
		return (ft_strdup(""));
	if (start + len > lenti)
		len = lenti - start;
	motta = (char *)malloc(len + 1);
	if (!motta)
		return (NULL);
	ft_memcpy(motta, s + start, len);
	motta[len] = '\0';
	return (motta);
}
/*int main(void)
{
	char	*str;
	char	*sub;

	str = ft_strdup("1");
	sub = ft_substr(str, 42, 42000000);
	printf("%s \n", sub);
	free(sub);
	return (0);
}
*/
