/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:50:50 by dtony             #+#    #+#             */
/*   Updated: 2020/01/10 09:24:34 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_itoa_sizer(int nb)
{
	int				count;

	count = 1;
	if (nb < 0)
		count++;
	if (nb == 0)
		count++;
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char				*ft_itoa(int n)
{
	int				i;
	unsigned int	nb;
	char			*itoa;

	i = ft_itoa_sizer(n) - 1;
	nb = (n < 0) ? (unsigned int)-n : (unsigned int)n;
	if (!(itoa = (char *)malloc(sizeof(char) * ft_itoa_sizer(n))))
		return (NULL);
	itoa[i] = '\0';
	if (nb == 0)
		itoa[i - 1] = '0';
	if (n < 0)
		itoa[0] = '-';
	while (nb)
	{
		itoa[--i] = nb % 10 + '0';
		nb /= 10;
	}
	return (itoa);
}
