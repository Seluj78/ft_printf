/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:28:34 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/01 14:49:48 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void		get_type(t_data *data)
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

static void	parse_type2(t_data *data, int end)
{
	int i;

	i = 0;
	if (data->conv[end - 1] == 'j')
		data->is_j = TRUE;
	else if (data->conv[end - 1] == 'z')
		data->is_z = TRUE;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '#')
	{
		if (data->conv[i] == '#')
		{
			if (data->type == 'o')
				data->ret += write(1, "0", 1);
			if (data->type == 'x')
				data->ret += write(1, "0x", 2);
			if (data->type == 'X')
				data->ret += write(1, "0X", 2);
		}
		i++;
	}
}

void		parse_type(t_data *data)
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
	else
		parse_type2(data, end);
}

void		reset_var(t_data *data)
{
	data->is_l = FALSE;
	data->is_ll = FALSE;
	data->is_h = FALSE;
	data->is_hh = FALSE;
	data->is_j = FALSE;
	data->is_z = FALSE;
	data->has_hashtag = FALSE;
}

void		parse_format(t_data *data)
{
	get_type(data);
	parse_type(data);
	check_hashtag(data);
	if (data->is_l == TRUE)
		converter_l(data);
	else if (data->is_ll == TRUE)
		converter_ll(data);
	else if (data->is_h == TRUE || data->is_hh == TRUE)
		converter_h(data);
	else if (data->is_j == TRUE)
		converter_j(data);
	else if (data->is_z == TRUE)
		converter_z(data);
	else
		converter(data);
	reset_var(data);
}

static void	converter2(t_data *data)
{
	if (data->type == 'O')
		convert_llo(data);
	else if (data->type == 'C')
		convert_lc(data);
	else if (data->type == 'S')
		convert_ls(data);
	else if (data->type == 'D')
		convert_lld(data);
	else if (data->type == 'U')
		convert_llu(data);
	else if (data->type == 37)
		ft_putchar(37);
	else
		return ;
}

void		converter(t_data *data)
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
	else
		converter2(data);
}
/*
**TODO : Return value
** TODO : %p isn't good
** TODO : static functions
** TODO : taille min champ
** TODO : Precision
** - + ' ' 0
*/
