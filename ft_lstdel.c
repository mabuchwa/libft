/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:11:31 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/05 19:06:56 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**tmp;

	tmp = alst;
	if (*alst == NULL || alst == NULL)
		return ;
	while (*tmp != NULL)
	{
		del((*tmp)->content, (*tmp)->content_size);
		*tmp = (*tmp)->next;
	}
	free(*alst);
	*alst = NULL;
}
