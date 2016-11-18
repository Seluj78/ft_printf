/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:35:07 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/18 14:07:25 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	print_percent_loc(t_data *data)
{
	int i;

	i = 0;
	while (i < data->nb_percent)
	{
		ft_putnbr(data->percent_location[i]);
		ft_putchar('\n');
		i++;
	}
}
