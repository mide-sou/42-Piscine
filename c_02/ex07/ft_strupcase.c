/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wft_strupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:47:37 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/21 12:06:59 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char	ptr[] = {"abDfG"};

	printf("%s\n", ft_strupcase(ptr));
	return (0);
}*/
