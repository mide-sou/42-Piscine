/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:34:28 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/02 14:14:42 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int c;

	c = 0;
	if (ac == 2)
	{
		while (av[1][c] != '\0')
		{
			if ((av[1][c] >= 'a' && av[1][c] <= 'm') || (av[1][c] >= 'A' && av[1][c] <= 'M'))
			{
				av[1][c] += 13;
				write(1, &av[1][c], 1);
			}
			else if ((av[1][c] >= 'n' && av[1][c] <= 'z') || (av[1][c] >= 'N' && av[1][c] <= 'Z'))
			{
				av[1][c] -= 13;
				write(1, &av[1][c], 1);
			}
			else
				write(1, &av[1][c], 1);
		c++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
