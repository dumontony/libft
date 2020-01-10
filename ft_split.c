/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:20:35 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:53:42 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdnb(char const *str, char c)
{
	int		i;
	int		wrdnb;

	i = 0;
	wrdnb = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			wrdnb++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (wrdnb);
}

static char	**ft_alloy(int i, char const *str, char c)
{
	int		n;
	int		len;
	char	**tab;

	n = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_wrdnb(str, c) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			len = 0;
			while (str[i] != c && str[i])
			{
				len++;
				i++;
			}
			if (!(tab[n++] = (char *)malloc(sizeof(char) * (len + 1))))
				return (NULL);
		}
		else
			i++;
	}
	return (tab);
}

static char	**ft_tabfiller(char **tab, char const *s, char c)
{
	int		i;
	int		col;
	int		raw;

	i = 0;
	raw = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			col = 0;
			while (s[i] != c && s[i])
				tab[raw][col++] = s[i++];
			tab[raw][col] = '\0';
			raw++;
		}
		else
			i++;
	}
	tab[raw] = NULL;
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	char	**out;

	if (s)
	{
		if (!(out = ft_alloy(0, s, c)))
			return (NULL);
		out = ft_tabfiller(out, s, c);
		return (out);
	}
	return (NULL);
}
