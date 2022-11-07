#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] && dstsize > 0)
	{
		if (i < dstsize - 1)
		{
			dst[j] = src[j];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	while (src[k])
		k++;
	return (k);
}
