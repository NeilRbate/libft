/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:45:54 by jbarbate          #+#    #+#             */
/*   Updated: 2022/08/15 17:46:06 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	stock;
	char	d;

	i = 0;
	stock = -1;
	d = c;
	while (*s)
	{
		if (*s == d)
			stock = i;
		i++;
		s++;
	}
	if (*s == d)
		return ((char *)s);
	if (stock != -1)
	{
		s -= i;
		return ((char *)(s + stock));
	}
	return (0);
}
