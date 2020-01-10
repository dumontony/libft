/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 14:16:08 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 15:10:56 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*head;

	head = *lst;
	if (*lst && (*lst)->content)
	{
		next = (*lst);
		while (next != NULL)
		{
			next = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = next;
		}
		free(head);
		head = NULL;
	}
}
