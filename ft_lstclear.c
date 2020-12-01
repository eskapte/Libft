/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 06:25:55 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/15 20:05:24 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *node;
	t_list *rmv;

	rmv = *lst;
	while (rmv)
	{
		node = rmv->next;
		if (del)
			del(rmv->content);
		free(rmv);
		rmv = node;
	}
	*lst = NULL;
}
