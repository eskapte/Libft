/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 05:46:40 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/17 18:14:44 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p_newel;

	p_newel = (t_list *)malloc(sizeof(t_list));
	if (p_newel)
	{
		p_newel->content = content;
		p_newel->next = NULL;
	}
	return (p_newel);
}
