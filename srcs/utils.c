/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:03:27 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/28 13:26:01 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

void	transfer_to_struct(t_data *data, const char *format)
{
	int i;

	i = 0;
	if (!(data->format = (char *)malloc(sizeof(char) * (data->l_format + 1))))
		return;
	while (format[i] != '\0')
	{
		data->format[i] = format[i];
		i++;
	}
	data->format[i] = '\0';
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i - 1] == ' '))
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
