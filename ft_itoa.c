/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medsarda <medsarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:35:44 by msarda            #+#    #+#             */
/*   Updated: 2023/11/05 17:11:23 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

static int	ft_num_len(long num)
{
	int		i;

	i = 0;
	if (num <= 0)
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
	long	num;

	num = n;
	n_len = ft_num_len(num);
	str = (char *)malloc((n_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[n_len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0 && n_len >= 0)
	{
		str[n_len] = '0' + (num % 10);
		num /= 10;
		n_len--;
	}
	return (str);
}
