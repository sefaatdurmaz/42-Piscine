/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:20:03 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/08/29 17:42:07 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + 48);
			ft_putchar((x % 10) + 48);
			ft_putchar(' ');
			ft_putchar((y / 10) + 48);
			ft_putchar((y % 10) + 48);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
