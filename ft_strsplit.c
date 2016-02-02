/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:56:05 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/03 15:19:32 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count_str(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

int		ft_count_words(char const *s, char c)
{
	int		nb;
	int		x;

	x = 0;
	nb = 0;
	while (*s != '\0')
	{
		if (x == 1 && *s == c)
			x = 0;
		if (x == 0 && *s != c)
		{
			x = 1;
			nb++;
		}
		s++;
	}
	return (nb);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = ft_count_words((char const*)s, c);
	if (!(tab = (char**)malloc(sizeof(*tab) *
			(ft_count_words((char const*)s, c) + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char const*)s, 0, ft_count_str(s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_count_str(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
