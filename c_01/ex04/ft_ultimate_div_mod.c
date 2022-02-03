/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:16:21 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/20 11:20:37 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	*h;
	int	*l;

	x = 23;
	y = 10;

	h = &x;
	l = &y;
	
	printf("%d\n", *h);
	ft_ultimate_div_mod(h, l);
	printf("%d\n%d\n", *h, *l);
	return (0);
}*/
