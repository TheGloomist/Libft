/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:59:37 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:59:40 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int     i;
    char    *store_src;
    char    *store_dst;

    i = 0;
    store_src = (char *)src;
    store_dst = (char *)dst;
    if (store_src < store_dst)
    {
        while(len--)
            store_dst[len] = store_src[len];
    }
    else
        ft_memcpy(store_dst, store_src, len);
    return (dst);
}

// int     main()
//     {
//         char dest[] = "this is dst";
//         const char src[] = "this is src";

//         printf("Before. dst = %s, src = %s\n", dest, src);
//         ft_memmove(dest, src, 11);
//         printf("After. dst = %s, src = %s\n", dest, src);

//         return(0);
//     }