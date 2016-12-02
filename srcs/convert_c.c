/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:41:32 by estephan          #+#    #+#             */
/*   Updated: 2016/11/30 17:45:42 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_c(t_data *data)
{
	unsigned char c;

	c = (unsigned char)va_arg(*data->ap, int);
	data->ret += write(1, &c, 1);
}

void	convert_lc(t_data *data)
{
	unsigned int c;

	c = va_arg(*data->ap, unsigned int);
	data->nb_len = ft_charwlen(c);
	ft_putwchar(c);
}
