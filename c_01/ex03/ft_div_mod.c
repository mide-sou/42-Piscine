/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:32:49 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/20 11:02:36 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	x = 32;
	int	y = 10;
	int	*c;
	int	*d;

	c = &x;
	d = &y;
	ft_div_mod(x, y, c, d);
	printf("%d\n%d\n", *c, *d);
	return (0);
}*/
