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

INC_PATHS = includes ./includes/checks ./includes/color ./includes/convert ./includes/core ./includes/print
INC := $(addprefix -I,$(INC_PATHS))

FILES = core/ft_printf.c\
		core/utils.c\
		core/parser.c\
		convert/convert_jzlh.c\
		convert/convert_d.c\
		convert/convert_s.c\
		convert/convert_c.c\
		convert/convert_u.c\
		convert/convert_p.c\
		convert/convert_x.c\
		convert/convert_o.c\
		convert/convert_percent.c\
		convert/convert_r.c\
		checks/check_flags.c\
		checks/check_width.c\
		checks/check_spaces.c\
		checks/check_precision_max.c\
		color/color.c\
		color/color2.c\
		color/color3.c\
		print/print_d.c\
		print/print_x.c\
		print/print_xx.c\
		print/print_o.c\
		print/print_u.c\

# Since you add srcs here no nedd to put in in FILES.
SRC := $(addprefix srcs/,$(FILES))


OBJS := $(addprefix obj/,$(FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@if [ -d "./obj" ]; then echo "\033[35mDirectory\033[34m obj\033[35m already exists\033[0m"; else mkdir obj; fi
	@echo "\033[35mCreating ft_printf.a file\033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[35mOptimizing ft_printf.a file\033[0m"
	@ranlib $(NAME)
	@echo "\033[35mMoving object files into\033[34m obj\033[35m folder"
	@echo "\033[35mFt_printf compilation complete\033[0m" "\033[32m [ok] \033[32m"

# Here no need to put $(SRC), since there is all your files in it, and you only
# need one source file, the dependency, which is in $<
# By using obj/ you make sure that your .o match your .c file, with juste the
# directory name changing
obj/%.o: srcs/%.c
	$(CC) -c $(FLAGS) $(INC) $< -o $@

clean:
	@$(RM) obj/*/*.o

fclean: clean
	@$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: fclean clean re