#ifndef COLOR_H
# define COLOR_H

# include "../core/struct.h"
# include "colors.h"
# include "color2.h"

int		put_color(t_data *data, int i);
int		put_color2(t_data *data, int i);
int		put_color3(t_data *data, int i);
void	parse_color(t_data *data);

#endif
