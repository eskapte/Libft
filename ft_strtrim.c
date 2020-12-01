/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:16:14 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/19 19:57:37 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inlist(char const ch, char const *set)
{
	while (*set != '\0')
	{
		if (*set == ch)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	j;
	unsigned int	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (inlist(s1[i], set) && i < ft_strlen(s1))
		i++;
	if (i == ft_strlen(s1))
	{
		trimmed = ft_substr("", 0, 1);
		return (trimmed);
	}
	j = ft_strlen(s1) - 1;
	while (inlist(s1[j], set) && j >= i)
		j--;
	trimmed = (j >= i) ? ft_substr(s1, i, j - i + 1) : ft_substr("", 0, 1);
	return (trimmed);
}
