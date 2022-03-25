/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:58:48 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:58:56 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
    t_list  *new;
    t_list  *elem;
    
    while(lst)
    {
        if(!(elem = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new, del);
            return(NULL);
        }
        ft_lstadd_back(&new, elem);
        lst = lst->next;
    }
    return(new);
}