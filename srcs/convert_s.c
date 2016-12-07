/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:54:12 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 18:19:24 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_s(t_data *data)
{
	char *str;
	int a;
	int s;

	a = 0;
	str = va_arg(*data->ap, char *);
	check_precision_max(data, str);
	if (!str)
		str = "(null)";
	s = check_width_nb(data, 1);
	s = (s - ft_strlen(str));
	if (data->moinsloc == TRUE)
	{
		data->ret += ft_putstr(str);
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
		data->ret += ft_putstr(str);

	}
}

void	convert_ls(t_data *data)
{
	int *str;

	str = va_arg(*data->ap, int *);
	if (!str)
		str = L"(NULL)";
	data->nb_len = ft_strwlen(str);
	ft_putnwstr(str, data->nb_len);
}
