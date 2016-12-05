make -C ../
gcc printf/main.c ../libftprintf.a -o printf.out
gcc ft_printf/main.c ../libftprintf.a -o ft_printf.out
./printf.out > printf.txt
./ft_printf.out > ft_printf.txt
diff -U 3 printf.txt ft_printf.txt
