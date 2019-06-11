/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:03:28 by anazri            #+#    #+#             */
/*   Updated: 2019/05/30 11:46:28 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
    size_t          n;
    unsigned char   *store;
    
    n = 0;
	store = malloc(size);
	if (store == NULL)
		return (NULL);

	ft_bzero(store, n);
	return (store);
}
