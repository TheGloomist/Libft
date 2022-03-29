/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:58:07 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/29 16:17:25 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;

	while (*lst)
	{
		elem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = elem;
	}
	*lst = NULL;
}
