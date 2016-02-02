/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 20:05:04 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/05 17:20:30 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	if (!(element = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == 0)
	{
		element->content = NULL;
		element->content_size = 0;
	}
	else
	{
		if (!(element->content = malloc(sizeof(content))))
			return (NULL);
		ft_memcpy((element->content), content, content_size);
		element->content_size = content_size;
	}
	element->next = NULL;
	return (element);
}
