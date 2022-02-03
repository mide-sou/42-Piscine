/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:36:01 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/22 11:06:38 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 32 || str[c] > 127)
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char	ptr[] = {" "};
	
	printf("%d\n", ft_str_is_printable(ptr));
	return (0);
}*/
