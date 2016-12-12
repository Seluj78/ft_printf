/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:40:26 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/12 12:52:01 by jlasne           ###   ########.fr       */
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
	else if (!ft_strncmp(&data->format[data->index], "{:rblack}", i))
	{
		ft_putstr(RBLACK);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rred}", i))
	{
		ft_putstr(RRED);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rgreen}", i))
	{
		ft_putstr(RGREEN);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:ryellow}", i))
	{
		ft_putstr(RYELLOW);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rblue}", i))
	{
		ft_putstr(RBLUE);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rpurple}", i))
	{
		ft_putstr(RPURPLE);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rcyan}", i))
	{
		ft_putstr(RCYAN);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:rwhite}", i))
	{
		ft_putstr(RWHITE);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lblack}", i))
	{
		ft_putstr(LBLACK);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lred}", i))
	{
		ft_putstr(LRED);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lgreen}", i))
	{
		ft_putstr(LGREEN);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lyellow}", i))
	{
		ft_putstr(LYELLOW);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lblue}", i))
	{
		ft_putstr(LBLUE);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lpurple}", i))
	{
		ft_putstr(LPURPLE);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lcyan}", i))
	{
		ft_putstr(LCYAN);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:lwhite}", i))
	{
		ft_putstr(LWHITE);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fblack}", i))
	{
		ft_putstr(FBLACK);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fred}", i))
	{
		ft_putstr(FRED);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fgreen}", i))
	{
		ft_putstr(FGREEN);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fyellow}", i))
	{
		ft_putstr(FYELLOW);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fblue}", i))
	{
		ft_putstr(FBLUE);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fpurple}", i))
	{
		ft_putstr(FPURPLE);
		return (10);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fcyan}", i))
	{
		ft_putstr(FCYAN);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:fwhite}", i))
	{
		ft_putstr(FWHITE);
		return (9);
	}

	//TODO : Add inverted colors
	return (0);
}
