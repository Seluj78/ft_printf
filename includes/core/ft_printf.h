#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <core/struct.h>
#include <color/color.h>
#include <core/parser.h>
#include <core/utils.h>

int				ft_printf(const char *format, ...);
void			reset_var(t_data *data);
void			get_type(t_data *data);

# endif