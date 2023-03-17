/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:49:10 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/02 09:22:53 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	mug;

	mug = *a;
	*a = *b;
	*b = mug;
}
/*
int	main(void)

{
	int	x;
	int	y;

	x = 13;
	y = 17;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
