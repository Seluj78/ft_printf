/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:58:58 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 18:05:09 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    convert_hhu(t_data *data)
{
	unsigned char c;

	c = (unsigned  char)va_arg(*data->ap, int);
	data->ret += ft_strlen(ft_itoa_base(c, 10));
	ft_putstr(ft_itoa_base(c, 10));
}

void    convert_hu(t_data *data)
{
	short unsigned int nb;

	nb = (short unsigned int)va_arg(*data->ap, unsigned int);
	data->ret += ft_strlen(ft_itoa_base(nb, 10));
	ft_putstr(ft_itoa_base(nb, 10));
}

void    convert_u(t_data *data)
{
	unsigned int nb;

	nb = va_arg(*data->ap, unsigned int);
	data->ret += ft_strlen(ft_itoa_base(nb, 10));
	ft_putstr(ft_itoa_base(nb, 10));
}

void    convert_lu(t_data *data)
{
	unsigned long int nb;

	nb = va_arg(*data->ap, unsigned long int);
	data->ret += ft_strlen(ft_itoa_base_l(nb, 10));
	ft_putstr(ft_itoa_base_l(nb, 10));
}

void    convert_llu(t_data *data)
{
	unsigned long long int nb;

	nb = va_arg(*data->ap, unsigned long long int);
	data->ret += ft_strlen(ft_itoa_base_ll(nb, 10));
	ft_putstr(ft_itoa_base_ll(nb, 10));
}

void    convert_zu(t_data *data)
{
	size_t nb;

	nb = va_arg(*data->ap, unsigned int);
	data->ret += ft_strlen(ft_itoa_base(nb, 10));
	ft_putstr(ft_itoa_base(nb, 10));
}

void    convert_ju(t_data *data)
{
	uintmax_t nb;

	nb = va_arg(*data->ap, uintmax_t);
	data->ret += ft_strlen(ft_itoa_base(nb, 10));
	ft_putstr(ft_itoa_base(nb, 10));
}
