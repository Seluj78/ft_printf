/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:24:20 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/08 13:52:46 by jlasne           ###   ########.fr       */
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
	char		c;
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
//	int			current_color;
//	int			nb_color;
//	int			color_place;
//	int			*selectors_place;
}				t_data;

/*
** COLORS
*/

# define RESET "\033[0m"

/*
** Regular Colors
*/

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

/*
** Blold
*/

# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define BWHITE "\033[1;37m"

/*
** Underline
*/

# define UBLACK "\033[4;30m"
# define URED "\033[4;31m"
# define UGREEN "\033[4;32m"
# define UYELLOW "\033[4;33m"
# define UBLUE "\033[4;34m"
# define UPURPLE "\033[4;35m"
# define UCYAN "\033[4;36m"
# define UWHITE "\033[4;37m"

#endif
