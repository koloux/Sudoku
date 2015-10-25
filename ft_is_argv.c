/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 09:24:26 by nhuber            #+#    #+#             */
/*   Updated: 2015/10/25 12:00:05 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_argv(char **grid)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	while (grid[i][j])
	{
		while (grid[i][j])
		{
			if (j == 9)
				flag = 1;
			else
				flag = 0;
			j++;
		}
		if (flag == 0)
			return (0);
		j = 0;
		i++;
	}
	return (flag);
}
int		ft_is_grid(char **grid)
{
	int i;
	int j;
	int pos;

	pos = 0;
	i = 0;
	j = 0;
	while (grid[i][j])
	{
		if (grid[i][j] != '.')
		{
			if (ft_check_line(grid[i][j], pos, grid))
				return (0);
			if (ft_check_col(grid[i][j], pos, grid))
				return (0);
			if (ft_check_block(grid[i][j], pos, grid))
				return (0);
			j++;
		}
		i++;
		j = 0;
		pos++;
	}
	return (1);
}
