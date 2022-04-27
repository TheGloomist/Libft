/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:03:07 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/27 21:15:07 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;
	size_t	join_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_len = s2_len + s1_len + 1;
	res = malloc(sizeof(char) * join_len);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, s1_len);
	ft_memcpy(res + s1_len, s2, s2_len);
	res[s1_len + s2_len] = '\0';
	return (res);
}

// int 	main(void)
// {
// 	char  	s1[] = "Rito";
// 	char	s2[] =	"pls";
// 	char	*res;

// 	res = ft_strjoin(s1, s2);
// 	printf("%s\n", res);
// 	return(0);
// }