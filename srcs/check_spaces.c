/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_spaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:06:57 by estephan          #+#    #+#             */
/*   Updated: 2016/12/15 09:38:37 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	check_spaces(t_data *data)
{
	int		i;

	i = 0;
	data->check_spaces = FALSE;
	while (data->conv[i] != '\0' && data->conv[i - 1] != ' ')
	{
		if (data->conv[i] == ' ')
			data->check_spaces = TRUE;
		i++;
	}
}
