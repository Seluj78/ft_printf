/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_#.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/01 16:38:44 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	check_hashtag(t_data *data)
{
	int		i;

	i = 0;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '#')
	{
		if (data->conv[i] == '#')
		{
			if (data->type == 'o')
				data->ret += write(1, "0", 1);
			if (data->type == 'x')
				data->ret += write(1, "0x", 2);
			if (data->type == 'X')
				data->ret += write(1, "0X", 2);
		}
		i++;
	}
}

void	check_plus_moins(t_data *data)
{
	int		i;

	i = 0;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '+')
	{
		if (data->conv[i] == '+')
			data->ret += write(1, "+", 1);
		i++;
	}
}
