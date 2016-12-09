#include "../includes/includes.h"

int		put_color(t_data *data, int i)
{
	if (!ft_strncmp(&data->format[data->index], "{:reset}", i))
	{
		ft_putstr(RESET);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:black}", i))
	{
		ft_putstr(BLACK);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:red}", i))
	{
		ft_putstr(RED);
		return (6);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:green}", i))
	{
		ft_putstr(GREEN);
		return (8);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:yellow}", i))
	{
		ft_putstr(YELLOW);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:blue}", i))
	{
		ft_putstr(BLUE);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:purple}", i))
	{
		ft_putstr(PURPLE);
		return (9);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:cyan}", i))
	{
		ft_putstr(CYAN);
		return (7);
	}
	else if (!ft_strncmp(&data->format[data->index], "{:white}", i))
	{
		ft_putstr(WHITE);
		return (8);
	}
	else {}
	return (0);
}

void	parse_color(t_data *data)
{
	if (data->format[data->index] == '{' && data->format[data->index + 1] == ':')
	{
		int i;
		int j;

		j = data->index;
		i = 0;
		while (data->format[j] != '}')
		{
			i++;
			j++;
		}
		data->index += put_color(data, i);
	}
}
