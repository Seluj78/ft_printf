/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:24:20 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/06 17:54:15 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stdarg.h>

/*
** Typedefs :
*/

typedef char		t_bool;

/*
**Defines relative to typedefs
*/

# define TRUE 1
# define FALSE 0

/*
**Structs :
*/

typedef struct	s_data
{
	va_list		*ap;
	char		*format;
	int			l_format;
	char		type;
	int			ret;
	int			index;
	int			nb_len;
	char		*conv;
	t_bool		is_l;
	t_bool		is_ll;
	t_bool		is_h;
	t_bool		is_hh;
	t_bool		is_j;
	t_bool		is_z;
	t_bool		has_hashtag;
	t_bool		moinsloc;
	t_bool		plusloc;
	t_bool		is_prec;
}				t_data;

/*
** va_list *ap -> Args list used by ft_printf
** l_format -> format length
** format -> contains the XXX in  ft_printf("XXX", foo, bar);
** TODO ->#+-0' 'taille min champ, precision,
** current_percent -> current percent being processed
*/
#endif
