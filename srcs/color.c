/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 11:25:24 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/12 11:26:15 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		put_color(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:reset}", i))
	{
		ft_putstr(RESET);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:black}", i))
	{
		ft_putstr(BLACK);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:red}", i))
	{
		ft_putstr(RED);
		return (6);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:green}", i))
	{
		ft_putstr(GREEN);
		return (8);
	}
	//
	else if (!ft_strncmp(&data->format[data->index], "{:yellow}", i))
	{
		ft_putstr(YELLOW);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:blue}", i))
	{
		ft_putstr(BLUE);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:purple}", i))
	{
		ft_putstr(PURPLE);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:cyan}", i))
	{
		ft_putstr(CYAN);
		return (7);
	}
	//
	else if (!ft_strncmp(&data->format[data->index], "{:white}", i))
	{
		ft_putstr(WHITE);
		return (8);
	}








	else if (!ft_strncmp(&data->format[data->index], "{:bblack}", i))
	{
		ft_putstr(BBLACK);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:bred}", i))
	{
		ft_putstr(BRED);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:bgreen}", i))
	{
		ft_putstr(BGREEN);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:byellow}", i))
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
	else if (!ft_strncmp(&data->format[data->index], "{:bwhite}", i))
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
	else if (!ft_strncmp(&data->format[data->index], "{:uyellow}", i))
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
	else if (!ft_strncmp(&data->format[data->index], "{:uwhite}", i))
	{
		ft_putstr(UWHITE);
		return (9);
	}

//TODO : Add inverted colors
	return (0);
}

void	parse_color(t_data *data)
{
	if (data->format[data->index] == '{' && data->format[data->index + 1] == ':')
	{
		int i;
		int j;

		j = data->index;
		i = 0;
		while (data->format[j] != '}')
		{
			i++;
			j++;
		}
		data->index += put_color(data, i);
	}
}
