/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 14:56:23 by jplevy            #+#    #+#             */
/*   Updated: 2015/10/24 16:13:07 by jplevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_line(int nb, int pos,char tab[9][9])
{
	int		line = pos / 9;
	int		i;

	i = 0;
	while (i < 9)
	{
		if(i != pos % 9)
		{
			if(tab[line][i] == '0' + nb)
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_check_col(int nb, int pos,char tab[9][9])
{
	int		col = pos % 9;
	int		i;

	i = 0;
	while (i < 9)
	{
		if(i != pos / 9)
		{
			if(tab[i][col] == '0' + nb)
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_check_block(int nb, int pos,char tab[9][9])
{
	int		col = pos % 9;
	int		line = pos / 9;
	int		i;
	int		j;

	i = (col / 3) * 3;
	while (i < ((col / 3) * 3) + 3)
	{
		j = (line / 3) * 3;
		while (j < ((line / 3) * 3) + 3)
		{
			if(i != pos % 9 || j != pos / 9)
			{
				if(tab[j][i] == '0' + nb)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		main()
{
	char	tab[9][9] = {"9...7....", "2...9..53", ".6..124..", "84...1.9.", "5.....8..", ".31..4...", "..37..68.", ".9..5.741", "47......."};

	printf("%d", ft_check_block(4, 40, tab));
	return (0);
}
