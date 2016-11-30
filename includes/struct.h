/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:24:20 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/28 15:09:40 by jlasne           ###   ########.fr       */
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
	char		*conv;
	t_bool		is_l;
	t_bool		is_ll;
	t_bool		is_h;
	t_bool		is_hh;
}				t_data;

/*
** va_list *ap -> Args list used by ft_printf
** l_format -> format length
** format -> contains the XXX in  ft_printf("XXX", foo, bar);
** TODO ->#+-0' 'taille min champ, precision, hh h l ll j z
** current_percent -> current percent being processed
**
**
**
*/
#endif
