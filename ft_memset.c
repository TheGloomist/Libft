#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

// int	main (void)
// {
// 	char	str[50];

// 	strcpy(str, "This keyboard confuses me");
// 	puts(str);

// 	memset(str, 'F', 5);
// 	puts(str);
// 	ft_memset(str, 'A', 5);
// 	puts(str);

// 	return (0);
// }
