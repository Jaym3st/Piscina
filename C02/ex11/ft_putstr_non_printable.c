/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:44:27 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/22 17:18:05 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)

{
	int		i;
	int		rest;
	int		div;
	char	c;

	i = 0;
	while (str[i] != 0)
	{
		if (!(31 < str[i] && str[i] < 127))
		{
			write(1, "\\", 1);
				div = str[i] / 16 + 48;
				rest = str[i] % 16;
			write(1, &div, 1);
			if (rest < 10)
				c = 48 + rest;
			else
				c = 87 + rest;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
	char	*ip;
	char string[]="Coucou\ntu vas bien?";

	ip= &string[0];
	ft_putstr_non_printable(ip);
}
*/
