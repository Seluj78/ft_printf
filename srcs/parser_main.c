/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:28:34 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/29 12:16:18 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"
void	get_type(t_data *data)
{
	data->type = data->format[data->index + 1];
}

void	parse_format(t_data *data)
{
	get_type(data);
	converter(data);
	data->index++;
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
	int nb;

	nb = va_arg(*data->ap, int);
	ft_putnbr((unsigned int)nb);
}

//TODO : Octal
