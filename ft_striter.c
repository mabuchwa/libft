/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:18:24 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/03 16:46:01 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
