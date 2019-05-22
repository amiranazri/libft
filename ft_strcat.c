/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:45:06 by anazri            #+#    #+#             */
/*   Updated: 2019/05/22 15:59:51 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t len;
	int i;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return(s1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_strcat(av[1], av[2]));
}
