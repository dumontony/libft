/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:23:12 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 09:41:49 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (s)
	{
		if (start > ft_strlen(s) || len > ft_strlen(s))
			return (ft_strdup(""));
		if (!(ret = (char *)malloc(len + 1)))
			return (NULL);
		ret[len] = '\0';
		ft_memcpy(ret, s + start, len);
		return (ret);
	}
	return (NULL);
}
