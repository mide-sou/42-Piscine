/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:43:38 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/25 16:16:55 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (s1[c] == s2[c] && (s1[c] != '\0' && s2[c] != '\0') && c + 1 < n)
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

/*int	main(void)
{
	char	str1[] = {"abcdefghijklmn"};
	char	str2[] = {"abcdefghij"};
	unsigned int	sz;
	
	sz = 20;
	printf("%d\n", strncmp(str1, str2, sz));
	printf("%d\n", ft_strncmp(str1, str2, sz));
	return (0);
}*/
