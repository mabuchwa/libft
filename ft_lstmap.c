/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 19:09:07 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/07 11:07:19 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlist;
	t_list	*tmp;
	t_list	*add;

	if (lst == NULL && f == NULL)
		return (NULL);
	nlist = f(lst);
	tmp = nlist;
	lst = lst->next;
	while (lst != NULL)
	{
		add = f(lst);
		if (add == NULL)
			return (NULL);
		tmp->next = add;
		tmp = add;
		lst = lst->next;
	}
	return (nlist);
}
