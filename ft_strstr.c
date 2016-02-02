/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:30:39 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/28 18:42:56 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (*s2 == '\0')
			return ((char*)s1);
		while (s1[i])
		{
			j = 0;
			while (s1 && s1[i + j] == s2[j])
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
