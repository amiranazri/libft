/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:35:14 by anazri            #+#    #+#             */
/*   Updated: 2019/06/11 18:48:28 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *x;

	x = (unsigned char *)b;
	while (len != '\0')
	{
		len--;
		*x++ = (unsigned char)c;
		return (b);
	}
	return (0);
}
