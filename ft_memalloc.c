/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:01:36 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/26 11:35:17 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	if (!(mem = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		*(char*)(mem + i) = '\0';
		i++;
	}
	return (mem);
}
