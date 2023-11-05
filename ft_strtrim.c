/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:40:37 by msarda            #+#    #+#             */
/*   Updated: 2023/11/04 16:45:49 by medsarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
   int start = 0;
   int i = 0;
   int end = ft_strlen(s1);

  if (!s1 || !set)
		return (NULL);
   while(s1[start] && ft_strchr(set, s1[start]))
      start++;
    while(end > start && ft_strchr(set, s1[end - 1]))
      end--;
    char *str = (char *)malloc((end - start + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while(start < end)
    {
      str[i] = s1[start];
      i++;
      start++;
    }
    str[i] = '\0';
    return (str);
}
