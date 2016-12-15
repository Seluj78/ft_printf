/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 10:05:56 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/15 11:44:15 by jlasne           ###   ########.fr       */
/*   Updated: 2016/12/13 10:20:28 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	parse_r(t_data *data)
{
	(void)data;
	/*
	int i;
	int j;

	j = 0;
	i = 1;
	//i = ft_strlen(data->conv) - 1;
	//ft_putchar(data->conv[i]);
	if (data->conv[1] == '+')
	{
		data->end_at_line = 0;
		data->end_at_char = 0;
	}
	while (data->conv[i] != 'L' && data->conv[i] != 'a')
	{
		j++;
		i++;
	}
	if (data->conv[i + 2] == '-')
	{
		if (data->conv[j + 1] == 'a')
			data->start_from_char = ft_atoi(ft_strncpy(data->conv, 1, j));
		else if (data->conv[j + 1] == 'L')
			data->start_from_line = ft_atoi(ft_strncpy(data->conv, 1, j));
	}*/

}

void		convert_r(t_data *data)
{
	char	*filename;
	int		fd;
	char	buffer;

	filename = va_arg(*data->ap, char*);
	fd = open(filename, O_RDONLY);
	parse_r(data);
	if (fd >= 0)
	{
		while (read(fd, &buffer, 1) != 0)
			ft_putchar(buffer);
	}
	else
	{
		ft_putstr(filename);
		ft_putstr(": No such file or directory");
	}
}
