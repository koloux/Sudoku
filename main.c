/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 09:20:35 by nhuber            #+#    #+#             */
/*   Updated: 2015/10/25 12:29:12 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_new_number(int n, int pos, char tab[9][9]);
void	ft_print(char **grid);

int		main(int argc, char **argv)
{
	if (argc != 10 || ft_is_argv(argv) != 1 || ft_is_grid(argv) != 1)
		write(1, "Erreur", 6);
		return (0);
	
	ft_print(argv);
	return (0);
}
