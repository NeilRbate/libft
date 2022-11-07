#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == 0 || dst == 0)
		return (0);
	if (dstsize > 0)
	{
		while (src[i])
		{
			if (dstsize > 0 && i < (dstsize - 1))
			{
				dst[j] = src[j];
				j++;
			}
			i++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(src));
}
