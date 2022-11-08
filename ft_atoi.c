/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:36:40 by jbarbate          #+#    #+#             */
/*   Updated: 2022/11/08 09:32:18 by jbarbate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	stock;
	int	sign;

	i = 0;
	stock = 0;
	sign = 1;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		stock *= 10;
		stock += (str[i] - '0');
		i++;
	}
	return ((stock * sign));
}
