/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:59:22 by anazri            #+#    #+#             */
/*   Updated: 2019/06/12 18:55:43 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 1;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[n] != '\0' && haystack[i + n] == needle[n]
					&& (size_t)(i + n) < len)
				n++;
			if (needle[n] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
