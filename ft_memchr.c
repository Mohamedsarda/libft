/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:39:56 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 18:18:00 by medsarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	var;

	i = 0;
	str = (unsigned char *)s;
	var = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == var)
			return (str + i);
		i++;
	}
	return (NULL);
}
