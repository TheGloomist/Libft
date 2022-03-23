#include <stdio.h>
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