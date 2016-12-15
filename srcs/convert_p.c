/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:05:54 by estephan          #+#    #+#             */
/*   Updated: 2016/12/15 09:41:02 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_p(t_data *data)
{
	char *str;

	str = va_arg(*data->ap, char *);
	if (!str)
		str = "(null)";
	ft_putstr("0x7fff");
	data->ret += 4;
	data->ret += ft_putstr(ft_itoa_base(ft_atoi(str), 16));
	//free(str);
}
