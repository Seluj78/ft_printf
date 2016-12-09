/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 13:17:08 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 13:20:04 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void        print_d(t_data *data, int s, int a, int nb)
{
	if (data->plusloc == TRUE)
		s--;
	s = (s - a - ft_nblen(nb));
	if (a == 0 && nb == 0 && data->is_prec == TRUE)
	{
		a = -1;
		s++;
	}
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
	{
		if (data->plusloc == TRUE)
			data->ret += write(1, "+", 1);
		if (nb < 0)
		{
			data->ret += write(1, "-", 1);
			nb = -nb;
		}
		s = s + a;
		while (s > 0)
		{
			data->ret += write(1, "0", 1);
			s--;
		}
		if (a != -1)
		{
			ft_putnbr(nb);
			data->ret += ft_nblen(nb);
		}
	}
	else
	{
		if (data->moinsloc == TRUE)
		{
			if (data->plusloc == TRUE)
				data->ret += write(1, "+", 1);
			if (nb < 0)
			{
				data->ret += write(1, "-", 1);
				nb = -nb;
			}
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			if (a != -1)
			{
				ft_putnbr(nb);
				data->ret += ft_nblen(nb);
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
			if (data->plusloc == TRUE)
				data->ret += write(1, "+", 1);
			if (nb < 0)
			{
				data->ret += write(1, "-", 1);
				nb = -nb;
			}
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			if(a != -1)
			{
				ft_putnbr(nb);
				data->ret += ft_nblen(nb);
			}
		}
	}
}