/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:46:10 by msarda            #+#    #+#             */
/*   Updated: 2023/11/05 16:59:37 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*word;

	i = 0;
	str = (char *)haystack;
	word = (char *)needle;
	if (ft_strlen(needle) == 0 || word == str)
		return (str);
	while (str[i] && (i < len))
	{
		j = 0;
		while (word[j] && (word[j] == str[i + j]) && (i + j < len))
			j++;
		if (word[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
