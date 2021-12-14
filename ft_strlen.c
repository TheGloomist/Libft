// remove stuff
#include <stdio.h>
#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int     i;

    i = 0;
    while(*s)
    {
        s++;
        i++;
    }
    return(i);
}

/*int main ()
{
    char s[] = "fjghJJk";

    printf("%zu\n", ft_strlen(s));
    return(0);
}*/
