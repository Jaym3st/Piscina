/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:39:54 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/18 12:21:41 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int z;

	z = 0;
	while (str[z] != 0)
	{		
		z++;
	}
	return (z);
}

int main()
{
	char *c;

	c = "Holaa";
	printf("%d", ft_strlen(c));
}

