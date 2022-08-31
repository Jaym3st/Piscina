/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:50:41 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/31 16:17:09 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int len;
    int i;

   	if (min >= max)
		return(0);
	len = max - min;
    tab = (int *)malloc(sizeof(int) * len);
	if (tab == NULL)
		return (-1);
    *range = tab;
    i = 0;
	while(i < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (len);
}
/*
int main()
{
	int min;
	int max;
	int *tab;
	int range;
	int i;
	int h;


	i = 0;
	min = 3;
	max = 15;
	range = max - min;
	h = ft_ultimate_range(&tab, min, max);
	printf("TAMAÑO DE RANGE: %d\n", h);
	while(i < range)
	{
	   printf("%d", tab[i]);
	   i++;
	}
}
*/