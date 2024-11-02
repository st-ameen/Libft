/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:29:59 by arajma            #+#    #+#             */
/*   Updated: 2024/10/27 11:59:17 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (!little || len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && (i + j) < len)
		{
			j++;
		}
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char	*str;
	char	*str2;
	char	*empty;

	str = "Hello World!";
	str2 = "World";
	empty = (char *)"";
	printf("%s \n", ft_strnstr(empty, "", 0));
	return (0);
}
*/
