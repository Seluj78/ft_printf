/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:54:12 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 17:04:28 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

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
	int *str;
	str = va_arg(*data->ap, int *);
	if (!str)
		str = L"(NULL)";
	data->nb_len = ft_strwlen(str);
	ft_putnwstr(str, data->nb_len);
}
