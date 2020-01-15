#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (!count || !size)
		return (dest = malloc(count * size));
	if (!(dest = (void*)malloc(size * count)))
		return (NULL);
	return (ft_bzero(dest, count));
}
