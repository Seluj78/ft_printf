/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:07:30 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/12 10:13:01 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.h"

int		main(void)
{
//NORMAL
	ft_printf("{:black}This is black !\n");
	ft_printf("{:red}This is red!\n");
	ft_printf("{:green}This is green !\n");
	ft_printf("{:yellow}This is yellow!\n");
	ft_printf("{:blue}This is blue!\n");
	ft_printf("{:purple}This is purple!\n");
	ft_printf("{:cyan}This is cyan!\n");
	ft_printf("{:white}This is white!\n\n");
//BOLD
	ft_printf("{:bblack}This is bold black !\n");
	ft_printf("{:bred}This is bold red!\n");
	ft_printf("{:bgreen}This is bold green !\n");
	ft_printf("{:byellow}This is bold yellow!\n");
	ft_printf("{:bblue}This is bold blue!\n");
	ft_printf("{:bpurple}This is bold purple!\n");
	ft_printf("{:bcyan}This is bold cyan!\n");
	ft_printf("{:bwhite}This is bold white!\n\n");
//underligned
	ft_printf("{:reset}");
	ft_printf("{:ublack}This is underligned black !\n");
	ft_printf("{:ured}This is underligned red!\n");
	ft_printf("{:ugreen}This is underligned green !\n");
	ft_printf("{:uyellow}This is underligned yellow!\n");
	ft_printf("{:ublue}This is underligned blue!\n");
	ft_printf("{:upurple}This is underligned purple!\n");
	ft_printf("{:ucyan}This is underligned cyan!\n");
	ft_printf("{:uwhite}This is underligned white!\n\n");
//UNDERLIGNED BOLD
	ft_printf("{:bwhite}");
	ft_printf("{:ublack}This is underligned bold black !\n");
	ft_printf("{:ured}This is underligned bold red!\n");
	ft_printf("{:ugreen}This is underligned bold green !\n");
	ft_printf("{:uyellow}This is underligned bold yellow!\n");
	ft_printf("{:ublue}This is underligned bold blue!\n");
	ft_printf("{:upurple}This is underligned bold purple!\n");
	ft_printf("{:ucyan}This is underligned bold cyan!\n");
	ft_printf("{:uwhite}This is underligned bold white!\n\n");
//NORMAL COLOR
	ft_printf("{:reset}This is normal terminal color !!\n");
}
