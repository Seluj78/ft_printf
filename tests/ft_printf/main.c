#include "../../includes/includes.h"
#include <locale.h>

int		main(int argc, char **argv)
{
    char			c;
    int				i;
    int				*y;
    char			*b;
    unsigned int	r;
    unsigned int	*k;
    
    setlocale(LC_ALL, "");
    r = 150;
    c = 'A';
    i = 20;
    y = &i;
    b = &c;
    k = &r;
    (void)argc;
    (void)argv;
	 ft_printf("%s\n", "This is a String");
     ft_printf("%S\n", L"صباح الخير");
     ft_printf("%c\n", 'c');
     ft_printf("%C\n", 256);
     ft_printf("%d\n", 42);
     ft_printf("%D\n", 123456789123);
     ft_printf("%p\n", &c);
     ft_printf("%x\n", 123456789);
     ft_printf("%X\n", 123456789);
     ft_printf("%lx\n", 1234567891234);
     ft_printf("%lX\n", 1234567891234);
     ft_printf("%u ; %u\n", 42, -42);
     ft_printf("%U\n", -123456789123);
     ft_printf("%o\n", 4242);
     ft_printf("%O\n", 123456789123);
     ft_printf("abc %%\n");
     ft_printf("int = %p;\nchar = %p;\nunsigned int = %p;\n", y, b, k);
     ft_printf("Avec '+' = %+d ;Sans '+' = %d;\n", i, i);
     ft_printf("precision pour 'd': %.5d;\n", 123);
     ft_printf("precision pour 'hd': %.5hd;\n", 123);
     ft_printf("precision pour 'lld': %.5lld;\n", 123);
     ft_printf("precision pour 'ld': %.5ld;\n", 123);
     ft_printf("precision pour 'zd': %.5zd;\n", 123);
     ft_printf("precision pour 'jd': %.5jd;\n\n", 123);
     ft_printf("precision pour 'u': %.5u;\n", 123);
     ft_printf("precision pour 'hu': %.5hu;\n", 123);
     ft_printf("precision pour 'llu': %.5llu;\n", 123);
     ft_printf("precision pour 'lu': %.5lu;\n", 123);
     ft_printf("precision pour 'zu': %.5zu;\n", 123);
     ft_printf("precision pour 'ju': %.5ju;\n\n", 123);
     ft_printf("precision pour 'o': %.5o;\n", 123);
     ft_printf("precision pour 'ho': %.5ho;\n", 123);
     ft_printf("precision pour 'hho': %.5hho;\n", 123);
     ft_printf("precision pour 'llo': %.5llo;\n", 123);
     ft_printf("precision pour 'lo': %.5lo;\n", 123);
     ft_printf("precision pour 'zo': %.5zo;\n", 123);
     ft_printf("precision pour 'jo': %.5jo;\n", 123);
    return (0);
}
