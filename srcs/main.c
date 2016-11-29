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
	(void)argc;
	(void)argv;
	/*
	ft_printf("String: %s\nDecimal: %d\n", "This is a String", 42);
	ft_printf("Char: %c\nPointer adress: %p\n", 'c', "String adress");
	ft_printf("downcase hex: %x\nUPCASE HEX: %X\n", 123456789, 123456789);
	ft_printf("Unsigned decimal: %u ; %u\n", 42, -42);
	ft_printf("Octal convertion: %o\n", 424242424242);
	ft_putstr("\n\n");


	printf("String: %s\nDecimal: %d\n", "This is a String", 42);
	printf("Char: %c\nPointer adress: %p\n", 'c', "String adress");
	printf("downcase hex: %x\nUPCASE HEX: %X\n", 123456789, 123456789);
	printf("Unsigned decimal: %u ; %u\n", 42, -42);
	ft_printf("Octal convertion: %o\n", 424242424242);*/
	ft_printf("%-5.2d", 42);
	return (0);
}
