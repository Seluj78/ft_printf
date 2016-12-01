/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:07:21 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 18:09:30 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    convert_hhx(t_data *data)
{
	signed char nb;

	nb = (signed char)va_arg(*data->ap, int);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
}

void    convert_hx(t_data *data)
{
	short int nb;

	nb = (short)va_arg(*data->ap, int);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
}

void    convert_x(t_data *data)
{
	int nb;

	nb = va_arg(*data->ap, int);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
}

void    convert_lx(t_data *data)
{
	long int nb;

	nb = va_arg(*data->ap, long int);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base_l(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base_l(nb, 16)));
}

void    convert_llx(t_data *data)
{
	long long int nb;

	nb = va_arg(*data->ap, long long int);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base_ll(nb, 16)));
}

void    convert_zx(t_data *data)
{
	ssize_t nb;

	nb = va_arg(*data->ap, ssize_t);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base_ll(nb, 16)));
}

void    convert_jx(t_data *data)
{
	intmax_t nb;

	nb = va_arg(*data->ap, intmax_t);
	if (data->type == 'x')
		data->ret += ft_putstr(ft_strlower(ft_itoa_base_ll(nb, 16)));
	else
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base_ll(nb, 16)));
}
