/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 12:04:49 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/11 10:47:53 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_count_nb(int n)
{
	int	result;

	result = 1;
	while (n >= 10)
	{
		result++;
		n = n / 10;
	}
	while (n <= -10)
	{
		result++;
		n = n / 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*numb;
	int		is_neg;
	int		buf;

	is_neg = 0;
	buf = 0;
	if (n < 0)
		is_neg = 1;
	buf = ft_count_nb(n) + is_neg + 1;
	numb = ft_strnew(buf);
	buf--;
	if (n < 0)
	{
		numb[buf - 1] = (n % 10) * -1 + '0';
		n = (n / 10) * -1;
		buf--;
		numb[0] = '-';
	}
	while ((buf - is_neg) > 0)
	{
		numb[buf - 1] = n % 10 + '0';
		n = n / 10;
		buf--;
	}
	return (numb);
}
