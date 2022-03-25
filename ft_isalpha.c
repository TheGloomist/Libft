/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:56:15 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:56:36 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c<= 'z')
        return (1);
    else
        return (0);
}
