/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 10:27:25 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/21 10:54:15 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_returnfunc(int neg, int nb)
{
	if (neg == 1)
	{
		return (-nb);
	}
	else
	{
		return (nb);
	}
	return (nb);
}

static int		ft_whilefunc(const char *str, int i)
{
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
	{
		i++;
	}
	return (i);
}

int				ft_atoi(const char *str)
{
	int i;
	int nb;
	int neg;

	nb = 0;
	neg = 0;
	i = 0;
	i = ft_whilefunc(str, i);
	if (str[i] == '-')
	{
		neg = 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while ((str[i] != 0) && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb *= 10;
		nb += (int)str[i] - '0';
		i++;
	}
	return (ft_returnfunc(neg, nb));
}
