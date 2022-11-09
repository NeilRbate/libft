/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:48:45 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/09 10:54:40 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inside(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

static int	end(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while(s1[i])
		i++;
	i--;
	while (is_inside(s1[i], set) == 1)
		i--;
	return (1);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;

	if (s1 == 0 || set == 0)
		return (0);
	i = 0;
	j = 0;
	ret = malloc(sizeof(char) * ft_strlen(s1));
	if (ret == 0)
		return (0);
	while (is_inside(s1[i], set) == 1)
		i++;
	while (i < end(s1, set))
	{
		ret[j] = s1[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);



}
