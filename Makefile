# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlasne <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 10:13:18 by jlasne            #+#    #+#              #
#    Updated: 2016/12/15 14:42:14 by jlasne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

NAMEBASE =	libftprintf

LIB = ./libft/libft.a

FLAGS =	-Wall -Wextra -Werror -g

INCFLAG =  -I./includes

SRCDIR = srcs
OBJDIR = ./
SRC_NAME = ft_printf.c \
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
	  color2.c\
	  color3.c\
	  print_d.c\
	  print_x.c\
	  print_xx.c\
	  print_o.c\
	  print_u.c\
	  convert_r.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRCDIR)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJDIR)/,$(OBJ_NAME))

#.SILENT:

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	cp $(LIB) $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): %.o: $(SRCDIR)/%.c
	gcc $(FLAGS) -o $@ -c $< $(INCFLAG)

$(LIB):
	make -C libft/ fclean
	make -C libft/

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_NAME)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: fclean clean re
