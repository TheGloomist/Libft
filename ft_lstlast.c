#include <stdlib.h>
#include "libft.h"

int     ft_lstlast(t_list *lst)
{
    while(lst)
    {
        if(!lst->next)
            return(lst);
        lst = lst->next;
    }
    return(NULL);
}