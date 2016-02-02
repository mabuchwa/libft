/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:19:43 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/30 18:25:06 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (len < size && *dst && *(dst++))
		len++;
	i = size - len;
	if (i < 1)
		return (len + ft_strlen((char *)src));
	while (*src)
	{
		if (i > 1)
		{
			*dst++ = *src;
			i--;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
