/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:10:21 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/28 19:21:22 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(str) * (len))))
		return (NULL);
	ft_memcpy(str, (char*)src, len);
	ft_memcpy((char*)dst, str, len);
	return (dst);
}
