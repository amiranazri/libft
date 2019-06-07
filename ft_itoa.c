/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:38:40 by anazri            #+#    #+#             */
/*   Updated: 2019/06/07 08:57:20 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int		size;
	unsigned int		con;
	unsigned int		sign;

	size = 1;
	sign = 0;
	if (n < 0)
		sign = n * -1;
	con = n;
	while (con /= 10)
		i++;
	str = ft_strnew(size + sign);
	if (str == NULL)
		return (NULL);

}
