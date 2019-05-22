/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:12:42 by anazri            #+#    #+#             */
/*   Updated: 2019/05/22 16:44:44 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	int i;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return((char *)s+i);
		i++;
	}
	return (NULL);
}

int main () 
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;
	
	ret = strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
