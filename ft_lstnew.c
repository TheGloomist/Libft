/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:54:07 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:55:22 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if(!new)
        return(NULL);
    new->content = content;
    new->next = NULL;
    return(new);
}