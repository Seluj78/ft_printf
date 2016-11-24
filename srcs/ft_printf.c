/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:27:58 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/24 14:25:09 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	init(t_data *data, const char *format, va_list *ap)
{
	data->ap = ap;
	data->l_format = ft_strlen(format);
	transfer_to_struct(data, format);
	data->current_percent = -1;
	data->ret = 0;
	data->index = 0;
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	t_data		data;

	va_start(ap, format);
	init(&data, format, &ap);
	while (data.format[data.index])
	{
		if (data.format[data.index] == '%')
			parse_format(&data);
		else
		{
			ft_putchar(data.format[data.index]);
			data.ret++;
		}
		if (!data.format[data.index])
			break ;
		data.index++;
	}
	//print_percent_loc(&data);
	//ft_putendl(data.current_var);
	//char *toto = va_arg(ap, char*);
	//char *tata = va_arg(ap, char*);
	//char *titi = va_arg(ap, char*);
	//ft_putendl("toto");
	//ft_putendl(tata);
	//ft_putendl(titi);
	va_end(ap);
	return (data.ret);
}

