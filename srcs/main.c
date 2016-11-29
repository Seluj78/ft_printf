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
	
	//wint_t C = 131;
	//wchar_t Cs[50] = {L'S', L'a', L'l', L'u', L't', L' ', L'G', 130, L'r', L'a', L'r', L'd', L' ', L'!', L'\0'};

	(void)argc;
	(void)argv;
	/*ft_printf("String: %s\nDecimal: %d\n", "This is a String", 42);
	ft_printf("Char: %c\nPointer adress: %p\n", 'c', "String adress");
	ft_printf("downcase hex: %x\nUPCASE HEX: %X\n", 123456789, 123456789);
	ft_printf("Unsigned decimal: %u ; %u\n", 42, -42);
	ft_printf("Octal convertion: %o\n", 4242);
	ft_printf("Octal convertion: %O\n", 123456789123);
	ft_printf("widechar: %C\n", C);
	ft_printf("widechars: %S\n", Cs);
	ft_printf("long int: %D\n", 123456789123);
	ft_printf("Long unsigned: %U\n", -123456789123);
	ft_printf("abc %%\n");
	
	ft_putstr("\n\n");
	ft_putstr("\n\n");
	
	
	
	printf("String: %s\nDecimal: %d\n", "This is a String", 42);
	printf("Char: %c\nPointer adress: %p\n", 'c', "String adress");
	printf("downcase hex: %x\nUPCASE HEX: %X\n", 123456789, 123456789);
	printf("Unsigned decimal: %u ; %u\n", 42, -42);
	printf("Octal convertion: %o\n", 4242);
	printf("Octal convertion: %lo\n", 123456789123);
	printf("widechar: %C\n", C);
	printf("widechars: %S\n", Cs);
	printf("long int: %ld\n", 123456789123);
	printf("Long unsigned: %lu\n", -123456789123);
	printf("abc %%\n");*/
	ft_printf("bonjour %ls, Je suis %s. J'ai %d ans et tu semble avoir %d ans", "Alexandre", "Jules", 18, 29);
	return (0);
}
