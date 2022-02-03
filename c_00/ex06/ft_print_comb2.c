/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:47:02 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/18 14:55:05 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	addnum(int ab)
{
	ft_putchar('0' + ab / 10);
	ft_putchar('0' + ab % 10);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			addnum(a);
			write(1, " ", 1);
			addnum(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
	a++;
	}
}
