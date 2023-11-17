/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpercy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:05:16 by rpercy            #+#    #+#             */
/*   Updated: 2022/10/14 12:06:53 by rpercy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			s;
	int			s1len;
	int			s2len;
	char		*s3;

	i = 0;
	s = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s3 = malloc(s1len + s2len + 1);
	if (s3 == NULL)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[s])
	{
		s3[i + s] = s2[s];
		s++;
	}
	s3[i + s] = '\0';
	return (s3);
}
