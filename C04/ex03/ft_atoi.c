/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:00:29 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/13 12:00:01 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	count;
	int	nbr;

	index = 0;
	count = 1;
	nbr = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while ((str[index] == '-' || str[index] == '+') && str[index])
	{
		if (str[index] == '-')
			count *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		nbr *= 10;
		nbr += str[index] -48;
		index++;
	}
	nbr *= count;
	return (nbr);
}
