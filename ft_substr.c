/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:39:40 by msarda            #+#    #+#             */
/*   Updated: 2023/11/02 10:40:26 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    char    *dst;
	unsigned int	s_len;

    dst = (char *)malloc(len * sizeof(char) + 1);
    if (!dst)
        return (NULL);
    i = 0;
	s_len = ft_strlen(s);
    if (len <= s_len)
    {
        while (s[start] && (i < len))
        {
            dst[i] = s[start];
            i++;
            start++;
        }
        dst[i] = '\0';
        return (dst);
    }
    return (NULL);
}
