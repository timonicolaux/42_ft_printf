/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:02:10 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/10 13:15:33 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	if (!dest && !src)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dest;
	while (n > i)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}

// int main()
// {
//     char    src[] = "source";
//     char    dest[] = "destination";

//     printf("Avant memcpy dest = %s\n", dest);
//     ft_memcpy(dest, src, ft_strlen(src)+1);
//     printf("Apres memcpy dest = %s\n", dest);
// }
