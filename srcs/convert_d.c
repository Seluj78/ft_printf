/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:05:04 by estephan          #+#    #+#             */
/*   Updated: 2016/12/01 13:15:08 by estephan         ###   ########.fr       */
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
	signed char	c;
	short int	nb;

	if (data->is_hh == TRUE)
	{
		c = (signed char)va_arg(*data->ap, int);
		ft_putchar(c);
	}
	else
	{
		nb = (short int)va_arg(*data->ap, int);
		ft_putnbr(nb);
	}
}

void    convert_lld(t_data *data)
{
	long long int	nb;
	long int		nb1;


	if (data->is_ll == TRUE)
	{
		nb = va_arg(*data->ap, long long int);
		ft_putnbr_ll(nb);
		data->ret += ft_nblen_ll(nb);
	}
	else
	{
		nb1 = va_arg(*data->ap, long int);
		ft_putnbr_l(nb1);
		data->ret += ft_nblen_l(nb1);
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
