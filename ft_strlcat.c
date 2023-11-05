/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:53 by msarda            #+#    #+#             */
/*   Updated: 2023/11/05 17:06:19 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	c_d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	i = 0;
	d_len = 0;
	c_d_len = 0;
	if (dstsize == 0)
		return (s_len);
	d_len = ft_strlen(dst);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	c_d_len = d_len;
	while (src[i] && d_len < dstsize - 1)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (s_len + c_d_len);
}
