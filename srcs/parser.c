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
		i++;
	data->conv = ft_strsub(data->format, data->index, (i - data->index + 1));
	data->index = i;
}

void	parse_type(t_data *data)
{
	int end;

	end = ft_strlen(data->conv) - 1;
	data->type = data->conv[end];
	if (data->conv[end - 1] == 'h' || data->conv[end - 1] == 'l')
	{
		if (data->conv[end - 2] == 'h' || data->conv[end - 2] == 'l')
		{
			if (data->conv[end - 2] == 'l')
				data->is_ll = TRUE;
			if (data->conv[end - 2] == 'h')
				data->is_hh = TRUE;
		}
		else
		{
			if (data->conv[end - 1] == 'l')
				data->is_l = TRUE;
			if (data->conv[end - 1] == 'h')
				data->is_h = TRUE;
		}
	}
	else if (data->conv[end - 1] == 'j')
		data->is_j = TRUE;
	else if (data->conv[end - 1] == 'z')
		data->is_z = TRUE;
}

void	reset_var(t_data *data)
{
	data->is_l = FALSE;
	data->is_ll = FALSE;
	data->is_h = FALSE;
	data->is_hh = FALSE;
	data->is_j = FALSE;
	data->is_z = FALSE;
}

void	parse_format(t_data *data)
{
	get_type(data);
	parse_type(data);
	if (data->is_l == TRUE)
		converter_l(data);
	else if (data->is_ll == TRUE)
		converter_ll(data);
	else if (data->is_h == TRUE)
		converter_h(data);
	else if (data->is_hh == TRUE)
		converter_hh(data);
	else if (data->is_j == TRUE)
		converter_j(data);
	else if (data->is_z == TRUE)
		converter_z(data);
	else
		converter(data);
	reset_var(data);
}

void	converter_j(t_data *data)
{
	if ((data->type == 'd' || data->type == 'i') && data->is_j == TRUE)
		convert_jd(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_j == TRUE)
		convert_jx(data);
	else if (data->type == 'u' && data->is_j == TRUE)
		convert_ju(data);
	else if (data->type == 'o' && data->is_j == TRUE)
		convert_jo(data);
}

void	converter_z(t_data *data)
{
	if ((data->type == 'd' || data->type == 'i') && data->is_z == TRUE)
		convert_zd(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_z == TRUE)
		convert_zx(data);
	else if (data->type == 'u' && data->is_z == TRUE)
		convert_zu(data);
	else if (data->type == 'o' && data->is_z == TRUE)
		convert_zo(data);
}

void	converter_h(t_data *data)
{
	if ((data->type == 'd' || data->type == 'i') && data->is_h == TRUE)
		convert_hd(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_h == TRUE)
		convert_hx(data);
	else if (data->type == 'u' && data->is_h == TRUE)
		convert_hu(data);
	else if (data->type == 'o' && data->is_h == TRUE)
		convert_ho(data);
}
void	converter_hh(t_data *data)
{
	if ((data->type == 'd' || data->type == 'i') && data->is_hh == TRUE)
		convert_hhd(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_hh == TRUE)
		convert_hhx(data);
	else if (data->type == 'u' && data->is_hh == TRUE)
		convert_hhu(data);
	else if (data->type == 'o' && data->is_hh == TRUE)
		convert_hho(data);
}

void	converter_ll(t_data *data)
{
	if ((data->type == 'd' || data->type == 'i') && data->is_ll == TRUE)
		convert_lld(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_ll == TRUE)
		convert_llx(data);
	else if (data->type == 'u' && data->is_ll == TRUE)
		convert_llu(data);
	else if (data->type == 'o' && data->is_ll == TRUE)
		convert_llo(data);
}

void	converter_l(t_data *data)
{
	if (data->type == 's' && data->is_l == TRUE)
		convert_ls(data);
	else if ((data->type == 'd' || data->type == 'i') && data->is_l == TRUE)
		convert_ld(data);
	else if (data->type == 'c' && data->is_l == TRUE)
		convert_lc(data);
	else if ((data->type == 'x' || data->type == 'X') && data->is_l == TRUE)
		convert_lx(data);
	else if (data->type == 'u' && data->is_l == TRUE)
		convert_lu(data);
	else if (data->type == 'o' && data->is_l == TRUE)
		convert_lo(data);
	else if (data->type == 'O' && data->is_l == TRUE)
		convert_llo(data);
	else if (data->type == 'D' && data->is_l == TRUE)
		convert_lld(data);
	else if (data->type == 'U' && data->is_l == TRUE)
		convert_llu(data);

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

void	convert_zd(t_data *data)
{
	ssize_t nb;
	nb = va_arg(*data->ap, ssize_t);
	ft_putnbr_ll(nb);
	//TODO : Add number of things printed
}

void	convert_jd(t_data *data)
{
	intmax_t nb;
	nb = va_arg(*data->ap, intmax_t);
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

void	convert_zu(t_data *data)
{
	size_t nb;

	nb = va_arg(*data->ap, unsigned int);
	ft_putstr(ft_itoa_base(nb, 10));
}

void	convert_ju(t_data *data)
{
	uintmax_t nb;

	nb = va_arg(*data->ap, uintmax_t);
	ft_putstr(ft_itoa_base(nb, 10));
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

void	convert_zx(t_data *data)
{
	ssize_t nb;

	nb = va_arg(*data->ap, ssize_t);
	if (data->type == 'x')
	{
		ft_putstr(ft_itoa_base_ll(nb, 16));
	}
	else
		ft_putstr(ft_strcapitalize(ft_itoa_base_ll(nb, 16)));
}

void	convert_jx(t_data *data)
{
	intmax_t nb;

	nb = va_arg(*data->ap, intmax_t);
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

void	convert_zo(t_data *data)
{
	ssize_t nb;
	nb = va_arg(*data->ap, ssize_t);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}

void	convert_jo(t_data *data)
{
	uintmax_t nb;
	nb = va_arg(*data->ap, uintmax_t);
	ft_putstr(ft_itoa_base_ll(nb, 8));
}


//TODO : Return value
// TODO: l for x, or X in converter
// TODO: ll for d, i, o, u, x, or X converter
// TODO: h for d, i, o, u, x, or X converter
// TODO: hh for d, i, o, u, x, or X converter
// TODO : Unicode
