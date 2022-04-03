/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/26 17:31:57 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/04 00:03:43 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)(s1[i]) == (unsigned char)(s2[i])) // if s1 and s2 are equal
			return (0);
		else if ((unsigned char)(s1[i]) < (unsigned char)(s2[i])) // first character that doesn't match has a lower value in s1 compared to s2
			return (-1);
		else if ((unsigned char)(s1[i]) > (unsigned char)(s2[i])) // first character that doesn't match has a greater value in s1 compared to s2
			return (1);
		i++;
	}
	return (-42);
}

int	main()
{
	char	str1[] = "lmao";
	char	str2[] = "mmao";
	int		comp;

	comp = ft_strncmp(str1, str2, 4);
	printf("%i\n", comp);

}
