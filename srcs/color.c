#include "../includes/includes.h"

static int		put_color_underline(char *start, int i);
static int		put_color_bold(char *start, int i);

static int		put_color(char *start, int i)
{
	if (!ft_strncmp(start, "black", i))
		return (ft_putstr(BLACK));
	else if (!ft_strncmp(start, "red", i))
		return (ft_putstr(RED));
	else if (!ft_strncmp(start, "green", i))
		return (ft_putstr(GREEN));
	else if (!ft_strncmp(start, "yellow", i))
		return (ft_putstr(YELLOW));
	else if (!ft_strncmp(start, "blue", i))
		return (ft_putstr(BLUE));
	else if (!ft_strncmp(start, "purple", i))
		return (ft_putstr(PURPLE));
	else if (!ft_strncmp(start, "cyan", i))
		return (ft_putstr(CYAN));
	else if (!ft_strncmp(start, "white", i))
		return (ft_putstr(WHITE));
	else if (!ft_strncmp(start, "reset", i))
		return (ft_putstr(RESET));
	else
		return (put_color_underline(start, i));
}

static int		put_color_underline(char *start, int i)
{
	if (!ft_strncmp(start, "ublack", i))
		return (ft_putstr(UBLACK));
	else if (!ft_strncmp(start, "ured", i))
		return (ft_putstr(URED));
	else if (!ft_strncmp(start, "ugreen", i))
		return (ft_putstr(UGREEN));
	else if (!ft_strncmp(start, "uyellow", i))
		return (ft_putstr(UYELLOW));
	else if (!ft_strncmp(start, "ublue", i))
		return (ft_putstr(UBLUE));
	else if (!ft_strncmp(start, "upurple", i))
		return (ft_putstr(UPURPLE));
	else if (!ft_strncmp(start, "ucyan", i))
		return (ft_putstr(UCYAN));
	else if (!ft_strncmp(start, "uwhite", i))
		return (ft_putstr(UWHITE));
	else
		return (put_color_bold(start, i));
}

static int		put_color_bold(char *start, int i)
{
	if (!ft_strncmp(start, "bblack", i))
		return (ft_putstr(BBLACK));
	else if (!ft_strncmp(start, "bred", i))
		return (ft_putstr(BRED));
	else if (!ft_strncmp(start, "bgreen", i))
		return (ft_putstr(BGREEN));
	else if (!ft_strncmp(start, "byellow", i))
		return (ft_putstr(BYELLOW));
	else if (!ft_strncmp(start, "bblue", i))
		return (ft_putstr(BBLUE));
	else if (!ft_strncmp(start, "bpurple", i))
		return (ft_putstr(BPURPLE));
	else if (!ft_strncmp(start, "bcyan", i))
		return (ft_putstr(BCYAN));
	else if (!ft_strncmp(start, "bwhite", i))
		return (ft_putstr(BWHITE));
	return (0);
}

int				parse_color(const char *str, const char *max, int *len)
{
	char*start;
	char		*end;
	int	i;

	if ((start = ft_strchr(str, '{')) && start < max
			&& *(start + 1) == ':' && (end = ft_strchr(str, '}')))
	{
		i = start - str;
		*len += ft_putnstr(str, i);
		start += 2;
		i = end - start;
		if (put_color(start, i))
			return (end - str + 1);
	}
	return (0);
}
