/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:05:54 by estephan          #+#    #+#             */
/*   Updated: 2016/12/16 13:27:23 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	convert_p(t_data *data)
{
	long long	n;
	char		*str;

	n = (long long)va_arg(*data->ap, void *);
	if (n == 0)
	{
		ft_putstr("0x0");
		data->ret += 3;
	}
	else
	{
		ft_putstr("0x7fff");
		data->ret += 6;
		str = ft_itoa_base(n, 16);
		data->ret += ft_putstr(str);
		free(str);
	}
}
