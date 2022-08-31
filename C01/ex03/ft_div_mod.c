/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:24:14 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/17 16:37:13 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a/b;
	*mod = a % b;
}
int main(void)
{
	int y;
	int x;
	int a;
	int b;

	a = 100;
	b = 5;
	ft_div_mod(a, b,&x,&y);
	printf("%d %d", x, y); 
	
}

