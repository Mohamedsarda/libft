/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:40:37 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 10:42:02 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	new_len;
	size_t	i;
	char	*dst;

	s1_len = ft_strlen(s1);
	i = 0;
	while (i < s1_len && ft_strchr(set, s1[i]))
		i++;
	new_len = s1_len - i;
	while (new_len > 0 && ft_strchr(set, s1[i + new_len - 1]))
		new_len--;
	dst = (char *)malloc(new_len + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1 + i, new_len);
	return (dst);
}
