/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:53 by msarda            #+#    #+#             */
/*   Updated: 2023/11/12 12:10:41 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			d_len;
	size_t			s_len;

	s_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s_len);
	j = ft_strlen(dst);
	d_len = j;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && j + 1 < dstsize)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (d_len + s_len);
}
