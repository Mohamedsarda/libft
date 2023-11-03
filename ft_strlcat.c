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


size_t    ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
  size_t i = 0;
  size_t d_len = 0;
  size_t c_d_len = 0;
  size_t s_len = 0;

  s_len = ft_strlen(src);
  if(!dst || dstsize == 0)
    return (s_len);
  d_len = ft_strlen(dst);
  if (dstsize <= d_len)
    return (s_len + dstsize);
  c_d_len = d_len;
  while(src[i] && d_len < dstsize - 1)
  {
    dst[d_len] = src[i];
    d_len++;
    i++;
  }
    // if(d_len < dstsize)
  dst[d_len] = '\0';
  return (s_len + c_d_len);
}

// int main()
// {
// 	char d[] = "pqrstuvwxyz";
// 	char *s = "abcd";

// 	// printf("%zu \n", ft_strlcat(d, s, 20));
// 	printf("%zu \n", strlcat(d, s, 20));
//   printf("s : %s \n", s);
//   printf("d : %s \n", d);
// }
