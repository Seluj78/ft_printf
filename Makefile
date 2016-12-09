NAME =	libftprintf.a

NAMEBASE =	libftprintf

LIB = ./libft/libft.a

FLAGS =	-Wall -Wextra -Werror

INCFLAG =  -I./includes

SRCDIR = srcs
OBJDIR = objs

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
	  check_precision_max.c\
	  color.c\
	  print_d.c\
	  print_x.c\
	  print_xx.c\
	  print_o.c\
	  print_u.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRCDIR)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJDIR)/,$(OBJ_NAME))

.SILENT:

all: $(NAME)
	echo "\033[38;5;44m☑️  ALL    $(NAMEBASE) is done\033[0m\033[K"

$(NAME): $(OBJ) $(LIB)
	printf "\r\033[38;5;11m⌛  MAKE   $(NAMEBASE) please wait ...\033[0m\033[K"
	cp $(LIB) $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	echo -en "\r\033[38;5;22m☑️  MAKE   $(NAMEBASE)\033[0m\033[K"
	echo "\r\033[38;5;184m👥  GROUP MEMBER(S):\033[0m\033[K"
	echo "\r\033[38;5;15m`cat auteur | sed s/^/\ \ \ \ /g`\033[0m\033[K"

$(OBJ): $(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	gcc $(FLAGS) -o $@ -c $< $(INCFLAG)

$(LIB):
	make -C libft/ fclean
	make -C libft/

clean:
	printf "\r\033[38;5;11m⌛  CLEAN  $(NAMEBASE) please wait ...\033[0m\033[K"
	rm -f $(OBJ)
	rm -f $(OBJDIR)/$(OBJ_NAME)
	make -C libft/ clean
	printf "\r\033[38;5;11m☑️  CLEAN  $(NAMEBASE) is done\033[0m\033[K"

fclean: clean
	printf "\r\033[38;5;11m⌛  FCLEAN $(NAMEBASE) please wait ...\033[0m\033[K"
	rm -f $(NAME)
	make -C libft/ fclean
	printf "\r\033[38;5;11m☑️  FCLEAN  $(NAMEBASE) is done\033[0m\033[K"

re: fclean all

.PHONY: fclean clean re
