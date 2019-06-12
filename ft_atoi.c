/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:23:38 by anazri            #+#    #+#             */
/*   Updated: 2019/06/11 18:33:10 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool  is_digit(int c)
{
    if (c >= 48 && c <= 57)
        return (true);
	else
		return (false);
}

t_bool  is_space(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (true);
	else
		return (false);
}

int     ft_atoi(char *str)
{
    int num;
    int sign;
    int i;

    i = num = 0;
    sign = 1;

    while (is_space(str[i]))
        i++;
    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
            sign = -1;
        i++;
    }

    while (is_digit(str[i]))
    {
        num = (num * 10) + (str[i] - 48);
        i++;
    }

    return (num * sign);
}
