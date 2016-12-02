/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_#.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/02 13:52:49 by estephan         ###   ########.fr       */
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
			if (data->type == 'x')
				data->ret += write(1, "0x", 2);
			if (data->type == 'X')
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
	while (s > ft_nblen(nb))
	{
		data->ret += write(1, "0", 1);
		s--;
	}
}
