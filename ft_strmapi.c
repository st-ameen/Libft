/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:29:44 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 15:29:45 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char capitalize_even(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (char)toupper(c);
	}
	else
	{
		return (char)tolower(c);
	}
}

void	test_ft_strmapi_capitalize_even(void)
{
	char	*result;

	result = ft_strmapi("aBcDeF", capitalize_even);
	if (strcmp(result, "AbCdEf") == 0)
	{
		printf("Test 1: OK\n");
	}
	else
	{
		printf("Test 1: KO\n");
	}
	free(result);
	result = ft_strmapi("", capitalize_even);
	if (strcmp(result, "") == 0)
	{
		printf("Test 2: OK\n");
	}
	else
	{
		printf("Test 2: KO\n");
	}
	free(result);
	result = ft_strmapi("ABCDEF", capitalize_even);
	if (strcmp(result, "AbCdEf") == 0)
	{
		printf("Test 3: OK\n");
	}
	else
	{
		printf("Test 3: KO\n");
	}
	free(result);
	result = ft_strmapi("abcdef", capitalize_even);
	if (strcmp(result, "AbCdEf") == 0)
	{
		printf("Test 4: OK\n");
	}
	else
	{
		printf("Test 4: KO\n");
	}
	free(result);
	result = ft_strmapi("a!b@c#d$", capitalize_even);
	if (strcmp(result, "A!B@C#D$") == 0)
	{
		printf("Test 5: OK\n");
	}
	else
	{
		printf("Test 5: KO\n");
	}
	free(result);
}

int	main(void)
{
	test_ft_strmapi_capitalize_even();
	return (0);
}*/
