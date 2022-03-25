/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:02:19 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 19:02:21 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	int		i;

	dst = (char*)malloc((ft_strlen(str)+ 1) * sizeof(char));
	if(dst == NULL)
		return (NULL);
	i = 0;
	while(str[i])
		{
			dst[i] = str[i];
			i++;
		}
	dst[i] = '\0';
	return(dst);
}

// int  main (void) 
// {
//   char	src[] = "Loshad";
//   char *dst;

//   dst = ft_strdup(src);
//   printf("%s\n", dst);
//   return(0);
// }