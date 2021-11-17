#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	char	*dst;
	int		i;

	dst = (char*)malloc((ft_strlen(str)+ 1) * sizeof(char));
	if(dst == NULL)
		return (NULL);
	i = 0;
	while(str[i])
		{
			dst[i] = str[i];
			i++;
		}
	dst[i] = '\0';
	return(dst);
}

int main (void) 
{
  char	src[] = "Loshad";
  char *dst;

  dst = ft_strdup(src);
  printf("%s\n", dst);
  return(0);
}