/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:59:54 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/22 10:37:40 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	l;
	int	r;

	l = 0;
	r = size - 1;
	while (l < r)
	{
		x = tab[l];
		tab[l] = tab[r];
		tab[r] = x;
		l++;
		r--;
	}
}

/*void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
		printf("%d, ", arr[i]);
		printf("%d\n", arr[size -1]);
}

int		main (void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int size;
	
	size = 7;
	printf("Original: ");
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}*/
