#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if((start + len) > ft_strlen(s))
		return(NULL);
	substr = malloc(sizeof(char*) * (len + 1));
	if(substr == NULL)
		return(NULL);
	i = 0;
	while(i < len)
	{
		substr[i] = s[start]; 
		start++;
		i++;
	}
	substr[i] = '\0';
	return(substr);
}

//  int main (void)
// {
// 	char	s[] = "Rito pls";
// 	char	*substr;

// 	substr = ft_substr(s, 5, 3);
// 	printf("%s\n", substr);
// 	return(0);
// } 