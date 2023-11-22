/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:26:23 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/07 10:19:09 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void ft_bzero(void *s, size_t n);
{
	unsigned char *p
	/*unsigned char pointer is one byte  so we can move
	 * through the string one byte at a time.*/
	size_t	i;
	/*the counter to move along each byte to be compared to n*/

	p = s;
	/*sets insigned char pointer p to point to the same string as void pointer s */
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		/*fill the string with zeros*/
		i++;
	}
	return ;
}
