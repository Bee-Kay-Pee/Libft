/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:37:12 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/05 13:33:31 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n);
{
	unsigned char	*p;
	//the unsigned char pointer is one byte so we can use to move through the
	// string one byte at a time
	size_t	i;
	/*i is the counter we will use to move along each byte. Must be of the same
	 *type as size_t as will be compared to n later*/
	i = 0;
	while (i < n)
		/*while loop for for length of n*/
	{
		p[i] = (unsigned char)c;
		/*int c is now of unsigned char type. We want n bytes of value c and
		 * unsigned chars are one byte where as an int is four bytes. Unsigned
		 * char pointer p will point to the string and i is the position
		 * in the string*/
		i++;
	}
	return (b);
}
/*BRIDIE EXPLANATION:This function writes n bytes of value c (converted to unsigned char) to the string pointed to by b.
 * For example, if c were 'A' and n were '5' it would fill the string with 'AAAAA'.
 * It returns a void pointer b. A void pointer is a generic type of pointer which can point to any data type.
 * A void pointer can then be type casted into a particular type later, e.g. a char type.*/ 
