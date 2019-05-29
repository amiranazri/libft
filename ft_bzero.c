/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:39:20 by anazri            #+#    #+#             */
/*   Updated: 2019/05/29 09:50:14 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

int main () 
{
	char str[] = "mango tango";
	int c = 8;
	
	ft_bzero(str, c);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
	return(0);
}
