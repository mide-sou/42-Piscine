/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:14:18 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/31 08:47:31 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c <= nb / 2 && c <= 46341)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(-1));
}*/
