/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:58:11 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/11 16:47:47 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	tab_len(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

static char	*ft_strcut(const char *s, char c)
{
	char	*ret;
	int		i;

	i = 0;
	while (is_charset(s[i], c) == 0 && s[i])
		i++;
	ret = malloc(sizeof(char) * (i + 1));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s, i + 1);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char		**ret;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	ret = malloc(sizeof(char *) * (tab_len(s, c) + 1));
	if (ret == 0)
		return (0);
	while (s[i])
	{
		if (is_charset(s[i], c) == 0)
		{
			ret[j] = ft_strcut((s + i), c);
			j++;
			while (is_charset(s[i], c) == 0 && s[i])
				i++;
		}
		else
			i++;
	}
	ret[j] = 0;
	return (ret);
}
