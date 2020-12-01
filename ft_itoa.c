/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:03:56 by lhawick           #+#    #+#             */
/*   Updated: 2020/11/12 19:24:25 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*num;

	len = num_len(n);
	num = malloc(len + 1);
	if (!num)
		return (0);
	num[len--] = '\0';
	if (n < 0)
		num[0] = '-';
	while (len >= 0 && num[len] != '-')
	{
		if (n < 0)
			num[len--] = -(n % 10) + '0';
		else
			num[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}
