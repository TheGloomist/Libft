#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi (char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *res_str;

    if(!s)
        return (NULL);
    if(!(res_str = malloc(sizeof(char*) * (ft_strlen(s) + 1))))
        return(NULL);
    i = 0;
    while(s)
        {
            res_str = f(i, s);
            i++;
        }
    res_str[i] = '\O';
    return(res_str);
}