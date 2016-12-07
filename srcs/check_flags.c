/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 11:11:47 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	check_hashtag(t_data *data)
{
	int		i;

	i = 0;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '#')
	{
		if (data->conv[i] == '#')
		{
			if (data->type == 'o')
				data->ret += write(1, "0", 1);
			else if (data->type == 'x')
				data->ret += write(1, "0x", 2);
			else if (data->type == 'X')
				data->ret += write(1, "0X", 2);
		}
		i++;
	}
}

void	check_moins(t_data *data)
{
	int i;

	i = 0;
	while (data->conv[i] != '\0')
	{
		if (data->conv[i] == '-')
			data->moinsloc = TRUE;
		i++;
	}
}

void	check_plus(t_data *data)
{
	int		i;

	i = 0;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '+')
	{
		if (data->conv[i] == '+')
			data->plusloc = TRUE;
		i++;
	}
}

int		check_precision(t_data *data, int nb)
{
	int		i;
	int		s;
	size_t	k;
	char	*str;
	int		a;

	i = 0;
	k = 0;
	s = -1;
	a = 0;
	while (data->conv[i] != '\0' && k == 0)
	{
		if (data->conv[i] == '.')
		{
			data->is_prec = TRUE;
			i++;
			if (data->conv[i] == '*')
				s = nb;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				i++;
				k++;
			}
		}
		i++;
	}
	if (s == -1)
	{
		str = ft_strnew(k);
		i = 0;
		k = 0;
		s = 0;
		while (data->conv[i] != '\0' && k == 0)
		{
			if (data->conv[i] == '.')
			{
				i++;
				while (data->conv[i] >= '0' && data->conv[i] <= '9')
				{
					str[s] = data->conv[i];
					s++;
					i++;
					k++;
				}
			}
			i++;
		}
		str[s] = '\0';
		s = ft_atoi(str);
	}
	else
		nb = va_arg(*data->ap, int);
	if (nb < 0)
		s++;
	while (s > ft_nblen(nb))
	{
		s--;
		a++;
	}
	return (a);
}

void	check_precision_max(t_data *data, char *str2)
{
	int		i;
	int		s;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	s = 0;
	while (data->conv[i] != '\0' && k == 0)
	{
		if (data->conv[i] == '.')
		{
			i++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				i++;
				k++;
			}
		}
		i++;
	}
	if (k == 0)
		return ((void)NULL);
	str = ft_strnew(k);
	i = 0;
	k = 0;
	while (data->conv[i] != '\0' && k == 0)
	{
		if (data->conv[i] == '.')
		{
			i++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				str[s] = data->conv[i];
				s++;
				i++;
				k++;
			}
		}
		i++;
	}
	str[s] = '\0';
	s = ft_atoi(str);
	while (s < ft_strlen(str2))
	{
		str2[ft_strlen(str2) - 1] = '\0';
	}
}

void	check_width_nb(t_data *data, int nb, int a)
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
