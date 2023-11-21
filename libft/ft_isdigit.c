/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:42 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 10:26:08 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main(int ac, char **av)
// {
//     if (ac == 2)
//         printf("Resultat : %d\n", ft_isdigit(av[1][0]));
//     else
//         printf("Saisissez un caractère svp\n");
// }
