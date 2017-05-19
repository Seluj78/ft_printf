#ifndef PARSER_H
# define PARSER_H

# include "struct.h"
#include "utils.h"
#include "../convert/convert_u.h"
#include "../convert/convert_d.h"
#include "../convert/convert_s.h"
#include "../convert/convert_c.h"
#include "../convert/convert_o.h"
#include "ft_printf.h"
#include "../convert/convert_jzlh.h"
#include "../convert/convert_percent.h"
#include "../convert/convert_r.h"
#include "../convert/convert_p.h"

void		parse_type(t_data *data);
void		parse_format(t_data *data);
void		converter(t_data *data);


# endif
