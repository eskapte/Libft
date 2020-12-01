/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:40:31 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/11 01:16:05 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	p_dest = (unsigned char*)dest;
	p_src = (unsigned char*)src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (p_src < p_dest)
		while (++i <= n)
			p_dest[n - i] = p_src[n - i];
	else
		while (n-- > 0)
			*(p_dest++) = *(p_src++);
	return (dest);
}
