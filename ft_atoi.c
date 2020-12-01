/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:24:48 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/12 19:21:26 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long			res;
	int					min;

	min = 0;
	res = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	min = (*nptr == '-' && nptr++) ? 1 : min;
	if (*nptr == '+' && !min)
		nptr++;
	while (*nptr != '\0' && (*nptr >= 48 && *nptr <= 57))
	{
		res = res * 10 + (*nptr - 48);
		nptr++;
	}
	if (min)
		res = -res;
	if (res > 2147483647)
		return (min ? 0 : -1);
	if (res < -2147483648)
		return (min ? 0 : -1);
	return (res);
}
