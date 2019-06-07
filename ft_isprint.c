/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:16:16 by anazri            #+#    #+#             */
/*   Updated: 2019/06/07 08:56:23 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isprint(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        return(1);
    }
    while(str[i])
    {
        if(!((str[i]) >= 0) && (str[i] <= 31) &&(str[i] = 127))
            return(0);
    }
    return(1);
}
