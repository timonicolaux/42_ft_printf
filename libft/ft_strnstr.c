/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:10:52 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/13 15:44:25 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	length = ft_strlen(little);
	if (!big && !little)
		return (NULL);
	if (length == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[j] == big[i + j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char big[] = "see FF your FF return FF now FF";
// 	char little[] = "FF";
// 	size_t	len = ft_strlen(big);

// 	printf("%d\n", ft_strnstr(big, little, len));
// }
