/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:58:01 by anazri            #+#    #+#             */
/*   Updated: 2019/06/14 23:03:24 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	/*************************\
	|* Boolean Function Test *|
	\*************************/
	if (ac == 2)
	{
		(ft_isdigit(av[1][0])) ? ft_putendl("It is a digit") : 0;
		(ft_isalpha(av[1][0])) ? ft_putendl("It is an alphabet") : 0;
		(ft_isalnum(av[1][0])) ? ft_putendl("It is a number or an alphabet") : 0;
		(ft_isascii(av[1][0])) ? ft_putendl("It is an ascii value.") : 0;
		(ft_isprint(av[1][0])) ? ft_putendl("It is printable.") : 0;
	}
	/*************************\
	|* 		Strings		 	  *|
	\*************************/

}
