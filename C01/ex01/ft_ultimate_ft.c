/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:07:01 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/16 10:11:51 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr= 42;
}

int	main(void)
{
	int	n;
	int *nbr7;
	int **nbr6;
	int ***nbr5;
	int ****nbr4;
	int *****nbr3;
	int ******nbr2;
	int *******nbr1;
	int ********nbr;

	n = 0;
	nbr7 = &n;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(&nbr);
	printf("%d", n);
}
