#include "libft.h"

int     ft_lstsize(t_list *lst)
{
    int     i;

    i = 0;
    if(!lst)
        return(NULL);
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return(i);
}