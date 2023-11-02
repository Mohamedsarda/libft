/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:53 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 10:58:45 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	i = 0;
	if (!dst)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	if (dstsize >= 0)
	{
		while (src[i] && (i < dstsize))
		{
			dst[dst_len] = src[i];
			i++;
			dst_len++;
		}
		dst[dst_len] = '\0';
	}
	return (ft_strlen(dst));
}
