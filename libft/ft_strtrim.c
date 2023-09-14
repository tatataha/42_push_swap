/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:59:09 by muhcelik          #+#    #+#             */
/*   Updated: 2022/12/28 15:51:49 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sta;
	size_t	end;
	char	*res;

	sta = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	end = ft_strlen(s1);
	while (s1[sta] && ft_strchr(set, s1[sta]))
		sta++;
	while (end && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (sta > end)
		return (ft_strdup(""));
	res = ft_substr(s1, sta, end - sta);
	return (res);
}
