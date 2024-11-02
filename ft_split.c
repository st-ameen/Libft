/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arajma <arajma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:40:37 by rihoy             #+#    #+#             */
/*   Updated: 2024/10/27 18:22:38 by arajma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	nbrword;
	int	in;

	nbrword = 0;
	in = 0;
	while (*s != '\0')
	{
		if (*s != c && in == 0)
		{
			in = 1;
			nbrword++;
		}
		if (*s == c)
			in = 0;
		s++;
	}
	return (nbrword);
}

char	*ft_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(((end - start) + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**split_it(char const *s, int start, char c, char **sent)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			sent[j] = ft_word(s, start, i);
			if (!sent[j++])
			{
				while (j-- > 0)
					free(sent[j]);
				free(sent);
				return (NULL);
			}
			start = -1;
		}
		i++;
	}
	sent[j] = 0;
	return (sent);
}

char	**ft_split(char const *s, char c)
{
	char	**sent;
	int		start;

	if (!s)
		return (NULL);
	sent = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!sent)
		return (NULL);
	start = -1;
	sent = split_it(s, start, c, sent);
	return (sent);
}
