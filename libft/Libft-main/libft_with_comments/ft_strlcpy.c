/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:21:37 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/19 14:24:31 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*function copies from src to dst until you have copied dstsize bytes. Returns length of src*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
	{
		return (ft_strlen(src));
	}
	while (i < dst - 1 && src [i])
	/*dstsize - 1 because index i starts at 0 but dstsize starts at count 1. While value is not 
	 * null*/
	{
		dst[i] = src[i];
		i++;
		/*set the value of i to the corresponding value of i in src*/*
	}
	if (i < dstsize)
	{
		dst[i] = '\0';
		/*set the last value to null*/
	}
	return (ft_strlen(src));
	/*strlen is in libft.h header file so can be referenced in this function*/
}
