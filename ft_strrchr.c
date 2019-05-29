/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:49:53 by anazri            #+#    #+#             */
/*   Updated: 2019/05/23 12:03:07 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

char *ft_strrchr(const char *s, int c)
{
	int i;
	
	i = ft_strlen(s);

	while (s[i]  != '\0')
	{
		if (s[i] == c)
			return ((char *)s-i);
		i--;
	}
	return (NULL);
}

int		main()
{
	const char str[] = "hello.bitch.face.lol";
	const char ch = '.';
	char *ret;

	ret = strrchr(str, ch);
	printf("%s", ret);
	return (0);
}
