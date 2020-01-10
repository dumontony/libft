/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:14:30 by dtony             #+#    #+#             */
/*   Updated: 2019/12/18 13:30:03 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*zone;
	
	if (!(zone = malloc(size * count)))
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(zone, size);
	return (zone);
}
