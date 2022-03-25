#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi (char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *res_str;

    if(!s)
        return (NULL);
    res_str = malloc(sizeof(char*) * (ft_strlen(s) + 1));
    if(!res_str)
        return(NULL);
    i = 0;
    while(s)
        {
            res_str = f(i, s);
            i++;
        }
    res_str[i] = '\0';
    return(res_str);
}