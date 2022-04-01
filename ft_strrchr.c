/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:31:30 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/01 19:08:37 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "12,3,45";
// 	char	c = ',';
// 	char	*find;
// 	char	*my_find;

// 	find = strrchr(str, c);
// 	my_find = ft_strrchr(str, c);
// 	printf("%s\n", find);
// 	printf("%s\n", my_find);
// 	return (0);
// }