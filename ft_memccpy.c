/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:16:15 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/11 10:36:22 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;

	i = 0;
	if (dst != NULL && src != NULL)
	{
		while (i < n)
		{
			*(unsigned char*)(dst + i) = *(unsigned char *)(src + i);
			if (*(unsigned char*)(src + i) == (unsigned char)c)
				return (dst + (i + 1));
			i++;
		}
	}
	return (NULL);
}
