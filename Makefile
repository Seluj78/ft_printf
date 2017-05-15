# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlasne <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/06 10:15:15 by jlasne            #+#    #+#              #
#    Updated: 2017/05/15 16:01:34 by jlasne           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(addprefix srcs/, $(FILES))

OBJS = $(FILES:.c=.o)

CC = gcc

NAME = ft_printf.a

FLAGS = -Wextra -Werror -Wall

INC = ./includes

FILES = ft_printf.c\
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

all: $(NAME)

$(NAME): $(OBJS)
	@if [ -d "./obj" ]; then echo; else mkdir obj; fi
	@echo "\033[35mCreating ft_printf.a file\033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[35mOptimizing ft_printf.a file\033[0m"
	@ranlib $(NAME)
	@echo "\033[35mFt_printf compilation complete\033[0m" "\033[32m [ok] \033[32m"
	@mv *.o obj/

%.o:srcs/%.c
	@$(CC) -c $(FLAGS) -I $(INC) $< -o $@

clean:
	@$(RM) obj/*.o

fclean: clean
	@$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: fclean clean re
