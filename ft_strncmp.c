/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:58:30 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/11 19:08:02 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char*)s1;
	p_s2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (*p_s1 == *p_s2 && *p_s1 != '\0' && *p_s2 != '\0')
		{
			p_s1++;
			p_s2++;
			i++;
			continue ;
		}
		else
			return (*p_s1 - *p_s2);
	}
	return (0);
}
