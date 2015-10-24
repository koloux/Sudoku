/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 15:30:56 by nhuber            #+#    #+#             */
/*   Updated: 2015/10/24 16:25:57 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			ft_putchar(grid[i][j]);
			if (j != 9)
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}

int main (int argc, char **argv)
{

	if (argc != 10)
		write(1, "Erreur", 6);
		return (0);
	ft_print(argv);
	return (0);
}
