#include <stdlib.h>
#include "libft.h"

static int  in_set(char const *set, char c)
{
    while(*set)
    {
        if(*set == c)
            return(1);
        set++;
    }
    return(0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     count;

    i = 0;
    if(!s1 || !set)
        return(NULL);
    while(in_set(set, *s1) && *s1)
        s1++;
    count = 0;
    while(s1[i])
    {
        
        if(!in_set(set, s1[i]) )
            count = i + 1;
        i++;
    }
    return(ft_substr(s1, 0, count));
}

// int	main (void)
// {
// 	printf("%s\n", ft_strtrim("SKR dogSKRgo SKRRR", "SKR"));
// 	return(0);
// }