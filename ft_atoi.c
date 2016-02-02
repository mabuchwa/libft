/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:37:54 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/03 15:52:00 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_atoi(const char *nb)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	if (nb == NULL || nb[i] == '\0')
		return (0);
	while ((nb[i] == '\n') || (nb[i] == '\t') || (nb[i] == '\v')
			|| (nb[i] == ' ') || (nb[i] == '\f') || (nb[i] == '\r'))
		i++;
	if (nb[i] == '-')
		sign = -1;
	if (nb[i] == '+' || nb[i] == '-')
		i++;
	while (nb[i] && (nb[i] >= '0' && nb[i] <= '9'))
	{
		result = (result * 10) + (nb[i] - '0');
		i++;
	}
	return (result * sign);
}
