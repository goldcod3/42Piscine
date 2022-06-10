/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:18:03 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/28 18:14:13 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}	

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ldest;
	unsigned int	lsrc;

	i = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size > 0)
	{	
		while (src[i] != '\0' && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}	
	dest[i] = '\0';
	return (lsrc);
}
/*
int	main(void)
{
	char src[] = "Holaa";
	char dest[] = "Dani";
	unsigned int a = 0;

	a = ft_strlcpy(dest, src, 3);
	printf("String: %s\n", dest);	
	printf("Size: %u\n", a);
	return (0);
}
*/
