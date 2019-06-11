/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:11:14 by anazri            #+#    #+#             */
/*   Updated: 2019/05/30 08:57:50 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_strcmp(const char *s1, const char *s2)
{
	int i;
	
	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;

	if (s1[i] != s2[i])
		return (s1 - s2);
	return (0);
}

int		main()
{
	printf("%d", ft_strcmp("Hello", "Hello"));
}
