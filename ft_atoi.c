/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:51:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/10 20:07:23 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		conv;

	i = 0;
	conv = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = (conv * 10) + (str[i] - '0');
		i++;
	}
	return (conv);
}

int	main()
{
	char	str[] = "  -12345";
	int		convert;

	convert = atoi(str);
	printf("%i\n", convert);

	convert = ft_atoi(str);
	printf("%i\n", convert);

	return (0);
}