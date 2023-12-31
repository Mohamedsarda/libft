/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:14:44 by msarda            #+#    #+#             */
/*   Updated: 2023/11/05 17:10:18 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//counting how many words in a strings based on the spliter "char c"
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

//getting the lenght of a single word
static int	ft_word_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

//freeing the allocation if it fails from 0 -> i
static void	*ft_free(char **arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}
//puting word into the **arr

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
			return (ft_free(dst, i));
		j = 0;
		while (j < len)
			dst[i][j++] = *str++;
		dst[i][j] = '\0';
		i++;
	}
	dst[i] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words_counter(s, c);
	dst = (char **)malloc((words + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	dst = ft_putword(s, c, words, dst);
	return (dst);
}
