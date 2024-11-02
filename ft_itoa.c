/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:27:40 by arajma            #+#    #+#             */
/*   Updated: 2024/10/27 14:49:40 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	signit(long *n, int *sign)
{
	if (*n < 0)
	{
		*n *= -1;
		*sign = 1;
		return (0);
	}
	*sign = 0;
	return (0);
}

static int	length(int len, long n)
{
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*thezero(void)
{
	char	*str;

	str = (char *)malloc(2);
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	num;

	num = n;
	if (num == 0)
		return (thezero());
	len = signit(&num, &sign);
	len = length(len, n);
	str = (char *)malloc(len + sign + 1);
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	if (sign)
		str[0] = '-';
	while (num)
	{
		str[--len + sign] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	size_t	num_tests;
	char	*result;

	int test_values[] = {0, 1, -1, 10, -10, 100, -100, 123, -123, 456, -456,
							789, -789, 1000, -1000, 1234, -1234, 5678, -5678,
								91011, -91011,
							121314, -121314, 151617, -151617, 181920, -181920,
								212223,
							-212223, 242526, -242526, 272829, -272829, 303132,
								-303132,
							333435, -333435, 363738, -363738, 394041, -394041,
								424344,
							-424344, 454647, -454647, 484950, -484950,
								2147483647,
							-2147483648};
	num_tests = sizeof(test_values) / sizeof(test_values[0]);
	for (size_t i = 0; i < num_tests; i++)
	{
		result = ft_itoa(test_values[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", test_values[i], result);
			free(result);
		}
		else
		{
			printf("ft_itoa(%d) failed to allocate memory\n", test_values[i]);
		}
	}
	return (0);
}
*/