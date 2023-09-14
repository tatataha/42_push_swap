/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:05:00 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/28 16:07:48 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*endstr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	endstr = malloc(sizeof(char) * (len + 1));
	if (!endstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		endstr[i] = f(i, s[i]);
		i++;
	}
	endstr[i] = '\0';
	return (endstr);
}
