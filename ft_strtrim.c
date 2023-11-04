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

// char    *ft_strtrim(char const *s1, char const *set)
// {
//     int start = 0;
// 		int j = 0;
// 		int len_1 = ft_strlen(s1);
// 		int len_2 = ft_strlen(set);
// 		int newlen = 0;
// 		char *dst;

// 		while((s1[start] == set[start]) && (start < len_2))
// 			start++;
// 		newlen = len_1 - start;
// 		while((s1[newlen] == set[j]) && (j < len_2))
// 		{
// 			newlen--;
// 			j++;
// 		}
// 		printf("%d\n", start);
// 		printf("%d", newlen);
//     return (dst);
// }
// int main()
// {
// 	ft_strtrim("  med  ", "  ");
// }