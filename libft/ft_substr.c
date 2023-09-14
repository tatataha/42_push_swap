/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:08:17 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/24 14:13:50 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sign;
	size_t	i;

	if (s == NULL)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	sign = ft_calloc(len + 1, sizeof(char));
	if (sign == NULL)
		return (NULL);
	sign[len] = 0;
	while (i < len)
		sign[i++] = s[start++];
	return (sign);
}
