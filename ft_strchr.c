/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:01:55 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/01 17:28:47 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "12,3,45";
// 	char	c = ',';
// 	char	*find;
// 	char	*my_find;

// 	find = strchr(str, c);
// 	my_find = ft_strchr(str, c);
// 	printf("%s\n", find);
// 	printf("%s\n", my_find);
// 	return (0);
// }