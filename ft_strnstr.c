/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:46:10 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 10:47:50 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*word;

	i = 0;
	if(ft_strlen(needle) == 0)
		return ((char *)haystack);
	if ((char *)needle == (char *)haystack)
		return ((char *)haystack);
	str = (char *)haystack;
	word = (char *)needle;
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
