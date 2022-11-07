#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*stock;

	i = 0;
	stock = (unsigned char*)b;
	while (i < len)
	{
		*stock++ = (unsigned char)c;
		i++;
	}
	return (b);
}
