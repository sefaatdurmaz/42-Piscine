/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:55:52 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/14 10:00:03 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)

{
	int	i;
	int	p;

	p = 1;
	while (p < argc)
	{
		i = 0;
		while (argv[p][i])
		{
			write(1, &argv[p][i], 1);
			i++;
		}
		write(1, "\n", 1);
		p++;
	}
}
