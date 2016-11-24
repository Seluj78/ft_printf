/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:28:34 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/21 15:17:16 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	find_percent(t_data *data)
{
	int i;
	int j;
	int nb;

	j = 0;
	nb = 0;
	i = 0;
	while (data->format[i] != '\0')
	{
		if (data->format[i] == '%')
			nb++;
		i++;
	}
	data->nb_percent = nb;
	if (!(data->percent_loc = (int*)malloc(sizeof(int) * nb)))
		return;
	i = 0;
	while (data->format[i] != '\0')
	{
		if (data->format[i] == '%')
		{
			data->percent_loc[j] = i;
			j++;
		}
		i++;
	}
}

void	get_type(t_data *data)
{
	data->type = data->format[data->percent_loc[data->current_percent] + 1];
}

void	parse_format(const char *format, t_data *data)
{
	data->l_format = ft_strlen(format);
	transfer_to_struct(data, format);
	find_percent(data);

	get_type(data);
	ft_putendl(&data->type);

	next_percent(data);
	get_type(data);
	ft_putendl(&data->type);

	next_percent(data);
	get_type(data);
	ft_putendl(&data->type);
}
