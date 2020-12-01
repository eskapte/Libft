/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:50:01 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/10 23:57:26 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;

	if (src == 0 && dest == 0)
		return (0);
	p_dest = dest;
	i = 0;
	while (i < n)
	{
		p_dest[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dest);
}
