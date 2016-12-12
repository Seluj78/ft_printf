/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:58:58 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 15:25:01 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_hhu(t_data *data)
{
	unsigned char		c;
	short unsigned int	nb;

	if (data->is_hh == TRUE)
	{
		c = (unsigned char)va_arg(*data->ap, int);
		data->ret += ft_putstr(ft_itoa_base(c, 10));
	}
	else
	{
		nb = (short unsigned int)va_arg(*data->ap, unsigned int);
		check_precision(data, nb);
		data->ret += ft_putstr(ft_itoa_base(nb, 10));
	}
}

void	convert_u(t_data *data)
{
	unsigned int	nb;
	int				a;
	int				s;

	nb = va_arg(*data->ap, unsigned int);
	a = check_precision(data, (intmax_t)nb);
	s = check_width_nb(data, (intmax_t)nb);
	print_u(data, s, a, nb);
}

void	convert_llu(t_data *data)
{
	unsigned long long int	nb;
	unsigned long int		nb1;

	if (data->is_ll == TRUE)
	{
		nb = va_arg(*data->ap, unsigned long long int);
		check_precision(data, nb);
		data->ret += ft_putstr(ft_itoa_base_ll(nb, 10));
	}
	else
	{
		nb1 = va_arg(*data->ap, unsigned long int);
		check_precision(data, nb1);
		data->ret += ft_putstr(ft_itoa_base_l(nb1, 10));
	}
}

void	convert_zu(t_data *data)
{
	size_t nb;

	nb = va_arg(*data->ap, unsigned int);
	check_precision(data, nb);
	data->ret += ft_putstr(ft_itoa_base(nb, 10));
}

void	convert_ju(t_data *data)
{
	uintmax_t nb;

	nb = va_arg(*data->ap, uintmax_t);
	check_precision(data, nb);
	data->ret += ft_putstr(ft_itoa_base(nb, 10));
}
