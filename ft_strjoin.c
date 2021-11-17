#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;
	size_t	join_len;
	
	if(!s1 || !s2)
		return(NULL);
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	join_len = s2_len + s1_len + 1;
	res = malloc(sizeof(char*) * join_len);
	if(!res)
		return(NULL);
	memcpy(res, s1, s1_len);
	memcpy(res + s1_len, s2, s2_len);
	res[s1_len + s2_len] = '\0';
	return(res);
}

int 	main(void)
{
	char  	s1[] = "Rito";
	char	s2[] =	"pls";
	char	*res;

	res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	return(0);
}