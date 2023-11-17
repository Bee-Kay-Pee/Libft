/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:34:34 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/07 14:08:41 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char *s;
	size_t	i;
	/*same description as memcpy*/

	d = dst;
	s = src;
	if (d < s)
	/* we want to start copying from the start of src and move upwards to 
	 * avoid overlap if dst is stored at a lower address than src.*/
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	/*if dst is stored at a higher address then the overlap region will be at the end
	 * so we need to travel backwards */
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			/*we need to -1 because len starts at position 1 not postion 0*/
			i--;
		}
	}
	return (dst);
}
