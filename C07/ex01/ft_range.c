/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:17:21 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/31 16:17:25 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *tab;
	int range;


	if (min >= max)
		return(0);
	range = max - min;
	tab = malloc(sizeof(int) * range);
	while(max >= min)
	{
		tab[max - min - 1] = max - 1;
		max--;
	}
	return (tab);
}
/*
int main()
{
	int min;
	int max;
	int *tab;
	int range;
	int i;

	
	i = 0;
	min = 1;
	max = 10;
	range = max - min;
	tab = malloc(sizeof(int) * range);
	tab = ft_range(min, max);
	while(i < range)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/