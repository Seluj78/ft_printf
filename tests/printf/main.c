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
     printf("%s\n", "This is a String");
     printf("%ls\n", L"صباح الخير");
     printf("%c\n", 'c');
     printf("%lc\n", 256);
     printf("%d\n", 42);
     printf("%ld\n", 123456789123);
     printf("%p\n", &c);
     printf("%x\n", 123456789);
     printf("%X\n", 123456789);
     printf("%lx\n", 1234567891234);
     printf("%lX\n", 1234567891234);
     printf("%u ; %u\n", 42, -42);
     printf("%lu\n", -123456789123);
     printf("%#o\n", 4242);
     printf("%lo\n", 123456789123);
     printf("abc %%\n");
     printf("int = %p;\nchar = %p;\nunsigned int = %p;\n", y, b, k);
     printf("Avec '+' = %+d ;Sans '+' = %d;\n", i, i);
     printf("precision pour 'd': %.5d;\n", 123);
     printf("precision pour 'hd': %.5hd;\n", (short int)123);
     printf("precision pour 'lld': %.5lld;\n", (long long int)123);
     printf("precision pour 'ld': %.5ld;\n", (long int)123);
     printf("precision pour 'zd': %.5zd;\n", 123);
     printf("precision pour 'jd': %.5jd;\n", (intmax_t)123);
     printf("precision pour 'u': %.5u;\n", 123);
     printf("precision pour 'hu': %.5hu;\n", (short int)123);
     printf("precision pour 'llu': %.5llu;\n", (long long int)123);
     printf("precision pour 'lu': %.5lu;\n", (long int)123);
     printf("precision pour 'zu': %.5zu;\n", (size_t)123);
     printf("precision pour 'ju': %.5ju;\n", (intmax_t)123);
     printf("precision pour 'o': %.5o;\n", 123);
     printf("precision pour 'ho': %.5ho;\n", (short int)123);
     printf("precision pour 'hho': %.5hho;\n",(unsigned char)123);
     printf("precision pour 'llo': %.5llo;\n", (long long int)123);
     printf("precision pour 'lo': %.5lo;\n", (long int)123);
     printf("precision pour 'zo': %.5zo;\n", (size_t)123);
     printf("precision pour 'jo': %.5jo;\n", (intmax_t)123);
	 printf("Largeur de champs '5d,10' : %5d;\n", 10);
    return (0);
}
