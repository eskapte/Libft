/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:26:37 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/11 00:38:10 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;

	p_dest = dest;
	i = 0;
	if (p_dest == src)
		return (dest);
	while (i < n)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			*p_dest = ((unsigned char*)src)[i];
			p_dest++;
			return ((void*)(p_dest));
		}
		*p_dest = ((unsigned char*)src)[i];
		i++;
		p_dest++;
	}
	return (0);
}
