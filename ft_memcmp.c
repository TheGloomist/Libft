/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:13:21 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/04 02:47:13 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char	str1[] = "azmao";
// 	char	str2[] = "almao";
// 	int		comp;

// 	str1[0] = '\0';
// 	str2[0] = '\0';
// 	comp = memcmp(str1, str2, 4);
// 	printf("%i\n", comp);
// 	comp = ft_memcmp(str1, str2, 4);
// 	printf("%i\n", comp);

// }