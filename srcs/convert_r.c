/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 10:05:56 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/12 10:39:47 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void		convert_r(t_data *data)
{
	char *filename;
	int fd;
	char buffer;
	//ft_putstr("This is a file !");
	filename = va_arg(*data->ap, char*);
	fd = open(filename, O_RDONLY);
	if (fd >= 0)
	{
		while(read(fd, &buffer, 1) != 0)
			ft_putchar(buffer);
	}
	else
	{
		ft_putstr(filename);
		ft_putstr(": Nu such file or directory");
	}

	//Need to add syntax about how many chars/lines i
	//read, and where i start from
}
