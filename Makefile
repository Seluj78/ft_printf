# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlasne <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 10:13:18 by jlasne            #+#    #+#              #
#    Updated: 2016/12/13 14:52:47 by jlasne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FILES = ft_printf.c \
		   utils.c\
		   parser.c\
		   convert_jzlh.c\
		   convert_d.c\
		   convert_s.c\
		   convert_c.c\
		   convert_u.c\
		   convert_p.c\
		   convert_x.c\
		   convert_o.c\
		   convert_percent.c\
		   check_flags.c\
		   check_width.c\
		   check_spaces.c\
		   check_precision_max.c\
		   color.c\
		   print_d.c\
		   print_x.c\
		   print_xx.c\
		   print_o.c\
		   print_u.c\
		   convert_r.c

SRC = $(addprefix srcs/, $(FILES))

OBJS = $(FILES:.c=.o)

CC = gcc

NAME = ft_printf.a

FLAGS = -Wextra -Werror -Wall

RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS):
	$(CC) $(FLAGS) -c $(SRC)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all
