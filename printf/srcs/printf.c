/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:14:00 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/08/16 22:14:01 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += print_char(va_arg(args, int));
	else if (format == 's')
		print_len += print_str(va_arg(args, char *));
	else if (format == 'p')
		print_len += print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += print_int(va_arg(args, int));
	else if (format == 'u')
		print_len += print_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += print_percent();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			print_len;
	va_list		args;

	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += formats(args, str[i + 1]);
			i++;
		}
		else
			print_len += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
