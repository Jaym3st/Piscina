/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:17:32 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/21 06:25:41 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[]="hola";
	printf("%s", ft_strupcase(str));
}
*/