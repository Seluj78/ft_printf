/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:05:04 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 17:15:46 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    convert_d(t_data *data)
{
	int nb;
	nb = va_arg(*data->ap, int);
	ft_putnbr(nb);
	data->ret += ft_nblen(nb);
}

void    convert_hhd(t_data *data)
{
	if (data->is_hh == TRUE)
	{
		signed char c;
		c = (signed char)va_arg(*data->ap, int);
		ft_putchar(c);
	}
	else
	{
		short int nb;
		nb = (short int)va_arg(*data->ap, int);
		ft_putnbr(nb);
	}
	//TODO : Add number of things printed
}

void    convert_lld(t_data *data)
{
	if (data->is_ll == TRUE)
	{
		long long int nb;
		nb = va_arg(*data->ap, long long int);
		ft_putnbr_ll(nb);
		data->ret += ft_nblen_ll(nb);
	}
	else
	{
		long int nb;
		nb = va_arg(*data->ap, long int);
		ft_putnbr_l(nb);
		data->ret += ft_nblen_l(nb);
	}
}

void    convert_zd(t_data *data)
{
	ssize_t nb;
	nb = va_arg(*data->ap, ssize_t);
	ft_putnbr_ll(nb);
	data->ret += ft_nblen_ll(nb);
}

void    convert_jd(t_data *data)
{
	intmax_t nb;
	nb = va_arg(*data->ap, intmax_t);
	ft_putnbr_ll(nb);
	data->ret += ft_nblen_ll(nb);
}
