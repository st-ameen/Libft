/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:30:14 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 15:30:15 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_init(int c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*fptr;
	char const	*lptr;
	char		*result;

	fptr = s1;
	lptr = s1 + ft_strlen(s1) - 1;
	while (fptr <= lptr && (ft_init(*fptr, set) || ft_init(*lptr, set)))
	{
		if (ft_init(*fptr, set))
			fptr++;
		if (ft_init(*lptr, set))
			lptr--;
	}
	result = (char *)malloc(lptr - fptr + 2);
	if (!result)
		return (NULL);
	ft_memcpy(result, fptr, lptr - fptr + 1);
	result[lptr - fptr + 1] = '\0';
	return (result);
}
/*
int	main(void)
{
	printf("%s \n", ft_strtrim("!! Hello ! World!!", "!"));
	return (0);
}*/
