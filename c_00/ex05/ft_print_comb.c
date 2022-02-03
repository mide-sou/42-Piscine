/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:48:36 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/17 16:20:55 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	pr;
	char	seg;
	char	ter;

	pr = '0';
	while (pr <= '7')
	{
		seg = pr + 1;
		while (seg <= '8')
		{	
			ter = seg + 1;
			while (ter <= '9')
			{
				write(1, &pr, 1);
				write(1, &seg, 1);
				write(1, &ter, 1);
				if (pr != '7' || seg != '8' || ter != '9')
					write(1, ", ", 2);
				ter++;
			}
		seg++;
		}
	pr++;
	}
}
