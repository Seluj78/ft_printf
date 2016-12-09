/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 13:22:14 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 13:25:08 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    print_x(t_data *data, int s, int a, long long int nb)
{
	if (data->has_hashtag == TRUE)
		s = (s - 2 - a - (ft_strlen(ft_itoa_base(nb,16))));
	else
		s = (s - a - (ft_strlen(ft_itoa_base(nb,16))));
	if (a == 0 && nb == 0 && data->is_prec == TRUE)
	{
		a = -1;
		s++;
	}
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
	{
		if (data->has_hashtag == TRUE)
			data->ret += write(1, "0x", 2);
		s = s + a;
		while (s > 0)
		{
			data->ret += write(1, "0", 1);
			s--;
		}
		if (a != -1)
		{
			if (data->is_ll == TRUE)
				data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
			else if (data->is_l == TRUE)
				data->ret += ft_putstr(ft_strlower(ft_itoa_base_l(nb, 16)));
			else
				data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
		}
	}
	else
	{
		if (data->moinsloc == TRUE)
		{
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			if (data->has_hashtag == TRUE)
				data->ret += write(1, "0x", 2);
			if (a != -1)
			{
				if (data->is_ll == TRUE)
					data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
				else if (data->is_l == TRUE)
					data->ret += ft_putstr(ft_strlower(ft_itoa_base_l(nb, 16)));
				else
					data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
			}
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
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			if (data->has_hashtag == TRUE)
				data->ret += write(1, "0x", 2);
			if (a != -1)
			{
				if (data->is_ll == TRUE)
					data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
				else if (data->is_l == TRUE)
					data->ret += ft_putstr(ft_strlower(ft_itoa_base_l(nb, 16)));
				else
					data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
			}
		}
	}
}
