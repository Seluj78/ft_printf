/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_precision_max.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:30:56 by estephan          #+#    #+#             */
/*   Updated: 2016/12/07 17:38:09 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

static void		check_precision_max2(t_data *data, size_t k, char *str2)
{
	int		s;
	int		i;
	char	*str;

	s = 0;
	str = ft_strnew(k);
	i = 0;
	while (data->conv[i] != '\0' && s == 0)
	{
		if (data->conv[i] == '.')
		{
			i++;
			while (data->conv[i] >= '0' && data->conv[i] <= '9')
			{
				str[s] = data->conv[i];
				s++;
				i++;
			}
		}
		i++;
	}
	str[s] = '\0';
	s = ft_atoi(str);
	while (s < ft_strlen(str2))
		str2[ft_strlen(str2) - 1] = '\0';
}

void			check_precision_max(t_data *data, char *str2)
{
	int		i;
	size_t	k;

	i = 0;
	k = 0;
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
	check_precision_max2(data, k, str2);
}
