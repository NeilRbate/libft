#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = c;
	while (*s)
	{
		if (*s == d)
			return ((char *)s);
		s++;
	}
	if (*s == d)
		return ((char *)s);
	return (0);
}
