/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:35:44 by msarda            #+#    #+#             */
/*   Updated: 2023/11/01 11:39:41 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

static int	ft_num_len(int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*str;

	n_len = ft_num_len(n);
	str = malloc(n_len + 1);
	str[n_len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0 && n_len >= 0)
	{
		str[n_len] = '0' + (n % 10);
		n /= 10;
		n_len--;
	}
	return (str);
}
