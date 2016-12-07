/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:24:20 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/07 13:16:18 by jlasne           ###   ########.fr       */
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
** COLORS
*/
/*
[reset] =\033[0m


//Regular Colors

[Black]=\033[0;30m        # Black
[Red]=\033[0;31m          # Red
[Green]=\033[0;32m        # Green
[Yellow]=\033[0;33m       # Yellow
[Blue]=\033[0;34m         # Blue
[Purple]=\033[0;35m       # Purple
[Cyan]=\033[0;36m         # Cyan
[White]=\033[0;37m        # White


//Bold

[BBlack]=\033[1;30m       # Black
[BRed]=\033[1;31m         # Red
[BGreen]=\033[1;32m       # Green
[BYellow]=\033[1;33m      # Yellow
[BBlue]=\033[1;34m        # Blue
[BPurple]=\033[1;35m      # Purple
[BCyan]=\033[1;36m        # Cyan
[BWhite]=\033[1;37m       # White


//Underline

[UBlack]=\033[4;30m       # Black
[URed]=\033[4;31m         # Red
[UGreen]=\033[4;32m       # Green
[UYellow]=\033[4;33m      # Yellow
[UBlue]=\033[4;34m        # Blue
[UPurple]=\033[4;35m      # Purple
[UCyan]=\033[4;36m        # Cyan
[UWhite]=\033[4;37m       # White
*/

/*
** va_list *ap -> Args list used by ft_printf
** l_format -> format length
** format -> contains the XXX in  ft_printf("XXX", foo, bar);
** TODO ->#+-0' 'taille min champ, precision,
** current_percent -> current percent being processed
*/
#endif
