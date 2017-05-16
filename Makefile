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

CC = gcc

NAME = ft_printf.a

FLAGS = -Wextra -Werror -Wall

INC_PATHS = ./includes/checks ./includes/color ./includes/convert ./includes/core ./includes/print
INC = $(addprefix -I,$(INC_PATHS))

FILES = srcs/core/ft_printf.c\
		srcs/core/utils.c\
		srcs/core/parser.c\
		srcs/convert/convert_jzlh.c\
		srcs/convert/convert_d.c\
		srcs/convert/convert_s.c\
		srcs/convert/convert_c.c\
		srcs/convert/convert_u.c\
		srcs/convert/convert_p.c\
		srcs/convert/convert_x.c\
		srcs/convert/convert_o.c\
		srcs/convert/convert_percent.c\
		srcs/convert/convert_r.c\
		srcs/checks/check_flags.c\
		srcs/checks/check_width.c\
		srcs/checks/check_spaces.c\
		srcs/checks/check_precision_max.c\
		srcs/color/color.c\
		srcs/color/color2.c\
		srcs/color/color3.c\
		srcs/print/print_d.c\
		srcs/print/print_x.c\
		srcs/print/print_xx.c\
		srcs/print/print_o.c\
		srcs/print/print_u.c\


SRC = $(addprefix srcs/, $(FILES))

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@if [ -d "./obj" ]; then echo "\033[35mDirectory\033[34m obj\033[35m already exists\033[0m"; else mkdir obj; fi
	@echo "\033[35mCreating ft_printf.a file\033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[35mOptimizing ft_printf.a file\033[0m"
	@ranlib $(NAME)
	@echo "\033[35mMoving object files into\033[34m obj\033[35m folder"
	@mv *.o obj/
	@echo "\033[35mFt_printf compilation complete\033[0m" "\033[32m [ok] \033[32m"

%.o:srcs/%.c
	@$(CC) -c $(SRC) $(FLAGS) $(INC) $< -o $@

clean:
	@$(RM) obj/*.o

fclean: clean
	@$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: fclean clean re
