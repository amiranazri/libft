/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:53:20 by anazri            #+#    #+#             */
/*   Updated: 2019/05/29 13:58:46 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t n;

	i = 0;
	n = 1;
	if (!needle)
		return ((char *)haystack);
	
	while (haystack[i] != '\0')
	{
		if (haystack [i] == needle[0])
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
