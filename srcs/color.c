/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/08 14:28:41 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

//static int		put_color_underline(char *start, int i);
//static int		put_color_bold(char *start, int i);

static int		put_color(char *start, int i)
{
	if (!ft_strncmp(start, "black", i))
		return (ft_putstr(BLACK));
	else if (!ft_strncmp(start, "red", i))
	{
		ft_putstr(RED);
		return (6);
	}
	else if (!ft_strncmp(start, "green", i))
		return (ft_putstr(GREEN));
	else if (!ft_strncmp(start, "yellow", i))
	{
		ft_putstr(YELLOW);
		return (9);
	}
	else if (!ft_strncmp(start, "blue", i))
	{
		ft_putstr(BLUE);
		//ft_putstr("Bleu");
		return (7);
	}
	else if (!ft_strncmp(start, "purple", i))
		return (ft_putstr(PURPLE));
	else if (!ft_strncmp(start, "cyan", i))
		return (ft_putstr(CYAN));
	else if (!ft_strncmp(start, "white", i))
		return (ft_putstr(WHITE));
	else if (!ft_strncmp(start, "reset", i))
	{
		ft_putstr(RESET);
		return (8);
	}
	//else
	//return (put_color_underline(start, i));
	return (0);
}/*
	static int		put_color_underline(char *start, int i)
	{
	if (!ft_strncmp(start, "ublack", i))
	return (ft_putstr(UBLACK));
	else if (!ft_strncmp(start, "ured", i))
	return (ft_putstr(URED));
	else if (!ft_strncmp(start, "ugreen", i))
	return (ft_putstr(UGREEN));
	else if (!ft_strncmp(start, "uyellow", i))
	return (ft_putstr(UYELLOW));
	else if (!ft_strncmp(start, "ublue", i))
	return (ft_putstr(UBLUE));
	else if (!ft_strncmp(start, "upurple", i))
	return (ft_putstr(UPURPLE));
	else if (!ft_strncmp(start, "ucyan", i))
	return (ft_putstr(UCYAN));
	else if (!ft_strncmp(start, "uwhite", i))
	return (ft_putstr(UWHITE));
	else
	return (put_color_bold(start, i));
	}

	static int		put_color_bold(char *start, int i)
	{
	if (!ft_strncmp(start, "bblack", i))
	return (ft_putstr(BBLACK));
	else if (!ft_strncmp(start, "bred", i))
	return (ft_putstr(BRED));
	else if (!ft_strncmp(start, "bgreen", i))
	return (ft_putstr(BGREEN));
	else if (!ft_strncmp(start, "byellow", i))
	return (ft_putstr(BYELLOW));
	else if (!ft_strncmp(start, "bblue", i))
	return (ft_putstr(BBLUE));
	else if (!ft_strncmp(start, "bpurple", i))
	return (ft_putstr(BPURPLE));
	else if (!ft_strncmp(start, "bcyan", i))
	return (ft_putstr(BCYAN));
	else if (!ft_strncmp(start, "bwhite", i))
	return (ft_putstr(BWHITE));
	return (0);
	}*/

void	count_color_selectors(t_data *data)
{
	int i;

	i = 0;
	while (data->format[i] != '\0')
	{
		if (data->format[i] == '{' && data->format[i + 1] == ':')
			data->nb_color++;
		i++;
	}
}

void	get_selectors_place(t_data *data)
{
	int i;
	int j;

	j = -1;
	i = 0;
	while (data->format[i] != '\0')
	{
		if (data->format[i] == '{' && data->format[i + 1] == ':')
			data->selectors_place[j++] = i;
		i++;
	}
}

void			parse_color(t_data *data)
{
	char		*start;
	char		*end;
	int			i;
	char		*max;
	data->current_color++;
	/*
	//start = ft_strchr(data->format, '{');
	start = &data->format[data->selectors_place[data->current_color]];
	end = ft_strchr(data->format, '}');
	start += 2;
	i = end - start;
	data->index += put_color(start, i);*/
	//ft_putchar('\n');
	max = data->format + ft_strlen(data->format);
	if ((start = ft_strchr(data->format, '{')) && *(start + 1) == ':'
			&& (end = ft_strchr(data->format, '}')))
	{
		start += 2;
		i = end - start;
		data->index += put_color(start, i);
		data->format[data->selectors_place[data->current_color]] = '0';
		ft_putstr("\n\n\n Format apres avoir rajoute un 0 :    ");
		ft_putstr(data->format);
	}
}
