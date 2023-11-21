/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:05:53 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 10:50:58 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main(int ac, char **av)
// {
//     if (ac == 2)
//         printf("Longueur de %zu\n caractères", ft_strlen(av[1]));
//     else
//         printf("Saisissez une chaine de caractères svp\n");
// }
