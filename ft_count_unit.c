/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:42:05 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/12 11:53:17 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_unit(int nb)
{
	int		result;

	result = 1;
	while (nb >= 10)
	{
		result++;
		nb = nb / 10;
	}
	while (nb <= -10)
	{
		result++;
		nb = nb / 10;
	}
	return (result);
}
