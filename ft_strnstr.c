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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] && (i < len))
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j] == '\0' && haystack[j + i] == '\0')
				return ((char *)needle);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)needle);
		i++;
	}
	return (NULL);
}
