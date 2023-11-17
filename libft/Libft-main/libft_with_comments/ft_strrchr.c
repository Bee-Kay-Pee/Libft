/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:08:02 by rpercy            #+#    #+#             */
/*   Updated: 2022/09/21 13:17:14 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchar(const char *s, int c);
{
	int	i;

	i = ft_strlen(s);
	/*i is t the end of the string this time*/
	while (i >= 0)
	/*while we havent reached the beginning of the string*/
	{
		if(s[i] == (char)c)
			return ((char *)(&s[i]));
		i--;
		/*moving backwards through string*/
	}
	return (NULL);
}
