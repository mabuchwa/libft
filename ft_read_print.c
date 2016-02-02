/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuchwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:52:46 by mabuchwa          #+#    #+#             */
/*   Updated: 2015/12/12 11:51:39 by mabuchwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 10

char	*ft_read_print(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*str;

	str = ft_strnew(1);
	fd = open(file, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
	}
	return (str);
}
