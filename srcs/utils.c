/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:03:27 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/24 14:01:21 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	transfer_to_struct(t_data *data, const char *format)
{
	int i;

	i = 0;
	if (!(data->format = (char *)malloc(sizeof(char) * (data->l_format + 1))))
		return;
	while (format[i] != '\0')
	{
		data->format[i] = format[i];
		i++;
	}
	data->format[i] = '\0';
}
