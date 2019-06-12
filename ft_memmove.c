/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:08:06 by anazri            #+#    #+#             */
/*   Updated: 2019/06/11 18:45:52 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*t;
	unsigned const char	*d;
	unsigned const char	*s;

	t = 0;
	d = dst;
	s = src;
	while (t[len])
	{
		memcpy(t, src, len);
		memcpy(dst, t, len);
		return (dst);
	}
	return (0);
}
