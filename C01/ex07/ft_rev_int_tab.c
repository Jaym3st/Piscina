/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:51:14 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/16 17:04:14 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab,int size)
{
	int z;
	int swap;

	z = 0;
	while(z < (size / 2))
	{
		swap = tab[z];
		tab[z] = tab[size -1 -z];
		tab [size - 1 - z] = swap;
		z++;
	}
}

int	main()
{
	int array[6] = {0,1,2,3,4,5};
	int size = 6; 
	int i;

	ft_rev_int_tab(&array[0],size);
	for (i=0; i<6; i++)
	{
		printf("%d", array[i]);
	}
}
