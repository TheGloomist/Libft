/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:02:19 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/29 19:07:51 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(str);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, str, len + 1);
	return (dst);
}

// int  main (void) 
// {
//   char	src[] = "Loshad";
//   char *dst;

//   dst = ft_strdup(src);
//   printf("%s\n", dst);
//   return(0);
// }