/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:10:39 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/14 18:37:01 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio

int	ft_iterative_factorial(int nb)

{
	int	a;

	a = 1;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (-1);
	}
	return (a);
}
