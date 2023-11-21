/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:18:08 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/20 13:13:54 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;

	if (src == dest || n == 0)
		return (dest);
	if (dest < src)
	{
		csrc = (unsigned char *)src;
		cdest = (unsigned char *)dest;
		while (n--)
			*cdest++ = *csrc++;
	}
	else
	{
		csrc = (unsigned char *)src + (n - 1);
		cdest = (unsigned char *)dest + (n - 1);
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}

// int main()
// {
//     const char    src[] = "test";
//     char    dest[] = "";

//     printf("Avant memmove dest = %s\n", dest);
//     ft_memmove(dest, src, 33);
//     printf("Apres memmove dest = %s\n", dest);
// }
