/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:32:48 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/21 11:59:58 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	len = ft_strchr(s);
	/* sets the variable len to the length of the string */
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char))
		/*  if the value at postition i is the same value as c then return
		 *  a pointer to that postition*/
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

