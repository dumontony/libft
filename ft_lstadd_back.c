/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 13:59:05 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 10:14:36 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_elem;

	if (alst && *alst && new)
	{
		if (!*alst)
		{
			*alst = new;
			return ;
		}
		last_elem = ft_lstlast(*alst);
		last_elem->next = new;
	}
}
