void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*s_dst;
	unsigned char	*s_src;

	i = 0;
	s_dst = (unsigned char*)dst;
	s_src = (unsigned char*)src;
	while (i < len)
	{
		*s_dst = *s_src;
		s_dst++;
		s_src++;
		i++;
	}
}
