# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlasne <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 12:34:13 by jlasne            #+#    #+#              #
#    Updated: 2016/11/30 18:11:08 by estephan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_printf

SRC = main.c\
	  ft_printf.c\
	  utils.c\
	  parser.c\
	  convert_jzlh.c\
	  convert_d.c\
	  convert_s.c\
	  convert_c.c\
	  convert_u.c\
	  convert_p.c\
	  convert_x.c\
	  convert_o.c

OBJ = $(SRC:.c=.o)

SRC_PATH = srcs/

SRC_POS = $(addprefix $(SRC_PATH),$(SRC))

INC = -I includes

LIBFT =	libft/libft.a

CC = clang

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIBFT)

%.o : $(SRC_PATH)/%.c
	    $(CC) -o $@ -c $< $(FLAGS)

$(LIBFT):
	make -C ./libft/

clean:
	rm -rf $(OBJ)
	make clean -C ./libft/

fclean: clean
	rm -rf $(NAME)
	make fclean -C ./libft/

re: fclean all
