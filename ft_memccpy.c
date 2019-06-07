/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 06:51:36 by anazri            #+#    #+#             */
/*   Updated: 2019/06/07 08:58:23 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *dptr;
	unsigned char *sptr;

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

int    main(void)
{
	char *msg = "This is the string: not copied";
	char buffer[80];
	memset(buffer, '\0', 80);
	ft_memccpy(buffer, msg, 'i', 80);
	printf("%s\n", buffer);
}
