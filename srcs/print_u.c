/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 13:33:00 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 14:52:32 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

static void		print_u1(t_data *data, int s, int a, long long int nb)
{
	if (data->has_hashtag == TRUE)
		data->ret += write(1, "0", 2);
	s = s + a;
	while (s > 0)
	{
		data->ret += write(1, "0", 1);
		s--;
	}
	if (a != -1)
	{
		if (data->is_ll == TRUE)
			data->ret += ft_putstr(ft_itoa_base_ll(nb, 10));
		else if (data->is_l == TRUE)
			data->ret += ft_putstr(ft_itoa_base_l(nb, 10));
		else
			data->ret += ft_putstr(ft_itoa_base(nb, 10));
	}
}

static void		print_u2_2(t_data *data, int s, int a, long long int nb)
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
		data->ret += write(1, "0", 2);
	if (a != -1)
	{
		if (data->is_ll == TRUE)
			data->ret += ft_putstr(ft_itoa_base_ll(nb, 10));
		else if (data->is_l == TRUE)
			data->ret += ft_putstr(ft_itoa_base_l(nb, 10));
		else
			data->ret += ft_putstr(ft_itoa_base(nb, 10));
	}
}

static void		print_u2(t_data *data, int s, int a, long long int nb)
{
	if (data->moinsloc == TRUE)
	{
		while (a > 0)
		{
			data->ret += write(1, "0", 1);
			a--;
		}
		if (data->has_hashtag == TRUE)
			data->ret += write(1, "0", 2);
		if (a != -1)
		{
			if (data->is_ll == TRUE)
				data->ret += ft_putstr(ft_itoa_base_ll(nb, 10));
			else if (data->is_l == TRUE)
				data->ret += ft_putstr(ft_itoa_base_l(nb, 10));
			else
				data->ret += ft_putstr(ft_itoa_base(nb, 10));
		}
		while (s-- > 0)
			data->ret += write(1, " ", 1);
	}
	else
		print_u2_2(data, s, a, nb);
}

void			print_u(t_data *data, int s, int a, long long int nb)
{
	if (data->has_hashtag == TRUE)
		s = (s - 1 - a - (ft_strlen(ft_itoa_base(nb, 10))));
	else
		s = (s - a - (ft_strlen(ft_itoa_base(nb, 10))));
	if (a == 0 && nb == 0 && data->is_prec == TRUE)
	{
		a = -1;
		s++;
	}
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
		print_u1(data, s, a, nb);
	else
		print_u2(data, s, a, nb);
}
