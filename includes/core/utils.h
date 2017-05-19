#ifndef UTILS_H
# define UTILS_H

# include "../core/struct.h"

void	parse_utils(t_data *data, int end);
void	ft_putwstr(wchar_t *str);
char	*ft_strlower(char *str);
char	*ft_strcapitalize(char *str);
void	transfer_to_struct(t_data *data, const char *format);

# endif