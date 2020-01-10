/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 07:52:26 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 14:46:01 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(const char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*res;

	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	len = start - 1;
	while (s1[++len])
		end = !ft_isset(s1[len], set) ? len : end;
	if (!(res = ft_strnew(end - start + 1)))
		return (NULL);
	len = 0;
	while (start <= end)
		res[len++] = s1[start++];
	res[len] = '\0';
	return (res);
}
