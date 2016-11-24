/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:23:47 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/21 11:09:53 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PROTO_H
# define PROTO_H

# include "struct.h"

int		ft_printf(const char *format, ...);
void	parse_format(const char *format, t_data *data);
void	find_percent(t_data *data);
void	transfer_to_struct(t_data *data, const char *format);
void	get_type(t_data *data);
void	next_percent(t_data *data);



/*
**DEBUG PROTO
*/

void	print_percent_loc(t_data *data);

#endif
