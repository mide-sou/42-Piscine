/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:14:55 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/02 10:23:33 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac > 1)
	{
		while (av[ac - 1][i])
		{
			write(1, &av[ac - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
