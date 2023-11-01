/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:29:20 by msarda            #+#    #+#             */
/*   Updated: 2023/10/31 21:29:33 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memset(void *b, int c, size_t len)
{
  size_t	i;
  char		*str;

  str = b;
  i = 0;
  while (i < len)
  {
    str[i] = c;
    i++;
  }
  return (b);
}
