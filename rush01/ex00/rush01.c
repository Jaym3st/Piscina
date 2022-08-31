/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:55:07 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/21 10:57:29 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

char	*iniciar_array(char *array)
{
	char	i;

	i = 0;
	while (i < 16)
	{
		array[i] = '0';
		i++;
	}
	return (array);
}

int	main(void)
{
	char	*array;
	int		i;

	array = (char *)malloc(16);
	array = iniciar_array(array);
	i = 0;
	while (i < 13)
	{
		write (1, &array[i], 4);
		write (1, "\n ", 1);
		i = i + 4;
	}
}
