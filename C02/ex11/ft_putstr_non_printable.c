/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:11:14 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/11 07:58:37 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	ft_char_is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable_char(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_char_is_printable(str[index]) == 1)
		{
			ft_putchar(str[index]);
		}
		else
		{
			ft_putstr_non_printable_char(str[index]);
		}
		index++;
	}
}
