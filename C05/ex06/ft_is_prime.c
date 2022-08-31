/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:31:08 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 16:35:16 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	k;

	if (nb <= 1)
		return (0);
	k = 2;
	while (k <= (nb / 2))
	{
		if (nb % k == 0)
			return (0);
		k++;
	}	
	return (1);
}

int main ()
{
	printf("%d\n", ft_is_prime(49));
}
