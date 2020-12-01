/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:40:28 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/12 22:22:29 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*start_substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	substr = malloc(len + 1);
	if (substr == 0)
		return (0);
	start_substr = substr;
	while (s[start] != '\0' && start <= ft_strlen(s) && i < len)
	{
		*substr = s[start++];
		substr++;
		i++;
	}
	*substr = '\0';
	return (start_substr);
}
