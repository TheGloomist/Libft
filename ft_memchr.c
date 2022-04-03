/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:12:57 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/03 21:19:42 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "1,23,45";
// 	char	c = ',';
// 	char	*find;
// 	char	*my_find;
// 	find = memchr(str, c, strlen(str));
// 	printf("%s\n", find);
// 	my_find = ft_memchr(str, c, strlen(str));
// 	printf("%s\n", my_find);

// 	return(0);
// }