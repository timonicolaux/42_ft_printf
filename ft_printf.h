/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:16:35 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/24 13:29:21 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				print_char(int c);
int				print_str(char *str);
int				print_num(int n);
unsigned int	print_unsigned(unsigned int n);
int				print_hex(unsigned int n, const char c);
int				print_pointer(long unsigned int n);

#endif
