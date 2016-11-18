/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:03:27 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/18 15:16:21 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	next_percent(t_data *data)
{
	data->current_percent += 1;
}

void	transfer_to_struct(t_data *data, const char *format)
{
	int i;

	i = 0;
	if (!(data->format = (char *)malloc(sizeof(char) * data->l_format)))
		return;
	while (format[i] != '\0')
	{
		data->format[i] = format[i];
		i++;
	}
}
