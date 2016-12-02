/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:10:05 by estephan          #+#    #+#             */
/*   Updated: 2016/12/01 12:54:52 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_hho(t_data *data)
{
	unsigned char		nb;
	short unsigned int	nb1;

	if (data->is_hh == TRUE)
	{
		nb = (unsigned char)va_arg(*data->ap, int);
		data->ret += ft_putstr(ft_itoa_base(nb, 8));
	}
	else
	{
		nb1 = (short unsigned int)va_arg(*data->ap, unsigned int);
		data->ret += ft_putstr(ft_itoa_base(nb1, 8));
	}
}

void	convert_o(t_data *data)
{
	unsigned int nb;

	nb = va_arg(*data->ap, unsigned int);
	data->ret += ft_putstr(ft_itoa_base(nb, 8));
}

void	convert_llo(t_data *data)
{
	long long unsigned int	nb;
	long unsigned int		nb1;

	if (data->is_ll == TRUE)
	{
		nb = va_arg(*data->ap, long long unsigned int);
		data->ret += ft_putstr(ft_itoa_base_ll(nb, 8));
	}
	else
	{
		nb1 = va_arg(*data->ap, long unsigned int);
		data->ret += ft_putstr(ft_itoa_base_l(nb1, 8));
	}
}

void	convert_zo(t_data *data)
{
	ssize_t nb;

	nb = va_arg(*data->ap, ssize_t);
	data->ret += ft_putstr(ft_itoa_base_ll(nb, 8));
}

void	convert_jo(t_data *data)
{
	uintmax_t nb;

	nb = va_arg(*data->ap, uintmax_t);
	data->ret += ft_putstr(ft_itoa_base_ll(nb, 8));
}
