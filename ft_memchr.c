#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*stock;

	i = 0;
	stock = (unsigned char*)s;
	while (i < n)
	{
		if (stock[i] == (unsigned char)c)
			return (stock + i);
		i++;
	}
	return (0);
}
