/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 07:28:34 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/16 07:42:28 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)

{
	int	i;

	i = 0;
	while (i * i <= nb && i <= 446348)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
