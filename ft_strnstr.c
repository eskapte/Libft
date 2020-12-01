/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 03:26:37 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/17 20:20:40 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		p_ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
			continue ;
		}
		else
			return (*s1 - *s2);
	}
	if (*s2 != '\0')
		return (-1);
	return (0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0' || little == 0)
		return ((char*)big);
	while (i < len)
	{
		if (*big == *little)
		{
			if (p_ft_strncmp((char*)big, (char*)little, (len - i)) == 0)
				return ((char*)big);
		}
		big++;
		i++;
	}
	return (0);
}
