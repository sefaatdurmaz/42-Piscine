/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:45:25 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/02 12:48:11 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < (size / 2))
	{
		swap = tab[a];
		tab [a] = tab [size - 1 - a];
		tab [size - 1 - a] = swap;
		a++;
	}
}

int	main(void)
{
	int	tab[7] = {0, 1, 2, 3, 4, 5, 6};
	int	size = 7;

	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]); 
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
	printf("%d", tab[6]);
	return (0);
}
