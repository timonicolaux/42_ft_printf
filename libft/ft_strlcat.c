/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:06:29 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/14 09:38:28 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size < dstlen + 1)
		return (srclen + size);
	if (size > dstlen + 1)
	{
		while (src[i] && ((dstlen + 1 + i) < size))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// int main()
// {
//     char    dst[] = "un ";
//     const char  src[] = "deux";
//     printf("%d\n", ft_strlcat(dst, src, 8));
// 	// printf("%d\n", strlcat(dst, src, 8));
// }
