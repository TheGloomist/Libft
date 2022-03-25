/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 18:56:49 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 18:56:53 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int     ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}