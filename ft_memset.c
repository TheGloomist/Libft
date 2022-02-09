#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len)
	{
		((unsigned char*)b)[idx] = c;
		idx++;
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
