/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:49:02 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/28 16:06:34 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*trg;
	size_t	len;

	len = ft_strlen(s1);
	trg = (char *)malloc(sizeof(char) * (len + 1));
	if (!trg)
		return (0);
	while (*s1 != '\0')
		*trg++ = *s1++;
	*trg = '\0';
	return (trg - len);
}
