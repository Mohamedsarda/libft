/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:29:28 by msarda            #+#    #+#             */
/*   Updated: 2023/11/10 15:37:23 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (!lst)
		return ;
	while (*lst)
	{
		cur = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(cur, del);
	}
}
