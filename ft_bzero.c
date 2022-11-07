#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*stock;

	i = 0;
	stock = (unsigned char*)s;
	while (i < n)
	{
		*stock = 0;
		stock++;
		i++;
	}
}
