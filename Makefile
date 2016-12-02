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
	  convert_o.c\
	  check_flags.c

SRC =$(addprefix srcs/, $(FILES))

OBJS =$(FILES:.c=.o)

CC = gcc

NAME =libftprintf.a

LIBFT =libft/libft.a

FLAGS = -Wextra -Werror -Wall

RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS):
	$(CC) $(FLAGS) -c $(SRC)

$(LIBFT):
	make -C libft/
clean:
	$(RM) $(OBJS)
	make clean -C libft/

fclean: clean
	$(RM) $(NAME) $(LIBFT)

re: fclean all
