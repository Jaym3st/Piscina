/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:35:06 by mlo-trug          #+#    #+#             */
/*   Updated: 2022/08/28 21:55:20 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int n) /* Comparamos los dos numeros hasta el tamaño del argumento */
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < (n - 1))
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (1);
		i++;
	}
	if (s1[i] >= '0' && s1[i] <= '9')
	{
		return (1);
	}
	return (0);
}

char	*zeros(char *str, int pos, char init_value)
{
	int i;
	char *fill_zeros = (char*)malloc(sizeof(char)*pos);

	i = 1;
	fill_zeros[0] = init_value;
	while (i < ft_strlen(str))
	{
		fill_zeros[i] = '0';
		i++;
	}
	return (fill_zeros);
}

int ft_print(char *argv)
{
	char c_aux;
	char *c_num_dict;
	int i;
	int is_number_name = 0;
	int count;
	int fd1;

	count = ft_strlen(argv) + 1;
	i = 0;

	fd1 = open("numbers.dict.txt", O_RDONLY);
	if (fd1 < 0)
	{
		printf("File not found, not opened\n");
		perror("c1");
		// exit(1);
		return (0);
	}

	c_num_dict = (char *)malloc(sizeof(char) * count);
	c_aux = 'a';
	while (c_num_dict[i] != 0)
	{
		c_num_dict[i] = '0';
		i++;
	}
	i = 0;
	/* POSICIONAMOS EL CURSOR JUSTO DESPUÉS DEL NUMERO QUE QUEREMOS BUSCAR */
	read(fd1, c_num_dict, sizeof(char) * count);
	while (ft_strncmp(c_num_dict, argv, count) != 0)
	{
		while (c_aux != '\n')
		{
			read(fd1, &c_aux, sizeof(char));
		}
		c_aux = 'a';
		i++;
		read(fd1, c_num_dict, sizeof(char) * count);
	}

	c_aux = 'a';
	/* LEEMOS EL TEXTO QUE APARECE A LA DERECHA DEL NUMERO */
	while (c_aux != '\n')
	{
		if (read(fd1, &c_aux, sizeof(char)) == 0)
		{
			write(1, "\n", sizeof(char));
			break;
		}
		if (c_aux != ' ' && c_aux != ':' && !is_number_name)
		{
			is_number_name = 1;
			write(1, &c_aux, sizeof(char));
		}
		else if (is_number_name)
			write(1, &c_aux, sizeof(char));
	}
	
	if (close(fd1) < 0)
	{
		perror("c1");
		// exit(1);
		return (0);
	}
	//free(argv);
	return (0);
}

char *fill_units(char z)
{
	char *unit; 

	unit = (char *)malloc(sizeof(char) * 2);
	unit[0] = z;
	unit[1] = 0;
	return (unit);
}

int main(int argc, char **argv)
{
	/* ABRIMOS EL FICHERO */
	int pos;
	int j;

	if (argc == 2)
	{
		/* CALCULAMOS LOS NUMEROS NECESARIOS PARA IMPRIMIR TODAS LAS PALABRAS */
		pos = ft_strlen(argv[1]);
		j = 0;
		while (pos >= 1)
		{
			pos = ft_strlen(argv[1]) - j;
			if (pos % 3 == 1 && pos / 3 > 0 && argv[1][j] != '0') /* Solo entra en los miles */
			{
				ft_print(fill_units(argv[1][j]));
				ft_print(zeros(&(argv[1][j]), pos, '1'));
				
			}
			else if (pos % 2 == 1 && pos / 2 > 0 && argv[1][j] != '0') // Solo entra en las centenas
			{
				ft_print(fill_units(argv[1][j]));
				ft_print(zeros(&(argv[1][j]), pos, '1'));
				
			}	
			else if (pos % 2 == 0 && pos / 2 > 0 && argv[1][j] == '1') /* Solo entra en las centenas y las unidades de 10 a 19 */
			{
					ft_print(&argv[1][j]);
			}
			else if (pos % 2 == 0 && pos / 2 > 0 && argv[1][j] != '0' ) /* Solo entra en las centenas y las unidades del 20 a 99 */
			{
			 		ft_print(zeros(&(argv[1][j]), pos, *fill_units(argv[1][j])));
					if (argv[1][j + 1] != '0')
			 			ft_print(fill_units(argv[1][j + 1]));
			}
			else if (pos % 1 == 0 && pos / 1 > 0  && argv[1][j] != '0'  && ft_strlen(argv[1]) <= 1) /* Solo entra en las unidades de 0 a 9 */
			{
				ft_print(&argv[1][j]);
			}
			else if (pos == 1 && ft_strlen(argv[1]) == 1) /* Solo entra a imprimir el cero 	*/		
			{
				if (argv[1][j] == '0')
					ft_print("0");
			}
			j++;
		}
	}
}