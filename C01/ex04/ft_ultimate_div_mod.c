/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:16:05 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/02 09:11:09 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	mug1;
	int	mug2;

	mug1 = *a / *b;
	mug2 = *a % *b;
	*a = mug1;
	*b = mug2;
}
/*
int	main(void)

{
	int	e;
	int	f;

	e = 47;
	f = 5;
	ft_ultimate_div_mod(&e, &f);
	printf("%d \n", e);
	printf("%d", f);
}*/
