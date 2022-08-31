/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:36:57 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/17 14:07:17 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab,int size)
{
	int z;
	int swap;
 
	while(size > 1)
	{
		z = 0;
		while(z < size - 1)
		{	
			if (tab[z] > tab[z+1])
			{
				swap = tab[z];
				tab[z] = tab[z + 1];
				tab[z + 1] = swap;
			}
			z++;
		}
		size--;
	}
}

int main()
{
	int array[6] = {2,4,5,3,0,1};
	int size = 6;
	int z;

	ft_sort_int_tab(&array[0],size);
	for (z=0; z<6; z++)
	{
		printf("%d", array[z]);
	}
}

