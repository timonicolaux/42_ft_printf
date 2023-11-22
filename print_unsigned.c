/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:07:57 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/22 14:26:36 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	unsigned int	n_copy;

	n_copy = n;
	if (n >= 10)
	{
		print_unsigned(n / 10);
		print_unsigned(n % 10);
	}
	else
		print_char(n + '0');
	return (n_copy);
}
