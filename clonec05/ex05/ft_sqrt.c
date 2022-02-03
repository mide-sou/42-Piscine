/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:33:44 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/29 18:03:35 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	y;

	y = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (y * y <= nb && y < 46341)
		{
			if (y * y == nb)
				return (y);
			y++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(144));
}*/
