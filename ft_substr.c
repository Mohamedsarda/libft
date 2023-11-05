/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:39:40 by msarda            #+#    #+#             */
/*   Updated: 2023/11/05 16:56:15 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*dst;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		start -= s_len;
	dst = (char *)malloc(len * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	while (s[start] && i < len)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
