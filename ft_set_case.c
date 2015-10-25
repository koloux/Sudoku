/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 14:56:23 by jplevy            #+#    #+#             */
/*   Updated: 2015/10/25 09:45:09 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_line(int nb, int pos, char tab[9][9])
{
	int		line;
	int		i;

	line = pos / 9;
	i = 0;
	while (i < 9)
	{
		if (i != pos % 9)
		{
			if (tab[line][i] == '0' + nb)
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_check_col(int nb, int pos, char tab[9][9])
{
	int		col;
	int		i;

	col = pos % 9;
	i = 0;
	while (i < 9)
	{
		if (i != pos / 9)
		{
			if (tab[i][col] == '0' + nb)
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_check_block(int nb, int pos, char tab[9][9])
{
	int		col;
	int		line;
	int		i;
	int		j;

	col = pos % 9;
	line = pos / 9;
	i = (col / 3) * 3;
	while (i < ((col / 3) * 3) + 3)
	{
		j = (line / 3) * 3;
		while (j < ((line / 3) * 3) + 3)
		{
			if (i != pos % 9 || j != pos / 9)
			{
				if (tab[j][i] == '0' + nb)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_new_number(int n, int pos, char tab[9][9])
{
	while (n++ <= 9)
	{
		if (ft_check_line(n, pos, tab) == 0 &&
				ft_check_col(n, pos, tab) == 0 &&
				ft_check_block(n, pos, tab) == 0)
		{
			tab[pos / 9][pos % 9] = n;
			return (1);
		}
	}
	return (0);
}
