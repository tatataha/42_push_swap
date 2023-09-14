/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:16:26 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/28 16:07:04 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (i1 + i2 + 1));
	if (!res)
		return (0);
	ft_memcpy(res, s1, i1);
	ft_memcpy(res + i1, s2, i2);
	res[i1 + i2] = '\0';
	return (res);
}
