/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 06:13:55 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/19 18:01:21 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if (!lst)
		return ;
	if (new)
	{
		if (!(list = *lst))
			*lst = new;
		else
		{
			while (list->next)
				list = list->next;
			list->next = new;
		}
	}
}
