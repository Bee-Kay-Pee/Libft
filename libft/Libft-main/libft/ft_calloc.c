/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <rpercy@42adel.org,au>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:06:26 by rpercy            #+#    #+#             */
/*   Updated: 2023/11/17 10:06:26 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
        size_t  b;
        void    *p;

        if (count == 0 || size == 0)
        {
                count = 1;
                size = 1;
        }
        b = count * size;
        p = malloc(b);
        if (p == NULL)
            return (NULL);
        else
            ft_bzero(p, b);
        return (p);
}