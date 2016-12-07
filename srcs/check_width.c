/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 14:45:44 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		check_width_nb(t_data *data, intmax_t nb)
{
	int		i;
	int		s;
	char	*str;

	i = 0;
	s = 0;
	data->c = ' ';
	check_plus(data);
	if (nb < 0)
		data->plusloc = FALSE;
	check_moins(data);
	while (s == 0 && data->conv[i])
	{
		if (data->conv[i] >= '0' && data->conv[i] <= '9')
		{
			if (data->conv[i] == '0' && data->moinsloc == FALSE)
				data->c = '0';
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
	return (s);
}

void		print_d(t_data *data, int s, int a, int nb)
{
	int	i;

	i = 0;
	if (data->plusloc == TRUE)
		s--;
	s = (s - a - ft_nblen(nb));
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
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

void	print_x(t_data *data, int s, int a, int nb)
{
	int i;

	i = 0;
	if (data->plusloc == TRUE)
		s--;
	if (data->has_hashtag == TRUE)
		s = (s - 2 - a - (ft_strlen(ft_itoa_base(nb,16))));
	else
		s = (s - a - (ft_strlen(ft_itoa_base(nb,16))));
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
	{
		if (data->has_hashtag == TRUE)
			data->ret += write(1, "0x", 2);
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
		data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
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
			if (data->has_hashtag == TRUE)
				data->ret += write(1, "0x", 2);
			data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
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
			if (data->has_hashtag == TRUE)
				data->ret += write(1, "0x", 2);
			data->ret += ft_putstr(ft_strlower(ft_itoa_base(nb, 16)));
		}
	}
}

void    print_xx(t_data *data, int s, int a, int nb)
{
	int i;

	i = 0;
	if (data->plusloc == TRUE)
		s--;
	s = (s - a - (ft_strlen(ft_itoa_base(nb,16))));
	if (data->is_prec == TRUE)
		data->c = ' ';
	if (data->c == '0')
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
		data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
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
			data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
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
			data->ret += ft_putstr(ft_strcapitalize(ft_itoa_base(nb, 16)));
		}
	}
}
