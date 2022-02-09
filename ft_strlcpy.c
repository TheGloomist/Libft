#include "libft.h"

size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int     len;
    int     i;

    if(!dst || !src)
        return(NULL);
    len = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while(src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(len);
}