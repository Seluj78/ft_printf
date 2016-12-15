/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:07:30 by jlasne            #+#    #+#             */
/*   Updated: 2016/12/13 10:16:23 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int		main(void)
{
//NORMAL
	ft_printf("{:reset}");
	ft_printf("{:black}This is black !\n");
	ft_printf("{:red}This is red!\n");
	ft_printf("{:green}This is green !\n");
	ft_printf("{:yellow}This is yellow!\n");
	ft_printf("{:blue}This is blue!\n");
	ft_printf("{:purple}This is purple!\n");
	ft_printf("{:cyan}This is cyan!\n");
	ft_printf("{:white}This is white!\n\n");
//BOLD
	ft_printf("{:reset}");
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
//Reverse colors
	ft_printf("{:reset}");
	ft_printf("{:rblack}This is reversed black!\n");
	ft_printf("{:rred}This is reversed red!\n");
	ft_printf("{:rgreen}This is reversed green!\n");
	ft_printf("{:ryellow}This is reversed yellow!\n");
	ft_printf("{:rblue}This is reversed blue!\n");
	ft_printf("{:rpurple}This is reversed purple!\n");
	ft_printf("{:rcyan}This is reversed cyan!\n");
	ft_printf("{:rwhite}This is reversed white!\n\n");
//Bold reverse
	ft_printf("{:reset} {:bwhite}");
	ft_printf("{:rblack}This is reversed boldblack!\n");
	ft_printf("{:rred}This is reversed bold red!\n");
	ft_printf("{:rgreen}This is reversed bold green!\n");
	ft_printf("{:ryellow}This is reversed bold yellow!\n");
	ft_printf("{:rblue}This is reversed bold blue!\n");
	ft_printf("{:rpurple}This is reversed bold purple!\n");
	ft_printf("{:rcyan}This is reversed bold cyan!\n");
	ft_printf("{:rwhite}This is reversed bold white!\n\n");
//Underline reverse
	ft_printf("{:reset} {:uwhite}");
	ft_printf("{:rblack}This is reversed underligned black!\n");
	ft_printf("{:rred}This is reversed underligned red!\n");
	ft_printf("{:rgreen}This is reversed underligned green!\n");
	ft_printf("{:ryellow}This is reversed underligned yellow!\n");
	ft_printf("{:rblue}This is reversed underligned blue!\n");
	ft_printf("{:rpurple}This is reversed underligned purple!\n");
	ft_printf("{:rcyan}This is reversed underligned cyan!\n");
	ft_printf("{:rwhite}This is reversed underligned white!\n\n");
//Underline bold reverse
	ft_printf("{:reset} {:uwhite} {:bwhite}");
	ft_printf("{:rblack}This is reversed underligned bold black!\n");
	ft_printf("{:rred}This is reversed underligned bold red!\n");
	ft_printf("{:rgreen}This is reversed underligned bold green!\n");
	ft_printf("{:ryellow}This is reversed underligned bold yellow!\n");
	ft_printf("{:rblue}This is reversed underligned bold blue!\n");
	ft_printf("{:rpurple}This is reversed underligned bold purple!\n");
	ft_printf("{:rcyan}This is reversed underligned bold cyan!\n");
	ft_printf("{:rwhite}This is reversed underligned bold white!\n\n");
//Light colors
	ft_printf("{:reset}");
	ft_printf("{:lblack}This is light black!\n");
	ft_printf("{:lred}This is light red!\n");
	ft_printf("{:lgreen}This is light green!\n");
	ft_printf("{:lyellow}This is light yellow!\n");
	ft_printf("{:lblue}This is light blue!\n");
	ft_printf("{:lpurple}This is light purple!\n");
	ft_printf("{:lcyan}This is light cyan!\n");
	ft_printf("{:lwhite}This is light white!\n\n");
//Background colors
	ft_printf("{:reset}");
	ft_printf("{:fblack}This is a black background!{:reset}\n");
	ft_printf("{:fred}This is a FRED background!{:reset}\n");
	ft_printf("{:fgreen}This is a green background!{:reset}\n");
	ft_printf("{:fyellow}This is a yellow background!{:reset}\n");
	ft_printf("{:fblue}This is a blue background!{:reset}\n");
	ft_printf("{:fpurple}This is a purple background!{:reset}\n");
	ft_printf("{:fcyan}This is a cyan background!{:reset}\n");
	ft_printf("{:fwhite}This is a white background!{:reset}\n\n");
//NORMAL COLOR
	ft_printf("{:reset}This is normal terminal color !!\n");
}
