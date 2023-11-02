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
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
  size_t i = 0;
  size_t d_len = 0;
  size_t s_len = 0;


  return (ft_strlen(src) + ft_strlen(dst));
}

int main()
{
	char d[10] = "012345";
	char s[] = "med sarda";
	// printf("%zu \n", ft_strlcat(d, s, 10));
	printf("%zu \n", strlcat(d, s, 10));
	printf("%s \n", d);
}
