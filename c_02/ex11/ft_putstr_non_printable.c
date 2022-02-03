/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:52:32 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/25 17:49:02 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hexa(char arr)
{
	char	div;
	char	mod;
	
	ft_putchar('\\');
	div = arr / 16;
	mod = arr % 16;

	if (div < 10)
		ft_putchar(div + 48);
	else
		ft_putchar(div + 87);
	if (mod < 10)
		ft_putchar(mod + 48);
	else
		ft_putchar(mod + 87);
}

void ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c - 1])
	{
		if (str[c] >= 32 && str[c] < 127)
			ft_putchar(str[c]);
		else
			ft_dec_to_hexa(str[c]);
	c++;
	}
	str[c] = '\0';
}

int	main(void)
{
	char	stri[] = {"Coucou\ntu vas bien ?"};
	ft_putstr_non_printable(stri);
	printf("%s\n", stri);
	return (0);
}
