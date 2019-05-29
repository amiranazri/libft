/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:55 by anazri            #+#    #+#             */
/*   Updated: 2019/05/23 15:31:27 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sting.h>

char	*strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	dest = (char *)malloc(sizeof(char)*n)
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src;
			i++;
		}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main()
{
}
