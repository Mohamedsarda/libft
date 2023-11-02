/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:43 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 11:00:32 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dst;

	i = ft_strlen(s1);
	dst = (char *)malloc(i + 1);
	if (!dst)
		return (NULL);
	dst[i] = '\0';
	i--;
	while (i >= 0)
	{
		dst[i] = s1[i];
		i--;
	}
	return (dst);
}
