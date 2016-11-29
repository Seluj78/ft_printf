/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:28:34 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/29 13:26:32 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"
void	get_type(t_data *data)
{
	int i;
	i = data->index;
	while (data->format[i] != 's' && data->format[i] != 'S'
			&& data->format[i] != 'p' && data->format[i] != 'd'
			&& data->format[i] != 'D' && data->format[i] != 'i'
			&& data->format[i] != 'o' && data->format[i] != 'O'
			&& data->format[i] != 'u' && data->format[i] != 'U'
			&& data->format[i] != 'x' && data->format[i] != 'X'
			&& data->format[i] != 'c' && data->format[i] != 'C')
	{
		i++;
	}
	data->cur_end_conv = i;
	data->conv_format = ft_strsub(data->format, data->index + 1, data->cur_end_conv);
	data->index += i;
	data->type = data->conv_format[ft_strlen(data->conv_format) - 1];
	//data->type = 'd';
	
}

void	parse_format(t_data *data)
{
	get_type(data);
	converter(data);
}

void	converter(t_data *data)
{
	if (data->type == 's')
		convert_s(data);
	else if (data->type == 'd' || data->type == 'i')
		convert_d(data);
	else if (data->type == 'c')
		convert_c(data);
	else if (data->type == 'p')
		convert_p(data);
	else if (data->type == 'x' || data->type == 'X')
		convert_x(data);
	else if (data->type == 'u')
		convert_u(data);
	else
		return;
}
void	convert_s(t_data *data)
{
	char *str;
	str = va_arg(*data->ap, char *);
	if (!str)
		str = "(null)";
	data->ret += ft_strlen(str);
	ft_putstr(str);
}

void	convert_d(t_data *data)
{
	int	nb;
	nb = va_arg(*data->ap, int);
	ft_putnbr(nb);
	//TODO : Add number of things printed
}

void	convert_c(t_data *data)
{
	unsigned char c;

	c = (unsigned char)va_arg(*data->ap, int);
	data->ret += write(1, &c, 1);
}

void	convert_p(t_data *data)
{
	char *str;

	str = va_arg(*data->ap, char *);
	if (!str)
		str = "(null)";
	ft_putstr("0x10");
	ft_putstr(ft_itoa_base((int)str, 16));
}

void	convert_x(t_data *data)
{
	int nb;

	nb = va_arg(*data->ap, int);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
}

void	convert_u(t_data *data)
{
	unsigned int nb;

	nb = va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 10));
}
/*
   void convert_o(t_data *data)
   {

   }
   */
