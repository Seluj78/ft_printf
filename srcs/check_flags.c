/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_#.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/05 11:18:51 by estephan         ###   ########.fr       */
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

void	check_plus(t_data *data)
{
	int		i;

	i = 0;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '+')
	{
		if (data->conv[i] == '+')
			data->ret += write(1, "+", 1);
		i++;
	}
}

void	check_precision(t_data *data, int	nb)
{
	int		i;
	int		s;
	size_t 	k;
	char	*str;

	i = 0;
	k = 0;
	s = -1;
	while (data->conv[i] != '\0' && k == 0)
	{
		if (data->conv[i] == '.')
		{
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
	if (s != -1)
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
	while (s > ft_nblen(nb))
	{
		data->ret += write(1, "0", 1);
		s--;
	}
}

void	check_precision_max(t_data *data, char *str2)
{
	int     i;
	int     s;
	size_t  k;
	char    *str;

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
