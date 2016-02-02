/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:38:47 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/07 10:59:39 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str);
	while (i != 0 && (unsigned char)str[i] != (unsigned char)c)
		i--;
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char*)(str + i));
	return (NULL);
}
