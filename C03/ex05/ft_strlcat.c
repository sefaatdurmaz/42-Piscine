/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 07:53:13 by sdurmaz           #+#    #+#             */
/*   Updated: 2022/09/10 18:55:53 by sdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	s;
	unsigned int	d;
	unsigned int	dlen;
	unsigned int	slen;

	s = 0;
	d = ft_strlen(dest);
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[s] != '\0' && s < size - dlen - 1)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dlen + slen);
}
