/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 03:04:49 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/17 22:13:52 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	if (size <= ft_strlen(dst) || size <= 0)
		return (ft_strlen(src) + size);
	else
		len = ft_strlen(src) + ft_strlen(dst);
	while (dst[i] && i < (size - 1) && dst[i])
		i++;
	while (src[j] && i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (!len)
		len = i;
	dst[i] = '\0';
	return (len);
}
