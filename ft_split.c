/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:14:44 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 10:23:38 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_words_counter(char const *str, char c)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	words = 0;
	is_word = 0;
	while (str[i])
	{
		if (str[i] == c)
			is_word = 0;
		else if (!is_word)
		{
			words++;
			is_word = 1;
		}
		i++;
	}
	return (words);
}

static int	ft_word_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	**ft_putword(char const *str, char c, int words, char **dst)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = 0;
	while (i < words)
	{
		while (*str == c)
			str++;
		len = ft_word_len(str, c);
		dst[i] = (char *)malloc(len * sizeof(char) + 1);
		if (!dst[i])
			return (NULL);
		j = 0;
		while (j < len)
			dst[i][j++] = *str++;
		dst[i][j] = '\0';
		i++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		words;

	words = ft_words_counter(s, c);
	dst = (char **)malloc(words * sizeof(char *) + 1);
	if (!dst)
		return (NULL);
	dst = ft_putword(s, c, words, dst);
	return (dst);
}
