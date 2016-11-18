/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:27:58 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/18 15:05:50 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	t_data		data;
	va_start(ap, format);
	data.current_percent = 0;
	parse_format(format, &data);
	//char *toto = va_arg(ap, char*);
	//char *tata = va_arg(ap, char*);
	//ft_putendl(toto);
	//ft_putendl(tata);
	va_end(ap);
	return (0);
}

