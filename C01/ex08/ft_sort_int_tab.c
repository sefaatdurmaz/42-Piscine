/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:55:07 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/02 09:19:43 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	mug;

	while (size > 0)
	{
		counter = 0;
		while (counter < size - 1)
		{
			if (tab[counter + 1] < tab[counter])
			{
				mug = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = mug;
			}
			counter++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {47, 17, 23, 73, 37};
	int	size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	return (0);
}*/
