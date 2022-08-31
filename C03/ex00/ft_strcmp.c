/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:41:49 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/23 18:11:01 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}
/*
#include<stdio.h>

int main()
{
	char s1[]="Hola";
	char s2[]="Hola";

	printf("%d", ft_strcmp(s1,s2));
}
*/