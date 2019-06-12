/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:18:29 by anazri            #+#    #+#             */
/*   Updated: 2019/06/12 18:21:47 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*con;

	i = 0;
	while (s != NULL && f != NULL)
	{
		if (!(con = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (*s)
		{
			con[i] = f(*s);
			s++;
			con++;
		}
	}
	return (con);
}
