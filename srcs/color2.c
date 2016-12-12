/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:40:26 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/12 11:46:29 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		put_color5(t_data *data, int i);
int		put_color6(t_data *data, int i);
int		put_color7(t_data *data, int i);

int		put_color4(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:byellow}", i))
	{
		ft_putstr(BYELLOW);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:bblue}", i))
	{
		ft_putstr(BBLUE);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:bpurple}", i))
	{
		ft_putstr(BPURPLE);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:bcyan}", i))
	{
		ft_putstr(BCYAN);
		return (8);
	}
	else
		return (put_color5(data, i));
}

int		put_color5(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:bwhite}", i))
	{
		ft_putstr(BWHITE);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ublack}", i))
	{
		ft_putstr(UBLACK);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ured}", i))
	{
		ft_putstr(URED);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ugreen}", i))
	{
		ft_putstr(UGREEN);
		return (9);
	}
	else
		return (put_color6(data, i));
}

int		put_color6(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:uyellow}", i))
	{
		ft_putstr(UYELLOW);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ublue}", i))
	{
		ft_putstr(UBLUE);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:upurple}", i))
	{
		ft_putstr(UPURPLE);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ucyan}", i))
	{
		ft_putstr(UCYAN);
		return (8);
	}
	else
		return (put_color7(data, i));
}

int		put_color7(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:uwhite}", i))
	{
		ft_putstr(UWHITE);
		return (9);
	}
	//TODO : Add inverted colors
	return (0);
}
