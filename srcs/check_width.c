/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 11:22:00 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void		check_width_nb(t_data *data, int nb, int a)
{
	int		i;
	int		s;
	char	c;
	char	*str;

	i = 0;
	s = 0;
	c = ' ';
	check_plus(data);
	if (nb < 0)
		data->plusloc = FALSE;
	check_moins(data);
	while (s == 0 && data->conv[i])
	{
		if (data->conv[i] >= '0' && data->conv[i] <= '9')
		{
			if (data->conv[i] == '0' && data->moinsloc == FALSE)
				c = '0';
			else
				s++;
			while (data->conv[i + s] >= '0' && data->conv[i + s] <= '9')
			{
				s++;
			}
		}
		i++;
	}
	str = ft_strnew(s);
	i = 0;
	s = 0;
	while (s == 0 && data->conv[i])
	{
		if (data->conv[i] >= '1' && data->conv[i] <= '9')
		{
			str[s] = data->conv[i];
			i++;
			s++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				str[s] = data->conv[i];
				i++;
				s++;
			}
		}
		i++;
	}
	str[s] = '\0';
	s = ft_atoi(str);
	i = 0;
	if (data->plusloc == TRUE)
		s--;
	s = (s - a - ft_nblen(nb));
	if (data->is_prec == TRUE)
		c = ' ';
	if (c == '0')
	{
		if (data->plusloc == TRUE)
			data->ret += write(1, "+", 1);
		if (nb < 0)
		{
			data->ret += write(1, "-", 1);
			nb = -nb;
		}
		s = s + a;
		while (s > 0)
		{
			data->ret += write(1, "0", 1);
			s--;
		}
		ft_putnbr(nb);
		data->ret += ft_nblen(nb);
	}
	else
	{
		if (data->moinsloc == TRUE)
		{
			if (data->plusloc == TRUE)
				data->ret += write(1, "+", 1);
			if (nb < 0)
			{
				data->ret += write(1, "-", 1);
				nb = -nb;
			}
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			ft_putnbr(nb);
			data->ret += ft_nblen(nb);
			while (s > 0)
			{
				data->ret += write(1, " ", 1);
				s--;
			}
		}
		else
		{
			while (s > 0)
			{
				data->ret += write(1, " ", 1);
				s--;
			}
			if (data->plusloc == TRUE)
				data->ret += write(1, "+", 1);
			if (nb < 0)
			{
				data->ret += write(1, "-", 1);
				nb = -nb;
			}
			while (a > 0)
			{
				data->ret += write(1, "0", 1);
				a--;
			}
			ft_putnbr(nb);
			data->ret += ft_nblen(nb);
		}
	}
}
