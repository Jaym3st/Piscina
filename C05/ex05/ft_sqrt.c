/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:48:18 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 16:34:58 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	numb;
	int	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	numb = 2;
	if (n >= 2)
	{
		while (numb * numb <= n && numb < 46350)
		{
			if (numb * numb == n)
			{
				return (numb);
			}
		numb++;
		}
	}
	return (0);
}


int main ()
{
	printf("%d\n", ft_sqrt(16));
}
