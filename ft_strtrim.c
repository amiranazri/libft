/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:44:41 by anazri            #+#    #+#             */
/*   Updated: 2019/06/12 19:08:52 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (true);
	else
		return (false);
}

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (s[i] && ft_is_space(s[i]))
		i++;
	while (ft_is_space(s[len]))
		len--;
	return (ft_strsub(s, i, i - len));
}
