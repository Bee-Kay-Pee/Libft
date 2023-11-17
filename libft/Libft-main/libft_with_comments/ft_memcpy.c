/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:19:35 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/07 10:42:38 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n);
{
	unsigned char	*d;
		/* unsigned char type pointer is one byte so we can use to
		 * move counnter i through the string one byte at a time*/
	const unsigned char	*s;
		/*'const to make a read-only variable as we aren't altering src*/
	size_t	i;
		/*size_t to compare with n as is the size of an object*/

	d = dst;
	s = scr;
	/*pointers d and s now point to dst and src*/
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
	/*return (void) pointer to dst string */
}
