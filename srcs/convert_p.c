/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:05:54 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 18:06:46 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void    convert_p(t_data *data)
{
	char *str;

	str = va_arg(*data->ap, char *);
	if (!str)
		str = "(null)";
	ft_putstr("0x10");
	data->ret += 4;
	data->ret += ft_strlen(ft_itoa_base((int)str, 16));
	ft_putstr(ft_itoa_base((int)str, 16));
}
