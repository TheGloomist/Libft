#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	void	*dst;

	s = size * count;
	dst = malloc(s);
	if (dst == NULL)
		return (NULL);
	ft_memset(dst, 0, s);
	return (dst);
}
