/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:41:32 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 15:27:19 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_c(t_data *data)
{
	int c;
	int s;

	c = va_arg(*data->ap, int);
	s = check_width_nb(data, 1);
	s = (s - 1);
	if (data->moinsloc == TRUE)
	{
		data->ret += write(1, &c, 1);
		while (s > 0)
		{
			data->ret += write(1, " ", 1);
			s--;
		}
	}
	else
	{
		while (s > 0)
		{
			data->ret += write(1, " ", 1);
			s--;
		}
		data->ret += write(1, &c, 1);
	}
}

void	convert_lc(t_data *data)
{
	unsigned int c;

	c = va_arg(*data->ap, unsigned int);
	data->nb_len = ft_charwlen(c);
	ft_putwchar(c);
}
