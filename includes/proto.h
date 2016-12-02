/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:23:47 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/01 14:48:30 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H
# include "struct.h"

int		ft_printf(const char *format, ...);
void	parse_format(t_data *data);
void	transfer_to_struct(t_data *data, const char *format);
void	reset_var(t_data *data);
void	converter(t_data *data);
void	converter_j(t_data *data);
void	converter_z(t_data *data);
void	converter_h(t_data *data);
void	converter_hh(t_data *data);
void	converter_l(t_data *data);
void	converter_ll(t_data *data);
void	convert_s(t_data *data);
void	convert_d(t_data *data);
void	convert_zd(t_data *data);
void	convert_jd(t_data *data);
void	convert_hhd(t_data *data);
void	convert_c(t_data *data);
void	convert_p(t_data *data);
void	convert_u(t_data *data);
void	convert_ju(t_data *data);
void	convert_zu(t_data *data);
void	convert_hu(t_data *data);
void	convert_hhu(t_data *data);
void	convert_x(t_data *data);
void	convert_jx(t_data *data);
void	convert_zx(t_data *data);
void	convert_hx(t_data *data);
void	convert_hhx(t_data *data);
void	convert_lx(t_data *data);
void	convert_llx(t_data *data);
void	convert_o(t_data *data);
void	convert_zo(t_data *data);
void	convert_jo(t_data *data);
void	convert_ho(t_data *data);
void	convert_hho(t_data *data);
void	convert_llo(t_data *data);
void	convert_lc(t_data *data);
void	convert_ls(t_data *data);
void	convert_lld(t_data *data);
void	convert_llu(t_data *data);
void	convert_lu(t_data *data);
void	ft_putwstr(wchar_t *str);
void	check_hashtag(t_data *data);
void	check_plus_moins(t_data *data);
char	*ft_strcapitalize(char *str);
char	*ft_strlower(char *str);
int		ft_putwchar(int c);
int		ft_putnwchar(int c, int size);
#endif
