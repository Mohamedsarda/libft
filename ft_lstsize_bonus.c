/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:17:01 by msarda            #+#    #+#             */
/*   Updated: 2023/11/09 13:31:00 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		size;

	if (!lst)
		return (0);
	cur = lst;
	size = 0;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return (size);
}
