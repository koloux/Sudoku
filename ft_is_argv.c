/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 09:24:26 by nhuber            #+#    #+#             */
/*   Updated: 2015/10/25 09:30:52 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_argv(char **argv)
{
	int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
	while (arg[i][j])
	{
		while (arg[i][j])
		{
			if (j == 9)
				flag = 1;
			else
				flag = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (flag);
}
