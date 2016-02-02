/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:45:06 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/03 15:21:27 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_count_blank(char const *s, int b)
{
	int i;

	i = 0;
	while ((s[b] == ' ' || s[b] == '\t' || s[b] == '\n' ||
		s[b] == '\v' || s[b] == '\r' || s[b] == '\f') && b >= 0)
	{
		i++;
		b--;
	}
	if (b == -1)
		return (i);
	b = 0;
	while (s[b] == ' ' || s[b] == '\t' || s[b] == '\n' ||
		s[b] == '\v' || s[b] == '\r' || s[b] == '\f')
	{
		b++;
		i++;
	}
	return (i);
}

int		ft_string_start(char const *s)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'
				&& s[i] != '\v' && s[i] != '\f' && s[i] != '\r')
			break ;
		else
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	start;
	int				len;
	int				buf;
	int				i;

	i = 0;
	if (s == NULL)
		return (NULL);
	buf = ft_strlen(s);
	len = buf - ft_count_blank(s, buf - 1);
	start = ft_string_start(s);
	str = ft_strsub(s, start, (size_t)len + 1);
	str[len] = '\0';
	return (str);
}
