/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:33:21 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 16:03:12 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{	
		return (0);
	}
	return (result);
}

int main ()
{
	printf("%d\n", ft_recursive_power(4, 2));
}
