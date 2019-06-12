/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:25:20 by anazri            #+#    #+#             */
/*   Updated: 2019/06/12 18:09:55 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;
	size_t ret;

	i = 0;
	ret = 0;
	len = 0;
	while (dst != '\0' && src[ret] != '\0')
		len++;
	ret++;
	if (dstsize <= len)
		ret = ret + dstsize;
	else
		ret = ret + len;
	while (src[i] != '\0' && len + 1 < dstsize)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ret);
}
