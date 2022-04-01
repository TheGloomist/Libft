/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:03:53 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/04/01 16:49:18 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	dst_pos;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	dst_pos = dst_len;
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dst_len + 1 > dstsize - 1)
		{
			dst[dst_pos] = src[i];
			dst_pos++;
			i++;
		}
	}
	if (dst_len >= dstsize)
		dst_len = dstsize;
	return (dst_len + src_len);
}

// int main()
// {
// 	char str1[] = "dst string";
// 	char str2[] = "src string";
// }