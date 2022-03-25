/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:59:00 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:59:01 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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