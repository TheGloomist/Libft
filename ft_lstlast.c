/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:58:40 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:58:42 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


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