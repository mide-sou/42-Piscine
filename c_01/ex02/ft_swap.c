/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:54:56 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/20 10:48:03 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*int	main(void)
{
	int	c;
	int	d;

	c = 2;
	d = 4;

	ft_swap(&c, &d);
	printf("%d\n%d\n", c, d);
	return (0);
}*/
