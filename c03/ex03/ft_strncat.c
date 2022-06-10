/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:20:14 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/26 20:59:53 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				idest;
	unsigned int	i;

	idest = ft_strlen(dest);
	i = 0;
	if ((src[i] != '\0') && nb > 0)
	{	
		while ((src[i] != '\0') && (i < nb))
		{	
			dest[idest] = src[i];
			i++;
			idest++;
		}
		dest[idest] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char a[] = "Hola";
	char b[] = " como estas?";


	printf("Src: %s\n", b);
	printf("Dest: %s\n", a);
	printf("Result: %s\n", ft_strncat(a, b, 5));
}
*/
