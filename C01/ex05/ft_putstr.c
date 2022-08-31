/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:26:05 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/16 13:48:16 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int z;

	z = 0;
	while (str[z] != 0)
	{
		write(1, &str[z], 1);	
		z++;
	}
	
}

int main()
{
	char *c;

	c = "Hola";
	ft_putstr(c);
}
