/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:40:35 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/06 09:18:11 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
			str[a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)

{
	int	index;
	int	new_word;

	index = 0;
	new_word = 1;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			if (new_word == 1)
				str[index] -= 32;
				new_word = 0;
		}
		else if (str[index] >= 48 && str[index] <= 57)
				new_word = 0;
		else
				new_word = 1;
			index++;
	}
	return (str);
}
