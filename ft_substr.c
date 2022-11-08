/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:30:14 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/08 16:10:43 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		i;

	i = 0;
	ret = malloc(sizeof(*s) * len);
	if (!ret)
		return (0);
	while (i < len && s[start])
		ret[i++] = s[start++];
	if (s[start] != '\0')
		ret[i] = '\0';
	return (ret);
}
