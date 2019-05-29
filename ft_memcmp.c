/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:08:47 by anazri            #+#    #+#             */
/*   Updated: 2019/05/28 10:17:31 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ptr1; 
	const unsigned char *ptr2;
	
	ptr1 = s1;
	ptr2 = s2;
	
	if (s1 == s2)
		return (0);

	while (s1 != '\0')
	{
		n--;
		if (ptr1 != ptr2)
			return *ptr1 - *ptr2;
		else
			ptr1++, ptr2++;
		return (0);
	}
	return (0);
}

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
