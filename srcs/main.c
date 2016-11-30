/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:22:28 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/30 14:18:09 by estephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"
#include <locale.h>

int		main(int argc, char **argv)
{
	setlocale(LC_ALL, "");
wint_t C = 131;
wchar_t Cs[50] = {L'S', L'a', L'l', L'u', L't', L' ', L'G', 130, L'r', L'a', L'r', L'd', L' ', L'!', L'\0'};
//My ft_printf	:
//Libc printf		:
	(void)argc;
	(void)argv;
	ft_printf("My ft_printf	:String: %s\n", "This is a String");
	printf("Libc printf	:String: %s\n", "This is a String");
	ft_printf("My ft_printf	:widechars: %S\n", L"صباح الخير");
	printf("Libc printf	:widechars: %ls\n", L"صباح الخير");
	ft_printf("My ft_printf	:Char: %c\n", 'c');
	printf("Libc printf	:Char: %c\n", 'c');
	ft_printf("My ft_printf	:widechar: %C\n", L"ښ");
	printf("Libc printf	:widechar: %lc\n", 233);
	ft_printf("My ft_printf	:Decimal: %d\n", 42);
	ft_printf("My ft_printf	:String: %s\n", "This is a String");
	printf("Libc printf	:String: %s\n", "This is a String");
	ft_printf("My ft_printf	:widechars: %S\n", Cs);
	printf("Libc printf	:widechars: %S\n", Cs);
	ft_printf("My ft_printf	:Char: %c\n", 'c');
	printf("Libc printf	:Char: %c\n", 'c');
	ft_printf("My ft_printf	:widechar: %C\n", C);
	printf("Libc printf	:widechar: %C\n", C);
	ft_printf("My ft_printf	:Decimal: %d\n", 42);
	printf("Libc printf	:Decimal: %d\n", 42);
	ft_printf("My ft_printf	:long int: %D\n", 123456789123);
	printf("Libc printf	:long int: %ld\n", 123456789123);
	ft_printf("My ft_printf	:Pointer adress: %p\n", "String adress");
	printf("Libc printf	:Pointer adress: %p\n", "String adress");
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
	printf("Libc printf	:Octal convertion: %o\n", 4242);
	ft_printf("My ft_printf	:long Octal convertion: %O\n", 123456789123);
	printf("Libc printf	:long Octal convertion: %lo\n", 123456789123);
	ft_printf("My ft_printf	:abc %%\n");
	printf("Libc printf	:abc %%\n");
	ft_printf("%ld\n", 9223372036854775807);
	printf("%ld", 9223372036854775807);
	return (0);
}
