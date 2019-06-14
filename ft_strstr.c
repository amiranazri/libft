/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:53:20 by anazri            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/06/14 14:51:57 by anazri           ###   ########.fr       */
=======
/*   Updated: 2019/06/12 19:05:03 by anazri           ###   ########.fr       */
>>>>>>> 98baa23bb69e29cab71a997f242ae8be8b578a59
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n;
	size_t j;

	i = 0;
	n = 1;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while ((needle[n] != '\0') && (haystack[i + n] == needle[n]))
				n++;
			if (needle[n] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
