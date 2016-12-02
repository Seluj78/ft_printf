NAME = libftprintf.a
MKEX = gcc -o
COMP = gcc -c
AR = ar -rc
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


FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
SRC =$(addprefix srcs/, $(FILES))

all : $(NAME)

$(NAME) : $(OBJECT)
	$(AR) $(NAME) $(OBJECT)
	ranlib $(NAME)
	echo "\033[32m$(NAME) OK ! \033[0m"

$(OBJECT) :
	$(COMP) $(SRC) $(FLAGS)
	echo "\033[33mCompilation OK\033[0m"

clean :
	/bin/rm -f $(OBJECT)
	echo "\033[33mObject deleted\033[0m"


fclean : clean
	/bin/rm -f $(NAME)
	echo "\033[33mExec deleted\033[0m"

re : fclean all