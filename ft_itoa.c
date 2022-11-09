/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:46:25 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/09 14:03:21 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(long n)
{
	int d;

	d = 2;
	if (n < 0)
		n = -n;
	while (n > 10)
	{
		d++;
		n = n % 10;
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	stock;
	int		len;
	int		i;

	stock = n;
	i = 0;
	len = len_nb(stock);
	if (stock < 0)
	{
		stock = -stock;
		len++;
	}
	ret = malloc(sizeof(char) * len);
	if(n < 0)
		ret[0] = '-';
	ret[i] = '\0';
	return (ret);
}
