/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlinde <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:17:42 by dlinde            #+#    #+#             */
/*   Updated: 2019/06/11 18:34:01 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(intmax_t num)
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

char		*ft_itoa(intmax_t n)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_size(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = len - 1;
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}
