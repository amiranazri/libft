/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:06:43 by anazri            #+#    #+#             */
/*   Updated: 2019/06/12 18:05:49 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int len;

	len = 0;
	if (s != NULL && f != NULL)
	{
		while (s[len])
		{
			f(len, s);
			s++;
			len++;
		}
	}
	return (0);
}
