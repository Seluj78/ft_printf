/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:27:58 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/08 11:20:37 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

static void		init(t_data *data, const char *format, va_list *ap)
{
	data->ap = ap;
	data->l_format = ft_strlen(format);
	transfer_to_struct(data, format);
	data->ret = 0;
	data->index = 0;
	reset_var(data);
}

void			get_type(t_data *data)
{
	int i;

	i = data->index + 1;
	while (data->format[i] != 's' && data->format[i] != 'S'
			&& data->format[i] != 'p' && data->format[i] != 'd'
			&& data->format[i] != 'D' && data->format[i] != 'i'
			&& data->format[i] != 'o' && data->format[i] != 'O'
			&& data->format[i] != 'u' && data->format[i] != 'U'
			&& data->format[i] != 'x' && data->format[i] != 'X'
			&& data->format[i] != 'c' && data->format[i] != 'C'
			&& data->format[i] != '%')
		i++;
	data->conv = ft_strsub(data->format, data->index, (i - data->index + 1));
	data->index = i;
}

void			reset_var(t_data *data)
{
	data->is_l = FALSE;
	data->is_ll = FALSE;
	data->is_h = FALSE;
	data->is_hh = FALSE;
	data->is_j = FALSE;
	data->is_z = FALSE;
	data->has_hashtag = FALSE;
	data->moinsloc = FALSE;
}

int				ft_printf(const char *format, ...)
{
	va_list	ap;
	t_data	data;

	va_start(ap, format);
	init(&data, format, &ap);
	while (data.format[data.index])
	{
		if (data.format[data.index] == '%')
			parse_format(&data);
		else
		{
			if (data.format[data.index] == '{'
				&& data.format[data.index + 1] == ':')
				parse_color(&data);
			ft_putchar(data.format[data.index]);
			data.ret++;
		}
		if (!data.format[data.index])
			break ;
		data.index++;
	}
	va_end(ap);
	ft_putstr(RESET);
	return (data.ret);
}
