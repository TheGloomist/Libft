/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:57:26 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/14 14:04:25 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	check_neg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	get_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		i;
	int		len;

	len = get_length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	neg = check_neg(n);
	i = 0;
	if (neg == -1)
	{
		str[i] = '-';
		i++;
	}
	while (i < len)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	int		num = 12345;
	int		len;
	char	*str;

	str = ft_itoa(num);
	// len = get_length(num);
	// printf("%i\n", len);
	printf("%s\n", str);

	return (0);
}