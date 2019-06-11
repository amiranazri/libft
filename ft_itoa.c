/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:17:42 by dlinde            #+#    #+#             */
/*   Updated: 2019/05/30 13:50:15 by dlinde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long num)
{
	size_t	size;

	size = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		size++;
	}
	while (num > 0)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	size_t	len;
	long	num;

	num = n;
	len = ft_size(num);
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = len - 1;
	if (num == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[i] = (num % 10) + 48;
		num /= 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
