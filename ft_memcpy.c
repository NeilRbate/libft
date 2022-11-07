#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t		i;

	u_dst = (unsigned char*)dst;
	u_src = (unsigned char*)src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		u_dst[i] = u_src[i];
		i++;
	}
	u_dst[i] = '\0';
	return (dst);
}
