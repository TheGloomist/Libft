/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:51:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/13 13:05:33 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		conv;

	i = 0;
	sign = -1;
	conv = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		conv = (conv * 10) - (str[i] - '0');
		i++;
	}
	return (conv * sign);
}

// int	main()
// {
// 	char	str[] = "-2147483648";
//                    2147483647
// 	int		convert;

// 	convert = atoi(str);
// 	printf("%i\n", convert);

// 	convert = ft_atoi(str);
// 	printf("%i\n", convert);

// 	return (0);
// }
