/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:08:47 by anazri            #+#    #+#             */
/*   Updated: 2019/06/11 18:43:39 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (s1 == s2)
		return (0);
	while (s1 != '\0')
	{
		n--;
		if (ptr1 != ptr2)
			return (*ptr1 - *ptr2);
		else
		{
			ptr1++;
			ptr2++;
		}
		return (0);
	}
	return (0);
}
