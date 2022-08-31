/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:44:26 by jaisanch          #+#    #+#             */
/*   Updated: 2022/08/27 10:02:56 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i] != 0)
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	dist;

	dist = 0;
	while (str[dist] != '\0')
	{
		dist++;
	}
	return (dist);
}

void	write_numb(int i, int *numb, char *base)
{
	int	k;

	while (i >= 0)
	{
		k = numb[i];
		write(1, &base[k], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)

{
	int	dist;
	int	numb[32];
	int	i;
	int	x;

	if (error(base))
	{
		i = 0;
		if (nbr < 0)
		{
			x = -nbr;
			write(1, "-", 1);
		}
		else
			x = nbr;
		dist = ft_strlen(base);
		while (x / dist != 0)
		{
			numb[i] = x % dist;
			x = x / dist;
			i++;
		}
		numb[i] = x;
		write_numb(i, numb, base);
	}
}
/*
int main()
{
	ft_putnbr_base(2147483647, "01");
}
*/