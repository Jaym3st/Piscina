/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:05:59 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 16:35:40 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	k;

	if (nb <= 1)
		return (2);
	k = 2;
	while (k <= (nb / 2))
	{
		if (nb % k == 0)
			nb++;
		k++;
	}
	return (nb);
}

int main ()
{
	printf("%d\n", ft_find_next_prime(54));
}
