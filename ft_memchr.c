/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:40:29 by anazri            #+#    #+#             */
/*   Updated: 2019/06/11 18:39:36 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *x;

	x = (unsigned char *)s;
	while (n != '\0')
	{
		n--;
		if (*x != (unsigned char)c)
			x++;
		else
			return (x);
		return (0);
	}
	return (0);
}
