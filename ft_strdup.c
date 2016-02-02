/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:13:58 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/11/27 13:53:06 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*str;

	str = NULL;
	if (src != NULL)
	{
		if (!(str = (char*)malloc(sizeof(src) * ft_strlen(src) + 1)))
			return (NULL);
		else
			str = ft_strcpy(str, src);
	}
	return (str);
}
