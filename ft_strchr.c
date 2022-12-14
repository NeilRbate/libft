/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:04:45 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/13 09:40:18 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
