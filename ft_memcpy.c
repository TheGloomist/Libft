/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:59:11 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:59:18 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int     i;

    if(!src)
        return(NULL);
    i = 0;
    while (i < n)
    {
        *(char *)(dst + i) = *(char *)(src + i);
        i++;
    }
    return (dst);
}