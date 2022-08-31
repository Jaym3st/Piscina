/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:57:40 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/21 10:21:57 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[]="hola";
	printf("%s", ft_strlowcase(str));
}
*/