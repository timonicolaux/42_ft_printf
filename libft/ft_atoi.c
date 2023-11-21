/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolau <tnicolau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:21:24 by tnicolau          #+#    #+#             */
/*   Updated: 2023/11/20 13:53:33 by tnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				i;
	int				sign;
	long long int	result;
	long long int	resultcpy;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		resultcpy = result;
		result = result * 10 + (nptr[i] - '0') * sign;
		if (result > resultcpy && sign == -1)
			return (0);
		if (result < resultcpy && sign == 1)
			return (-1);
		i++;
	}
	return ((int)result);
}

// int	main()
// {
// 	const char	str[] = "   5555551554154154154151245";
// 	// const char	str[] = "-52";
// 	// const char	str[] = "52";
// 	// const char	str[] = "-2147483648";
// 	printf("my atoi : %d\n", ft_atoi(str));
// 	printf("atoi :    %d\n", atoi(str));
// }
