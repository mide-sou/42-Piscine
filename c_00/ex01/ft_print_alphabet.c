/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:55:52 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/17 15:57:21 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	mig;

	mig = 'a';
	while (mig <= 'z')
	{
		write(1, &mig, 1);
		mig++;
	}
}
