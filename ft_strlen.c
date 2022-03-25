/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:05:02 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/25 19:05:12 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    int     i;

    i = 0;
    while(*s)
    {
        s++;
        i++;
    }
    return(i);
}

/*int main ()
{
    char s[] = "fjghJJk";

    printf("%zu\n", ft_strlen(s));
    return(0);
}*/
