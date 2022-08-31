/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:19:15 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 12:02:46 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	posi;

	i = 0;
	neg = 1;
	posi = 0;
	while (str[i] != 0)
	{
		if ((str[i - 1] == '-' || str[i - 1] == '+') && ((str[i] < '0'
					|| str[i] > '9') && str[i] != '-' && str[i] != '+'))
			break ;
		if ((str[i - 1] >= '0' && str[i - 1] <= '9') && (str[i] < '0'
				|| str[i] > '9'))
			break ;
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == 32 || (str[i] > 8
					&& str[i] < 14) || str[i] == '-' || str[i] == '+'))
			break ;
		if (str[i] >= '0' && str[i] <= '9')
			posi = posi * 10 + (str[i] - '0');
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	return (posi * neg);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[]="---+--+12345ab567";
	printf("%d", ft_atoi(str));
}
