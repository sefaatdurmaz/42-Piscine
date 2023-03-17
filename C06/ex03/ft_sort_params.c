/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:41:25 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/14 18:09:01 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)

{
	unsigned int	index;

	index = 0;
	while ( s1[index] == s2[index] && (s1[index] != '\0' || s2[index] != '\0'))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

char	ft_swap(char *a, char *b)

{
	int mug;

	mug = *a;
	*a = *b;
	*b = mug;
}

int main(int argc, char **argv)

{
	int	i;
	int p;
	
	p = 1;
	while (p < argc -1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argc[i], argc[i+1]))
			{
				ft_swap(a, b);
			}
			i++;
		}
		write(1, "\n", 1);
		p++;
	}
	i = 1;
	while (p > argc)
	{
		write(1, &argv[i], 1);
		write(1, "\n", 1);
	}
}
