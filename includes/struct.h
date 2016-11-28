/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:24:20 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/28 14:46:02 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stdarg.h>

/*
 ** Typedefs :
 */

typedef int		t_bool;

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
	int			l_format;
	char		*format;
	char		type;
	char		*current_var;
	int			ret;
	int			index;
}				t_data;

/*
** va_list *ap -> Args list used by ft_printf
** l_format -> format length
** percent_location -> contains the location of % in format
** nb_percent -> numbers of percent
** format -> contains the XXX in  ft_printf("XXX", foo, bar);
** type -> sSpdDioOuUxXcC
** DONE : sdcpxX
** current_percent -> current percent being processed
**
**
**
*/
#endif
