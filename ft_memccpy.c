/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 06:51:36 by anazri            #+#    #+#             */
/*   Updated: 2019/06/13 16:19:54 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dptr;
	unsigned char	*sptr;

	i = 0;
	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	while (i < n)
	{
		dptr[i] = sptr[i];
		if (sptr[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

int	main()
{
	char dest[50];
	char src[50];

	ft_strcpy(dest, "blah");
	ft_strcpy(src, "boobs");
	
	ft_putstr(ft_memccpy(dest, src, 'o', 8));
}
