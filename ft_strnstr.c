/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/29 15:51:37 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/04 03:37:37 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;

	if (!needle)
		return (haystack);
	

}

int	main()
{
	char	haystack[] = "Things are only impossible until they're not";
	char	needle[] = "only";
	char	*result;

	result = strnstr(haystack, needle, 20);
	printf("%s\n", result);
	result = ft_strnstr(haystack, needle, 10);
	printf("%s\n", result);
	
	return(0);
}