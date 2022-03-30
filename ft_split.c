/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/25 19:01:35 by izaitcev      #+#    #+#                 */
/*   Updated: 2022/03/30 13:20:55 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		w_count++;
		while (s[i] == c)
			i++;
	}
	return (w_count);
}

int	get_length(char const *s, char c)
{
	int	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

char	**handle_error(char **s, int const len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (s[i])
		{
			free(s[i]);
			s[i] = NULL;
		}
		i++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**split_s(
	char const	*s,
	char		**str_array,
	char const	c,
	int const	w_count)
{
	int	i;
	int	j;
	int	w_len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		w_len = get_length(&s[i], c);
		str_array[j] = ft_substr(s, i, w_len);
		if (str_array[j] == NULL)
			return (handle_error(str_array, w_count));
		j++;
		i += w_len;
	}
	return (str_array);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		w_count;

	if (s == NULL || c == '\0')
		return (NULL);
	w_count = word_count(s, c);
	str_array = ft_calloc(1, (w_count + 1) * sizeof(char *));
	if (str_array == NULL)
		return (NULL);
	return (split_s(s, str_array, c, w_count));
}

// int main(void)
// {
//     char str[] = "4444hopseflops4kaasbroodje44appel4midorfeed444";
//     char delimiter = '4';//UPDATE THIS MANUALLY OR YOU DIE
//     char **final = ft_split(str, delimiter);
//     for (int i = 0; final[i] != NULL; i++)
//          printf("%s\n", final[i]);

//     char empty_str[] = "";
//     char **final2 = ft_split(empty_str, delimiter);
//     if (final2)
//         printf("final2 is empty string but allocated\n");
//     char *null_ptr = NULL;
//     char **final3 = ft_split(null_ptr, '\0');
//     if (!final3)
//         printf("final3 is a nullptr\n");
//     return(0);
// }
