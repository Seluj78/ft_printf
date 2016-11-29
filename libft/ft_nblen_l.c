/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen_l.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:08:49 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/28 11:09:59 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nblen_l(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len = ft_nblen_l(n);
		len++;
	}
	else if (n >= 10)
	{
		len = ft_nblen_l(n / 10);
		len++;
	}
	else
		len++;
	return (len);
}
