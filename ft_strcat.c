/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:36:37 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 15:14:12 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		size;

	i = -1;
	size = ft_strlen(dest);
	while (src[++i])
		dest[size + i] = src[i];
	dest[size + i] = '\0';
	return (dest);
}
