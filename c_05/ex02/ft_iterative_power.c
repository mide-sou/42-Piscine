/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:00:37 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/31 09:21:26 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}

/*int	main(void)
{
	int	nu = 5;
	int	elev = 5;
	
	printf("%d\n", ft_iterative_power(nu, elev));
	return (0);
}*/
