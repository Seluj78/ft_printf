/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/09 13:28:09 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		check_width_nb(t_data *data, long long int nb)
{
	int		i;
	int		s;
	char	*str;

	i = 0;
	s = 0;
	data->c = ' ';
	check_plus(data);
	if (nb < 0)
		data->plusloc = FALSE;
	check_moins(data);
	while (s == 0 && data->conv[i] && data->conv[i] != '.')
	{
		if (data->conv[i] >= '0' && data->conv[i] <= '9')
		{
			if (data->conv[i] == '0' && data->moinsloc == FALSE)
				data->c = '0';
			else
				s++;
			while (data->conv[i + s] >= '0' && data->conv[i + s] <= '9')
			{
				s++;
			}
		}
		i++;
	}
	str = ft_strnew(s);
	i = 0;
	s = 0;
	while (s == 0 && data->conv[i] && data->conv[i] != '.')
	{
		if (data->conv[i] >= '1' && data->conv[i] <= '9')
		{
			str[s] = data->conv[i];
			i++;
			s++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				str[s] = data->conv[i];
				i++;
				s++;
			}
		}
		i++;
	}
	str[s] = '\0';
	s = ft_atoi(str);
	return (s);
}

void    print_u(t_data *data, int s, int a, long long int nb)
{
	if (data->has_hashtag == TRUE)
		s = (s - 1 - a - (ft_strlen(ft_itoa_base(nb,10))));
	else
		s = (s - a - (ft_strlen(ft_itoa_base(nb,10))));
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
	}
}
