/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:38:14 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/21 07:15:21 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				write(1, n, 3);
				if (n[0] < '7')
				{
					write(1, ", ", 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

int main(void)
{
	ft_print_comb();
}