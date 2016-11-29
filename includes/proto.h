/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:23:47 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/28 13:15:42 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PROTO_H
# define PROTO_H

# include "struct.h"

int		ft_printf(const char *format, ...);
void	parse_format(t_data *data);
//void	find_percent(t_data *data);
void	transfer_to_struct(t_data *data, const char *format);
//void	get_type(t_data *data);
//void	next_percent(t_data *data);
void	converter(t_data *data);
void	convert_s(t_data *data);
void	convert_d(t_data *data);
void	convert_c(t_data *data);
void	convert_p(t_data *data);
void	convert_u(t_data *data);
void	convert_x(t_data *data);
char	*ft_strcapitalize(char *str);
/*
**DEBUG PROTO
*/

#endif
