/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:22:28 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/01 16:46:00 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"
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
	ft_printf("My ft_printf	:String: %s\n", "This is a String");
	printf("Libc printf	:String: %s\n", "This is a String");
	ft_printf("My ft_printf	:widechars: %S\n", L"صباح الخير");
	printf("Libc printf	:widechars: %ls\n", L"صباح الخير");
	ft_printf("My ft_printf	:Char: %c\n", 'c');
	printf("Libc printf	:Char: %c\n", 'c');
	ft_printf("My ft_printf	:widechar: %C\n", 256);
	printf("Libc printf	:widechar: %lc\n", 256);
	ft_printf("My ft_printf	:Decimal: %d\n", 42);
	printf("Libc printf	:Decimal: %d\n", 42);
	ft_printf("My ft_printf	:long int: %D\n", 123456789123);
	printf("Libc printf	:long int: %ld\n", 123456789123);
	ft_printf("My ft_printf	:Pointer adress: %p\n", &c);
	printf("Libc printf	:Pointer adress: %p\n", &c);
	ft_printf("My ft_printf	:downcase hex: %x\n", 123456789);
	printf("Libc printf	:downcase hex: %x\n", 123456789);
	ft_printf("My ft_printf	:UPCASE HEX: %X\n", 123456789);
	printf("Libc printf	:UPCASE HEX: %X\n", 123456789);
	ft_printf("My ft_printf	:long downcase hex: %lx\n", 1234567891234);
	printf("Libc printf	:long downcase hex: %lx\n", 1234567891234);
	ft_printf("My ft_printf	:LONG UPCASE HEX: %lX\n", 1234567891234);
	printf("Libc printf	:LONG UPCASE HEX: %lX\n", 1234567891234);
	ft_printf("My ft_printf	:Unsigned decimal: %u ; %u\n", 42, -42);
	printf("Libc printf	:Unsigned decimal: %u ; %u\n", 42, -42);
	ft_printf("My ft_printf	:Long unsigned: %U\n", -123456789123);
	printf("Libc printf	:Long unsigned: %lu\n", -123456789123);
	ft_printf("My ft_printf	:Octal convertion: %o\n", 4242);
	printf("Libc printf	:Octal convertion: %#o\n", 4242);
	ft_printf("My ft_printf	:long Octal convertion: %O\n", 123456789123);
	printf("Libc printf	:long Octal convertion: %lo\n", 123456789123);
	ft_printf("My ft_printf	:abc %%\n");
	printf("Libc printf	:abc %%\n");
	/*printf("int = %p;\nchar = %p;\nunsigned int = %p;\n", y, b, k);
	ft_printf("int = %p;\nchar = %p;\nunsigned int = %p;\n", y, b, k);*/
	printf("Libc Printf	:Avec '+' = %+d ;Sans '+' = %d;\n", i, i);
	ft_printf("My ft_printf	:Avec '+' = %+d ;Sans '+' = %d;\n", i, i);
	return (0);
}
