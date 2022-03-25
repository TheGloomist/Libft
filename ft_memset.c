/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:00:03 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 19:00:04 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

// int	main (void)
// {
// 	char	str[50];

// 	strcpy(str, "This keyboard confuses me");
// 	puts(str);

// 	memset(str, 'F', 5);
// 	puts(str);
// 	ft_memset(str, 'A', 5);
// 	puts(str);

// 	return (0);
// }
