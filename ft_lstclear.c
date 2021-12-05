#include <stdlib.h>
#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *elem;

    while(*lst)
    {
        elem = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = elem;
    }
    *lst = NULL;
}