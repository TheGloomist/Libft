/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:05:30 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/30 13:13:41 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	count = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			count = i + 1;
		i++;
	}
	return (ft_substr(s1, 0, count));
}

// int	main (void)
// {
// 	printf("%s\n", ft_strtrim("SKR dogSKRgo SKRRR", "SKR"));
// 	return(0);
// }