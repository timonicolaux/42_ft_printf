/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:46:45 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/22 13:50:46 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(int n)
{
	int	n_copy;

	n_copy = n;
	if (n == -2147483648)
	{
		print_str("-2147483648");
		return (n);
	}
	else
	{
		if (n < 0)
		{
			print_char(n);
			n *= -1;
		}
		if (n >= 10)
		{
			print_num(n / 10);
			print_num(n % 10);
		}
		else
			print_char(n + '0');
	}
	return (n_copy);
}
