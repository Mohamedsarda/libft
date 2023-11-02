/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:53 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 18:15:44 by medsarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst)
		return (ft_strlen(src));
	if (dstsize > 0)
	{
		while (src[i] && (i < dstsize))
		{
			dst[i] = src[i];
			i++;
		}
		if (i < dstsize)
			dst[i] = '\0';
	}
	return (ft_strlen(dst));
}
