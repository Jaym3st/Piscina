/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:10:03 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/17 16:38:40 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int z;
	int j;

	z = *a / *b;
	j = *a % *b;
	*a = z;
	*b = j;

}
int main()
{
	int x = 100;
	int y = 5;

	ft_ultimate_div_mod(&x,&y);
	printf("%d %d", x, y);
}
