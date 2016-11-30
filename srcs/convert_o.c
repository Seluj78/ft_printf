/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:10:05 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 18:10:50 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    convert_hho(t_data *data)
{
	unsigned char nb;
	nb = (unsigned char)va_arg(*data->ap, int);
	ft_putstr(ft_itoa_base(nb, 8));
}


void    convert_ho(t_data *data)
{
	short unsigned int nb;
	nb = (short unsigned int)va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 8));
}

void    convert_o(t_data *data)
{
	unsigned int nb;
	nb = va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 8));
}

void    convert_lo(t_data *data)
{
	long unsigned int nb;
	nb = va_arg(*data->ap, long unsigned int);
	ft_putstr(ft_itoa_base_l(nb, 8));
}

void    convert_llo(t_data *data)
{
	long long unsigned int nb;
	nb = va_arg(*data->ap, long long unsigned int);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}

void    convert_zo(t_data *data)
{
	ssize_t nb;
	nb = va_arg(*data->ap, ssize_t);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}

void    convert_jo(t_data *data)
{
	uintmax_t nb;
	nb = va_arg(*data->ap, uintmax_t);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}
