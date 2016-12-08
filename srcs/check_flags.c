/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 17:04:21 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void			check_hashtag(t_data *data)
{
	int		i;

	i = 0;
	data->has_hashtag = FALSE;
	while (data->conv[i] != '\0' && data->conv[i - 1] != '#')
{
		if (data->conv[i] == '#')
		{
			data->has_hashtag = TRUE;
			/*if (data->type == 'o')
				data->ret += write(1, "0", 1);
			else if (data->type == 'x')
				data->ret += write(1, "0x", 2);
			else if (data->type == 'X')
				data->ret += write(1, "0X", 2);*/
		}
		i++;
	}
}

void			check_moins(t_data *data)
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

void			check_plus(t_data *data)
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

static int		check_precision2(t_data *data, size_t k, int32_t nb, int i)
{
	char	*str;
	int		s;

	str = ft_strnew(k);
	s = 0;
	while (data->conv[i++] != '\0' && s == 0)
	{
		if (data->conv[i] == '.')
		{
			i++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				str[s++] = data->conv[i];
				i++;
			}
		}
	}
	str[s] = '\0';
	s = ft_atoi(str);
	if (nb < 0)
		s++;
	i = 0;
	while (s-- > ft_nblen(nb))
		i++;
	return (i);
}

int				check_precision(t_data *data, int32_t nb)
{
	int		i;
	size_t	k;

	i = 0;
	k = 0;
	while (data->conv[i] != '\0' && k == 0)
	{
		if (data->conv[i] == '.')
		{
			data->is_prec = TRUE;
			i++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				i++;
				k++;
			}
		}
		i++;
	}
	i = 0;
	return (check_precision2(data, k, nb, i));
}
