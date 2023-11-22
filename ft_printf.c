/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:54:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/22 16:32:12 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(const char c, va_list args)
{
	int	result;

	result = 0;
	if (c == 'c')
		result += print_char(va_arg(args, int));
	if (c == 's')
		result += print_str(va_arg(args, char *));
	if (c == 'p')
		return (0); /////////
	if (c == 'd')
		result += print_num(va_arg(args, int));
	if (c == 'i')
		result += print_num(va_arg(args, int));
	if (c == 'u')
		result += print_unsigned(va_arg(args, unsigned int));
	if (c == 'x')
		return (0); /////////
	if (c == 'X')
		return (0); /////////
	if (c == '%')
		result += print_char('%');
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	result;
	va_list args;

	i = 0;
	result = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			result += check_format(str[i + 1], args);
			i++;
		}
		else
			result += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (result);
}

int	main(void)
{
	// char	str[] = "te%cst\n";
	// ft_printf(str, 'Z');

	// char	str[] = "te%sst\n";
	// ft_printf(str, "coucou");

	// char	str[] = "te%dt\n";
	// ft_printf(str, 1254);
	// printf(str, 1254);

	// char	str[] = "te%it\n";
	// ft_printf(str, 1254);
	// printf(str, 1254);

	// char	str[] = "result : %u\n";
	// ft_printf(str, 4294967295);
	// printf(str, 4294967295);

	// char	str[] = "result : %%\n";
	// ft_printf(str, "test");
	// printf(str, "test");

	// char	str[] = "%p\n";

	// ft_printf("%s\n", "test");
	// printf(str, "t");
}
