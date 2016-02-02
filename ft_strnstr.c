/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:34:23 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/30 17:53:28 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (*s2 == '\0')
			return ((char*)s1);
		while (s1[i] && i < n)
		{
			j = 0;
			while (s1[i + j] == s2[j] && (i + j) < n)
			{
				if (s2[j + 1] == '\0')
					return ((char*)(s1 + i));
				else
					j++;
			}
			i++;
		}
	}
	return (NULL);
}
