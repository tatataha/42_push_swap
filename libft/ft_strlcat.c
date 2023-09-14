/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:43:20 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/21 13:21:51 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	o;

	i = 0;
	o = 0;
	while (dest[i])
		i++;
	if (destsize < i)
	{
		while (src[o])
			o++;
		return (destsize + o);
	}
	while (destsize > 0 && i < destsize - 1 && src[o])
		dest[i++] = src[o++];
	dest[i] = '\0';
	while (src[o++])
		i++;
	return (i);
}
