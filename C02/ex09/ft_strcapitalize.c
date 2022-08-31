/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:49:37 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/21 06:18:51 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
			&& (str [i] > 96 && str[i] < 123))
				str[i] -= 32;
		if (((str[i -1] > 47 && str[i - 1] < 58)
				|| (str[i - 1] > 64 && str[i - 1] > 91)
				|| (str[i - 1] > 96 && str[i - 1] < 123))
			&& (str[i] > 64 && str[i] < 91))
				str[i] += 32;
				i++;
	}
	return (str);
}
/*
int main()
{
	char str[]="salUt, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
*/