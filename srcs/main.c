/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:22:28 by jlasne            #+#    #+#             */
/*   Updated: 2016/11/29 13:18:25 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		main(int argc, char **argv)
{
	wint_t C = 131;
	wchar_t Cs[50] = {L'S', L'a', L'l', L'u', L't', L' ', L'G', 130, L'r', L'a', L'r', L'd', L' ', L'!', L'\0'};

	(void)argc;
	(void)argv;
	ft_printf("String: %s\n", "This is a String");
	ft_printf("widechars: %S\n", Cs);
	ft_printf("Char: %c\n", 'c');
	ft_printf("widechar: %C\n", C);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("long int: %D\n", 123456789123);
	ft_printf("Pointer adress: %p\n", "String adress");
	ft_printf("downcase hex: %x\n", 123456789);
	ft_printf("UPCASE HEX: %X\n", 123456789);
	//ft_printf("long downcase hex: %lx\n", 1234567891234);
	//ft_printf("LONG UPCASE HEX: %lX\n", 1234567891234);
	ft_printf("Unsigned decimal: %u ; %u\n", 42, -42);
	ft_printf("Long unsigned: %U\n", -123456789123);
	ft_printf("Octal convertion: %o\n", 4242);
	ft_printf("long Octal convertion: %O\n", 123456789123);
	ft_printf("abc %%\n");

	ft_putstr("\n\n");

	printf("String: %s\n", "This is a String");
	printf("widechars: %S\n", Cs);
	printf("Char: %c\n", 'c');
	printf("widechar: %C\n", C);
	printf("Decimal: %d\n", 42);
	printf("long int: %ld\n", 123456789123);
	printf("Pointer adress: %p\n", "String adress");
	printf("downcase hex: %x\n", 123456789);
	printf("UPCASE HEX: %X\n", 123456789);
	//printf("long downcase hex: %lx\n", 1234567891234);
	//printf("LONG UPCASE HEX: %lX\n", 1234567891234);
	printf("Unsigned decimal: %u ; %u\n", 42, -42);
	printf("Long unsigned: %lu\n", -123456789123);
	printf("Octal convertion: %o\n", 4242);
	printf("long Octal convertion: %lo\n", 123456789123);
	printf("abc %%\n");
	return (0);
}
