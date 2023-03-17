/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:15:18 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/13 12:30:06 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i1;
	int	i2;

	if (to_find[0] == '\0')
		return (str);
	i1 = 0;
	while (str[i1] != '\0')
	{
		i2 = 0;
		while (to_find[i2] != '\0')
		{
			if (str[i1 + i2] == to_find[i2])
				i2++;
			else
				break ;
		}
		if (to_find[i2] == '\0')
		{
			return (&str[i1]);
		}
		i1++;
		i2 = 0;
	}
	return (0);
}
