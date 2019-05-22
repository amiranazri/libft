/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:07:02 by anazri            #+#    #+#             */
/*   Updated: 2019/05/22 11:19:02 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char *ret;
	
	if ((ret = (char *)malloc(ft_strlen(s1))))
		ret = ft_strcpy(ret, s1);
	return(ret);
}

int			main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strdup(av[1]));
	return (0);
}
