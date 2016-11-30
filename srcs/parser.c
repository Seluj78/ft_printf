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
	i = data->index + 1;
	while (data->format[i] != 's' && data->format[i] != 'S'
			&& data->format[i] != 'p' && data->format[i] != 'd'
			&& data->format[i] != 'D' && data->format[i] != 'i'
			&& data->format[i] != 'o' && data->format[i] != 'O'
			&& data->format[i] != 'u' && data->format[i] != 'U'
			&& data->format[i] != 'x' && data->format[i] != 'X'
			&& data->format[i] != 'c' && data->format[i] != 'C'
			&& data->format[i] != '%')
	{
		i++;
	}
	data->conv = ft_strsub(data->format, data->index, (i - data->index + 1));
	data->index = i;
}

void	parse_type(t_data *data)
{
	data->type = data->conv[ft_strlen(data->conv) - 1];
}

void	parse_format(t_data *data)
{
	get_type(data);
	parse_type(data);
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
	else if (data->type == 'o')
		convert_o(data);
	else if (data->type == 'O')
		convert_lo(data);
	else if (data->type == 'C')
		convert_lc(data);
	else if (data->type == 'S')
		convert_ls(data);
	else if (data->type == 'D')
		convert_ld(data);
	else if (data->type == 'U')
		convert_lu(data);
	else if (data->type == 37)
		ft_putchar(37);
	else
		return;
}







void convert_s(t_data *data)
{
	char *str;
	str = va_arg(*data->ap, char *);
	if (!str)
		str = "(null)";
	data->ret += ft_strlen(str);
	ft_putstr(str);
}

void convert_ls(t_data *data)
{
	wchar_t *str;
	str = va_arg(*data->ap, wchar_t *);
	//data->ret += ft_strlen(str);
	ft_putwstr(str);
}









void	convert_hhd(t_data *data)
{
	signed char c;
	c = (signed char)va_arg(*data->ap, int);
	ft_putchar(c);
	//TODO : Add number of things printed
}

void	convert_hd(t_data *data)
{
	short int nb;
	nb = (short int)va_arg(*data->ap, int);
	ft_putnbr(nb);
	//TODO : Add number of things printed
}

void	convert_d(t_data *data)
{
	int nb;
	nb = va_arg(*data->ap, int);
	ft_putnbr(nb);
	//TODO : Add number of things printed
}

void	convert_ld(t_data *data)
{
	long int nb;
	nb = va_arg(*data->ap, long int);
	ft_putnbr_l(nb);
	//TODO : Add number of things printed
}

void	convert_lld(t_data *data)
{
	long long int nb;
	nb = va_arg(*data->ap, long long int);
	ft_putnbr_ll(nb);
	//TODO : Add number of things printed
}









void	convert_c(t_data *data)
{
	unsigned char c;

	c = (unsigned char)va_arg(*data->ap, int);
	data->ret += write(1, &c, 1);
}

void	convert_lc(t_data *data)
{
	wint_t c;
	c = va_arg(*data->ap, wint_t);
	data->ret += write(1, &c, 1);
}









void	convert_hhu(t_data *data)
{
	unsigned char c;

	c = (unsigned  char)va_arg(*data->ap, int);
	ft_putstr(ft_itoa_base(c, 10));
}

void	convert_hu(t_data *data)
{
	short unsigned int nb;

	nb = (short unsigned int)va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 10));
}

void	convert_u(t_data *data)
{
	unsigned int nb;

	nb = va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 10));
}

void	convert_lu(t_data *data)
{
	unsigned long int nb;

	nb = va_arg(*data->ap, unsigned long int);
	ft_putstr(ft_itoa_base_l(nb, 10));
}

void	convert_llu(t_data *data)
{
	unsigned long long int nb;

	nb = va_arg(*data->ap, unsigned long long int);
	ft_putstr(ft_itoa_base_ll(nb, 10));
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






void	convert_hhx(t_data *data)
{
	signed char nb;

	nb = (signed char)va_arg(*data->ap, int);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
}

void	convert_hx(t_data *data)
{
	short int nb;

	nb = (short)va_arg(*data->ap, int);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
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

void	convert_lx(t_data *data)
{
	long int nb;

	nb = va_arg(*data->ap, long int);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base_l(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base_l(nb, 16)));
}

void	convert_llx(t_data *data)
{
	long long int nb;

	nb = va_arg(*data->ap, long long int);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base_ll(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base_ll(nb, 16)));
}









void	convert_hho(t_data *data)
{
	unsigned char nb;
	nb = (unsigned char)va_arg(*data->ap, int);
	ft_putstr(ft_itoa_base(nb, 8));
}


void	convert_ho(t_data *data)
{
	short unsigned int nb;
	nb = (short unsigned int)va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 8));
}

void	convert_o(t_data *data)
{
	unsigned int nb;
	nb = va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 8));
}

void	convert_lo(t_data *data)
{
	long unsigned int nb;
	nb = va_arg(*data->ap, long unsigned int);
	ft_putstr(ft_itoa_base_l(nb, 8));
}

void	convert_llo(t_data *data)
{
	long long unsigned int nb;
	nb = va_arg(*data->ap, long long unsigned int);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}


//TODO : Return value
// TODO: l for x, or X in converter
// TODO: ll for d, i, o, u, x, or X converter
// TODO: h for d, i, o, u, x, or X converter
