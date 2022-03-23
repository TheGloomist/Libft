#include libft.h

void	ft_bzero(void *s, size_t n)
{
	char	*location;

	location = s;
	while (n--)
	{
		*location = '\0';
		*location++;
	}
}
