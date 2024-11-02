/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:26:14 by arajma            #+#    #+#             */
/*   Updated: 2024/10/25 15:26:16 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s + i);
		i++;
	}
}

/*void test_func(unsigned int i, char *c)
{
	if (*c != ' ')
	{
		*c = i % 24 + 'A';
	}
}

void	run_test(char *input, char *expected, void (*f)(unsigned int, char *))
{
	char	buffer[100];

	strcpy(buffer, input);
	ft_striteri(buffer, f);
	if (strcmp(buffer, expected) == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}
}

int	main(void)
{
	run_test("hello", "ABCDE", test_func);

	run_test("", "", test_func);

	run_test("a", "A", test_func);

	run_test("a b c", "A C E", test_func);

	run_test("!@#", "ABC", test_func);

	return (0);
}*/
