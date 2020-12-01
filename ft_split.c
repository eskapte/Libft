/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:36:23 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/17 22:13:10 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		cnt_c(char const *s, char c)
{
	int		cnt;

	cnt = 0;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			cnt++;
		s++;
	}
	return (cnt);
}

static	int		len_p(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static	size_t	sub_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

static	void	free_splited(char **splited)
{
	int	i;

	i = 0;
	while (splited[i] != 0)
		free(splited[i++]);
	free(splited);
}

char			**ft_split(char const *s, char c)
{
	char	**splited;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(splited = (cnt_c(s, c)) ?
						(char**)malloc(sizeof(char*) * (cnt_c(s, c) + 2)) :
						(char**)malloc(sizeof(char*) * 2)))
		return (NULL);
	while (*s != '\0' && splited != 0)
	{
		len = len_p(s, c);
		if (len == 0 && s++)
			continue ;
		if (!(splited[i] = (char*)malloc(sizeof(char) * (len + 1))))
			free_splited(splited);
		s += (sub_strlcpy(splited[i], s, (len + 1)));
		if (*s != '\0')
			s++;
		i++;
	}
	splited[i] = 0;
	return (splited);
}
